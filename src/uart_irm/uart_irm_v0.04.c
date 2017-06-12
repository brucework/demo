/****************************************************************************
 *
 *   Copyright (c) 2013-2014 PX4 Development Team. All rights reserved.
 *   Author: Stefan Rado <px4@sradonia.net>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file frsky_telemetry.c
 * @author Stefan Rado <px4@sradonia.net>
 * @author Mark Whitehorn <kd0aij@github.com>
 *
 * FrSky D8 mode and SmartPort (D16 mode) telemetry implementation.
 *
 * This daemon emulates the FrSky Sensor Hub for D8 mode.
 * For X series receivers (D16 mode) it emulates SmartPort sensors by responding to polling
 * packets received from an attached FrSky X series receiver.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>
#include <poll.h>
#include <fcntl.h>
#include <unistd.h>
//#include <systemlib/err.h>
//#include <systemlib/systemlib.h>
#include <termios.h>
//#include <drivers/drv_hrt.h>

#include <errno.h>
//#include <systemlib/err.h>

#include <sys/time.h>
#include <unistd.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

/* IRM uart & LOG path */
#define PATH_SERIAL_FD "/dev/ttyUSB0"
#define SERIAL_BITRATE B115200

//#define LOG_FILE_PATH "/fs/microsd/irm_log002.txt"
#define LOG_FILE_PATH "./irm_log002.txt"
struct _reg{
	uint16_t reg;
	uint16_t val;
};



/* thread state */
static volatile bool thread_should_exit = false;
static volatile bool thread_running = false;
static int irm_task;

struct irm_data{
	uint8_t	node_addr;
	uint8_t cmd;
	uint16_t reg;
	uint16_t val;
	uint16_t speed[4];
};

struct arg_conf{
		uint16_t count;
		uint16_t node_id;
		int speed[20];
};

struct arg_conf ctl;

/* functions */
static int irm_open_uart(const char *uart_name, struct termios *uart_config, struct termios *uart_config_original);
static int irm_set_uart_speed(int uart, struct termios *uart_config, speed_t speed);
static void usage(void);
static int irm_create_file(char * log_path);
static int send_package(uint8_t *data, int package_lens);
static int checksum(uint8_t * buf, int lens);
static int fill_package(uint8_t node_addr, uint8_t commond, uint8_t *data, uint8_t data_len);
static int reg_write(uint8_t node_addr, uint16_t reg, uint16_t val);
static int reg_read(uint8_t node_addr, uint16_t reg, uint16_t val);
static int motor_ctl_speed(uint8_t node_address, uint8_t cmd, uint16_t *speed);
static int uart_ioctl(struct irm_data pre, int _fd);
static int irm_thread_main(int argc, char *argv[]);
//static int save_log(int argc, char *argv[]);
static void irm_init(void);
//__EXPORT int uart_irm_main(int argc, char *argv[]);


/**
 * Opens the UART device and sets all required serial parameters.
 */
static int irm_open_uart(const char *uart_name, struct termios *uart_config, struct termios *uart_config_original)
{
	/* Open UART */
	const int uart = open(uart_name, O_RDWR | O_NOCTTY | O_NONBLOCK);

	if (uart < 0) {
		err(1, "Error opening port: %s", uart_name);
	}

	/* Back up the original UART configuration to restore it after exit */
	int termios_state;

	if ((termios_state = tcgetattr(uart, uart_config_original)) < 0) {
		warnx("ERR: tcgetattr%s: %d\n", uart_name, termios_state);
		close(uart);
		return -1;
	}

	/* Fill the struct for the new configuration */
	tcgetattr(uart, uart_config);

	/* Disable output post-processing */
	uart_config->c_oflag &= ~OPOST;

	/* Set baud rate */
	static const speed_t speed = SERIAL_BITRATE;//B115200;

	if (cfsetispeed(uart_config, speed) < 0 || cfsetospeed(uart_config, speed) < 0) {
		warnx("ERR: %s: %d (cfsetispeed, cfsetospeed)\n", uart_name, termios_state);
		close(uart);
		return -1;
	}

	if ((termios_state = tcsetattr(uart, TCSANOW, uart_config)) < 0) {
		warnx("ERR: %s (tcsetattr)\n", uart_name);
		close(uart);
		return -1;
	}
#if 0
	char a[] = {0x55};
	while(1)
	{
		write(uart, (void *)a,2);
	}
#endif
	return uart;
}

static int irm_set_uart_speed(int uart, struct termios *uart_config, speed_t speed)
{

	if (cfsetispeed(uart_config, speed) < 0) {
		return -1;
	}

	if (tcsetattr(uart, TCSANOW, uart_config) < 0) {
		return -1;
	}

	return uart;
}

/**
 * Print command usage information
 */
static void usage()
{
	fprintf(stderr,
		"usage: uart_irm start [-d <devicename>]\n"
		"       uart_irm stop\n"
		"       uart_irm status\n");
	exit(1);
}


/**
 *create the log files "/fs/microsd/irm_imu_log001.txt"
**/
static int irm_create_file( char * log_path)
{

	/* create files */
	int ret = 0;
//	unsigned n;
	FILE *fd;
	char *s = malloc(256);
	/* Open or create the data debug file */
	fd = fopen(LOG_FILE_PATH, "ab");

	if (fd == NULL) {
		warnx("Could not open data debug file %s", log_path);
		ret = -1;
	}

	fclose(fd);
	free(s);

	return ret;
}

#define FRAME_LENS 1024

char frame_buffer[FRAME_LENS];
uint64_t frame_count = 0;
uint8_t package[32];

#define PACKAGE_HEADER_LENS	2

static int test_fd;
#if 0
static int save_log(uint8_t *data, int len)
{
	unsigned n;
   uint64_t log_time = hrt_absolute_time();
	char *s = malloc(256);
	FILE *fd;
	fd = fopen(LOG_FILE_PATH, "a");

#if 0
	int i;
	for(i = 0; i < len; i++)
	{
		n = snprintf(s, 2,"%c,", data[i]);
		fwrite(s, 1, n, fd);
	}

#else
	if(data[1] == 0x88)
	{
       n = snprintf(s, 256,"num: \t%d \t time: \t%ld\t  speed:  \t%ld \t ldqFilt: \t%ld \t SwFaults: \t%ld\n", 1,(long int)log_time, (long int)((data[2]<<8) + data[3]), (long int)((data[4]<<8) + data[5]), (long int)((data[6]<<8) + data[7]));
        fwrite(s, 1, n, fd);
	}
	if(data[1] == 0x89)
	{
        n = snprintf(s, 256,"num: \t%d \t  time: \t%ld\t speed: \t%ld \tldqFilt: \t%ld \t SwFaults:\t%ld\n", 2,(long int)log_time, (long int)((data[2]<<8) + data[3]), (long int)((data[4]<<8) + data[5]), (long int)((data[6] <<8) + data[7]));
		fwrite(s, 1, n, fd);
	}
	if(data[1] == 0x8a)
	{
        n = snprintf(s, 256,"num: \t%d \t time:\t %ld\t speed: \t%ld\t ldqFilt: \t%ld \t SwFaults:\t%ld\n", 3,(long int)log_time, (long int)((data[2]<<8) + data[3]), (long int)((data[4]<<8) + data[5]), (long int)((data[6] <<8) + data[7]));
		fwrite(s, 1, n, fd);
	}
	if(data[1] == 0x8b)
	{
        n = snprintf(s, 256,"num: \t%d \t time: \t%ld\t speed: \t%ld\t ldqFilt:\t%ld \t SwFaults:\t%ld\n", 4,(long int)log_time, (long int)((data[2]<<8) + data[3]), (long int)((data[4]<<8) + data[5]), (long int)((data[6] <<8) + data[7]));
		fwrite(s, 1, n, fd);
	}

#endif

	free(s);
	fclose(fd);

	return 0;
}
#endif

static enum {
	RD_STATUS = 0,
	CL_FAULT,
	CHANGE_CTL_MODE,
	MOTOR_CTL,
	REG_RD = 5,
	REG_WR,
	CTL_NODE1 = 8,
	CTL_NODE2,
	CTL_NODE3,
	CTL_NODE4,
}commander = -1;

#define ALL_NODE	0x00		//All nodes receive and execute command, no response.

/*
 * All nodes receive and execute the command and reply the master. Only used in 1-to-1
 * configuration. It will cause conflict if multiple nodes connected to the same network
*/

#define ONETOONE	0xFF

#define CHECK_SUM 0xffff
struct save_times {
	struct timeval send_time;
	struct timeval poll_time;
	struct timeval receive_time;
	uint64_t set_speed;
	uint64_t speed;
	uint8_t buffer[32];
	uint8_t count;
};
static struct save_times times_buffer[100];
uint8_t counts = 0;
uint8_t data_buff[32];
uint8_t feedback_data[32];

static int save_test(void)
{
	int ret;
	int i = 0;
	struct pollfd fds;
	fds.fd = test_fd;
	fds.events = POLLIN;
//	times_buffer[counts].count = counts;
	times_buffer[0].count = 0;
//	times_buffer[counts].set_speed = (package[4] << 8) + package[5];
	times_buffer[0].set_speed = (package[4] << 8) + package[5];
REPOLL:
	ret = poll(&fds, 1, 1);
	{
		
		if (ret > 0) {

		//	usleep(10);
			ret = read(test_fd, feedback_data, sizeof(feedback_data));
			if(ret > 0)
			{
				int j = 0;
				for(j = 0; j < ret; j++)
				{
					data_buff[i++] = feedback_data[j];
				//	times_buffer[counts].buffer[i-1] = feedback_data[j];
					times_buffer[0].buffer[i-1] = feedback_data[j];
				}
			//	save_log(feedback_data, ret);
			}
		}
		if(fds.revents & POLLIN)
			goto REPOLL;
	}
//	usleep(100);

//	gettimeofday(&times_buffer[counts].receive_time, NULL);
	gettimeofday(&times_buffer[0].receive_time, NULL);
//	times_buffer[counts].receive_time = hrt_absolute_time();
//	times_buffer[counts].speed = (data_buff[4] << 8) + data_buff[5];
	times_buffer[0].speed = (data_buff[2] << 8) + data_buff[3];
//	if(times_buffer[0].speed > 32768)
//		times_buffer[0].speed = times_buffer[0].speed - 65536;
	printf("rec:%d,%d:speed:%lld\n", data_buff[2],data_buff[3],times_buffer[0].speed);
//	usleep(200);
		unsigned n = 0;
		int ii;
		char *s = malloc(256);
		FILE *fd;

		//printf("%d\n", times_buffer[0].speed);	
	
		fd = fopen(LOG_FILE_PATH, "a");
		n = snprintf(s, 256,"11%ld,%llu,%ld,%llu\n", times_buffer[0].send_time.tv_sec * 1000000 + times_buffer[0].send_time.tv_usec, times_buffer[0].set_speed, times_buffer[0].receive_time.tv_sec * 1000000 + times_buffer[0].receive_time.tv_usec, times_buffer[0].speed);
			fwrite(s, 1, n, fd);
		free(s);
		fclose(fd);
		memset(times_buffer, 0, sizeof(struct save_times) * 100);

#if 0
	if(counts == 99)
	{
		counts = -1;
		unsigned n = 0;
		int ii;
		char *s = malloc(256);
		FILE *fd;
		
		fd = fopen(LOG_FILE_PATH, "a");
		for( ii = 0; ii < 100; ii++)
		{
			n = snprintf(s, 256,"11%lld,%llu,%lld,%llu\n", times_buffer[ii].send_time.tv_sec * 1000000 + times_buffer[ii].send_time.tv_usec, times_buffer[ii].set_speed, times_buffer[ii].receive_time.tv_sec * 1000000 + times_buffer[ii].receive_time.tv_usec, times_buffer[ii].speed);
			fwrite(s, 1, n, fd);
		}
		free(s);
		fclose(fd);
		memset(times_buffer, 0, sizeof(struct save_times) * 100);
	}
	counts = counts + 1;
#endif

	return 0;
}

static int send_package(uint8_t *data, int package_lens)
{
	int ret = 0;
	/* poll descriptor */
	struct pollfd fds;
	fds.fd = test_fd;
	fds.events = POLLIN;
	memset(feedback_data, 0, sizeof(feedback_data));

//	gettimeofday(&times_buffer[counts].send_time, NULL);
	gettimeofday(&times_buffer[0].send_time, NULL);
	ret = write(test_fd, (void *)data, package_lens);
	int i = 0;
	for(i = 0; i < package_lens; i++)
	{
		printf("0x%02x ", data[i]);
	}
	printf("\nn");
	save_test();
	return 0;
REPOLL:
	ret = poll(&fds, 1, 10);
	{
	
		if (ret > 0) {

			ret = read(test_fd, feedback_data, sizeof(feedback_data));
			if(ret > 0)
			{
				save_log(feedback_data, ret);
			}
		}
		if(fds.revents & POLLIN)
			goto REPOLL;
	}
//	if(j == 12)
//	save_log(test, j);
//	memset(test, 0, sizeof(test));
	return ret;

}
static int checksum(uint8_t * buf, int lens)
{
	uint16_t sum = 0;
	int i = 0;

	if (buf == NULL || lens < 8)
	{
		return -1;
	}

	while(i < lens - 2)
	{
		sum += buf[i+1] + (buf[i] << 8);
		i += 2;
	}

	sum = CHECK_SUM - sum + 1;
	buf[i] = (sum & 0xff00)>>8;
	buf[i+1] = (sum & 0xff);

	return 0;
}

static int fill_package(uint8_t node_addr, uint8_t commond, uint8_t *data, uint8_t data_len)
{
	int ret = 0;
	int i = 0;

	memset(package, 0, sizeof(package));

	//uart frame header
	package[0] = node_addr;
	package[1] = commond;

	for(i = 0; i < data_len; i++)
	{
		package[i + 2] = data[i];
	}

	// fill checksum.
	ret = checksum(package, data_len + PACKAGE_HEADER_LENS);

	return ret;
}

static int reg_write(uint8_t node_addr, uint16_t reg, uint16_t val)
{
	int ret = 0;
	uint8_t data[32];

	data[0] = (reg & 0xff00) >> 8;		//reg address
	data[1] = reg & 0xff;
	data[2] = (val & 0xff00) >> 8;
	data[3] = val & 0xff;
	data[4] = 0x0;
	data[5] = 0x0;

	ret = fill_package(node_addr, REG_WR, data, 6);

	ret = send_package(package, 8);

	return ret;
}

/*
 * read the register value from irm.
 * node_addr: the node ID
 * reg: the irm REG
 * val: save the read data
 *
 * need to edit this function
*/
static int reg_read(uint8_t node_addr, uint16_t reg, uint16_t val)
{
	uint16_t ret = 0;
	uint8_t data[32];

	data[0] = (reg & 0xff00) >> 8;		//reg address
	data[1] = reg & 0xff;
	data[2] = 0x0;
	data[3] = 0x0;
	data[4] = 0x0;
	data[5] = 0x0;

	ret = fill_package(node_addr, REG_RD, data, 6);

	ret = send_package(package, 8);
	if(ret == 0)
	{
		ret = (feedback_data[4] >> 8) + feedback_data[5];
	}

	return ret;

}

static int clear_fault_status(uint8_t node_address, uint8_t cmd)
{
	int ret = 0;
	uint8_t data[32];
	int len;

	//frame header
	data[0] = 0xff;
	data[1] = 0x1;
	data[2] = 0x0;
	data[3] = 0x0;
	data[4] = 0x0;
	data[5] = 0x0;
	len = 6;

	ret = fill_package(node_address, cmd, data, len);

	send_package(package, len+2);

	return ret;
}

static int motor_ctl_speed(uint8_t node_address, uint8_t cmd, uint16_t *speed)
{
	int ret = 0;
	uint8_t data[32];
	int len;
	int i = 0;

	//frame header
	if(cmd == MOTOR_CTL)
	{
		data[0] = 0x0;
		data[1] = 0x0;
		data[2] = (speed[i] & 0xff00) >> 8;
		data[3] = speed[i] & 0xff;
		data[4] = 0;
		data[5] = 0;
		len = 6;

	}else{

		for (i = 0; i < 4; i++)
		{
			data[i*2] = (speed[i] & 0xff00) >> 8;
			data[i*2+1] = speed[i] & 0xff;
		}
		data[i*2+2] = 0;
		data[i*2+3] = 0;

		len = 10;
	}
	printf("speed:%d,%d,%d\n", speed[0], data[2],data[3]);
	ret = fill_package(node_address, cmd, data, len);

	send_package(package, len+2);

	return ret;
}

static int uart_ioctl(struct irm_data pre, int _fd)
{
	int ret=0;

	test_fd = _fd;
	commander = pre.cmd;

	switch(commander) {
		case RD_STATUS:

			break;

		case CL_FAULT:
			ret = clear_fault_status(pre.node_addr, commander);

			break;

		case CHANGE_CTL_MODE:

			break;

		case MOTOR_CTL:
			ret = motor_ctl_speed(pre.node_addr, commander, pre.speed);

			break;

		case REG_RD:
			ret = reg_read(pre.node_addr, pre.reg, pre.val);

			break;

		case REG_WR:
			ret = reg_write(pre.node_addr, pre.reg, pre.val);

			break;

		case CTL_NODE1:
		case CTL_NODE2:
		case CTL_NODE3:
		case CTL_NODE4:
			ret = motor_ctl_speed(pre.node_addr, commander, pre.speed);

			break;

	}

	return ret;
}


struct _reg reg_cfg[100];
#define REG_FILE "./irm_init.txt"

int test()
{
	FILE *fp;
	
	int count = 0;
	fp = fopen(REG_FILE, "r+");
	if(fp == NULL)
	{
		printf("open REG_FILE error\n");
		return -1;
	}

	while(!feof(fp))
	{
       fscanf(fp,"%x%d", &reg_cfg[count].reg, &reg_cfg[count].val);
		count++;
	}
	fclose(fp);
	return count - 1;
}


/**
 * The daemon thread.
 */
static int irm_thread_main(int argc, char *argv[])
{
	/* Default values for arguments */
	char *device_name = PATH_SERIAL_FD;

	/* Work around some stupidity in task_create's argv handling */
	argc -= 2;
	argv += 2;

	/* Open UART assuming SmartPort telemetry */
	struct termios uart_config_original;
	struct termios uart_config;
	int uart = irm_open_uart(device_name, &uart_config, &uart_config_original);

	if (uart < 0) {
		warnx("could not open %s", device_name);
	}

	/* poll descriptor */
	thread_running = true;

	int status = irm_set_uart_speed(uart, &uart_config, SERIAL_BITRATE);

	if( status < 0)
	{
		/* Reset the UART flags to original state */
	//	tcsetattr(uart, TCSANOW, &uart_config_original);
	//	close(uart);

		thread_running = false;
	//	return 0;
	}

	/* init the status */
	frame_count = 0;
	memset(frame_buffer, 0 ,sizeof(frame_buffer));

    struct _reg *buffs;
    struct irm_data irm_buffer;
	int reg_sum = 0;
//	reg_sum = test();
#if 1
	reg_sum = 53;
    struct _reg reg_cfg[] = {
#if 1
//      {0x222, 269  },
//      {0x220, 0    },
//      {0x221, 256  },		//for differt port 1:256,2:512,3:768,4:1024
//      {0x0bd, 2    },
        {0x0be, 8336 },  //BitRATE:115200
        {0x0e9, 299  },
        {0x0ea, 280  },
        {0xe87, 10   },
        {0x114, 0    },
        {0xe88, 0    },
        {0x10a, 4000 },
        {0x1cc, 4096 },
        {0x1cf, 2048 },
        {0x1da, 1024 },
        {0x095, 412  },
        {0x094, 412  },
        {0x0a9, 1249 },
        {0x137, 4974 },
        {0x1c6, 1100  },
        {0x1c8, 30   },
        {0x10c, 1875 },
        {0x1d4, 5851 },
        {0x16c, 18286},
        {0x066, 8946 },
        {0x073, 5519 },
        {0x074, 1821 },
        {0x072, 0    },
        {0x086, 400  },
        {0x087, 400   },
        {0x12a, 1174 },
        {0x06c, 8191 },
        {0x0a5, 176  },
        {0x1f1, 13384},
        {0x05c, 0    },
        {0x071, 15   },
        {0x0a8, 1512 },
        {0x10d, 918  },
        {0x024, 64435},
        {0x020, 1835 },
        {0x126, 4096 },
        {0x16e, 32   },
        {0x16f, 0    },
        {0x170, 4093 },
        {0x0c3, 76   },
        {0xeeb, 80   },
        {0x13b, 3614 },
        {0x13c, 1004 },
        {0x13a, 4417 },
        {0x1a2, 1800 },
        {0x10e, 400  },
        {0x10f, 480  },
        {0x1cd, 19840},
        {0x112, 0    },
        {0x113, 0    },
        {0x11f, 3    },
        {0x117, 0    },
        {0x118, 0    }
//		{0xf52, 32   }
#endif
    };
#endif
	int i = 0;
	int j = 0;
	for(i = 0; i < reg_sum; i++)// sizeof(reg_cfg)/sizeof(struct _reg); i++)
	{
		irm_buffer.node_addr = ONETOONE;//ALL_NODE;
		irm_buffer.cmd = 6;         //REG_WR;

		if(reg_cfg[i].reg == 0x221)
		{
			for(j = 0; j < 4; j++)
			{
				buffs = &reg_cfg[i];
				irm_buffer.node_addr = j + 1;   //ONETOONE;//ALL_NODE;
				buffs->val = buffs->val *(j + 1);
				irm_buffer.reg = buffs->reg;
				irm_buffer.val = buffs->val;
				uart_ioctl(irm_buffer, uart);
			}
		}else{

		buffs = &reg_cfg[i];
		irm_buffer.reg = buffs->reg;
		irm_buffer.val = buffs->val;
		uart_ioctl(irm_buffer, uart);
//		printf("reg:%x,val:%d\n", buffs->reg, buffs->val);
		}
		usleep(20);
	}
//return 0;
#if 0	//for test sound 
    struct _reg reg_cfg_sound[] = {
        {0x11f, 3    },
        {0x11f, 3    },
        {0x11f, 3    },
        {0x11f, 3    },
        {0x11f, 3    },
        {0x11f, 3    }
	};
	printf("count:%d \n", (sizeof(reg_cfg_sound) / sizeof(reg_cfg_sound[0])));

	return 0;
#endif


        irm_buffer.node_addr = 0;// ONETOONE;//ALL_NODE;
		irm_buffer.cmd = MOTOR_CTL; //REG_WR;
		irm_buffer.reg = 0x220;
		irm_buffer.val = 0;
        irm_buffer.speed[0] = 2000;//5000;
        irm_buffer.speed[1] = 2000;//1000;
        irm_buffer.speed[2] = 2000;//1000;
        irm_buffer.speed[3] = 2000;//1000;
		uart_ioctl(irm_buffer, uart);

	int test = 0;
	int count = 2000;

while(1)
{
	uart_ioctl(irm_buffer, uart);
}
//	irm_buffer.node_addr = ctl.node_id;
	irm_buffer.node_addr = 0;
	while(1)
	{
		for( j = 0; j < ctl.count; j++)
		{
			//printf("speed:%d\n", ctl.speed[j]);
//			irm_buffer.speed[0] = ctl.speed[j];
    		irm_buffer.node_addr = 0;//ONETOONE;//ALL_NODE;
			irm_buffer.cmd =  7 + ctl.node_id;
    		irm_buffer.speed[0] = ctl.speed[j];
    		irm_buffer.speed[1] = ctl.speed[j];
    		irm_buffer.speed[2] = ctl.speed[j];
    		irm_buffer.speed[3] = ctl.speed[j];

			for(test = 0; test < count; test++)
			{
				uart_ioctl(irm_buffer, uart);
				usleep(200);
			}
		}
	}
	
#if 0
	int irm_actuator_controls_0 = -1;

	irm_actuator_controls_0 = orb_subscribe(ORB_ID(actuator_controls_0));

	if (irm_actuator_controls_0 < 0)
		warnx("subscription(s) failed");

//	unsigned update_interval = 100;
	struct pollfd fds[1];
	fds[0].fd = irm_actuator_controls_0;
	fds[0].events = POLLIN;
//	orb_set_interval(irm_actuator_controls_0, update_interval);
	int ret = 0;
	struct actuator_controls_s controls;
   	int count = 1;

	perf_counter_t irm_loop_perf;

	irm_loop_perf = perf_alloc(PC_COUNT, "uart_irm");

		perf_begin(irm_loop_perf);
	while (!thread_should_exit) {
		ret = px4_poll(&fds[0], (sizeof(fds) / sizeof(fds[0])), 0);
		perf_event_count(irm_loop_perf);
		if(ret < 0){
			irm_buffer.speed[0] = 10;
			continue;
		}

		if(fds[0].revents & POLLIN)
		{
			orb_copy(ORB_ID(actuator_controls_0), irm_actuator_controls_0, &controls);
  	 	 	{
				if(count == 5)
				{
					count = 1;
				}
    			irm_buffer.node_addr = 0;//ONETOONE;//ALL_NODE;
				irm_buffer.cmd = 11;
    			irm_buffer.speed[0] = (double)controls.control[0];
    			irm_buffer.speed[1] = (double)controls.control[1];
    			irm_buffer.speed[2] = (double)controls.control[2];
    			irm_buffer.speed[3] = (double)controls.control[3];
    			uart_ioctl(irm_buffer, uart);
				count = count + 1;
				usleep(100);
#if 0
			usleep(200);
   	 		irm_buffer.node_addr = count + 1;//ONETOONE;//ALL_NODE;
			irm_buffer.cmd = CL_FAULT;
   	 		uart_ioctl(irm_buffer, uart);
#endif
   		 	}
		}
    }

	perf_end(irm_loop_perf);
#endif
	/* Reset the UART flags to original state */
	tcsetattr(uart, TCSANOW, &uart_config_original);
	close(uart);
	thread_running = false;

	return 0;

}

/**
 * irm init
**/
static void irm_init(void)
{
	int ret;

	ret = irm_create_file(LOG_FILE_PATH);
	if (ret != 0 )
	{
		warnx("irm create log file error");
	}

}

/**
 * The main command function.
 * Processes command line arguments and starts the daemon.
 */
int main(int argc, char *argv[])
{
	if (argc < 2) {
		warnx("missing command");
		usage();
	}

	if (!strcmp(argv[1], "start")) {

		/* this is not an error */
		if (thread_running) {
			errx(0, "irm already running");
		}

		irm_init();
		thread_should_exit = false;
//		mti_task = px4_task_spawn_cmd("mti",
//						SCHED_DEFAULT,
//						200,
//						1100,
//						mti_thread_main,
//						(char *const *)argv);

		int i = 0;
		ctl.count = argc - 3;
		ctl.node_id = atoi(argv[2]);
		//printf("node id:%d, speed count:%d\n", ctl.node_id, ctl.count);
		for(i = 0; i < argc - 3; i++)
		{
			ctl.speed[i] = atoi(argv[i + 3]);
			//printf("speed[%d]%d\n", i+1, ctl.speed[i]);
		}
	
		irm_thread_main(argc, argv);

		while (!thread_running) {
			usleep(200);
		}

		exit(0);
	}

	if (!strcmp(argv[1], "stop")) {

		/* this is not an error */
		if (!thread_running) {
			errx(0, "irm already stopped");
		}

		thread_should_exit = true;

		while (thread_running) {
			usleep(1000000);
			warnx(".");
		}

		warnx("terminated.");
		exit(0);
	}

	if (!strcmp(argv[1], "status")) {
		} else {
			errx(1, "not running");
		}

	warnx("unrecognized command");
	usage();

	return 0;
}
