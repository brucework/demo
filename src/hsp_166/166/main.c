#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <fcntl.h>
#include <poll.h>
#include <string.h>

#include <debug.h>

#define SERIAL_DEVICE_NAME "/dev/ttyUSB0"
#define SERIAL_BITRATE B115200
#define SENSOR_PACKET_START         0x0a
#define SENSOR_DATA_LEN             15

typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned long U32;
typedef char S8;
typedef short S16;
typedef long S32;

typedef struct RO_DATA
{
    U16 distance;
    U16 precision;
    U16 magnitude;
    U8  magnitude_exp;
    U8  ambient_adc;
}sensorData;

U16 crc_ta_4[16]={ /* CRC half byte table */
    0x0000,0x1021,0x2042,0x3063,0x4084,0x50a5,0x60c6,0x70e7,
    0x8108,0x9129,0xa14a,0xb16b,0xc18c,0xd1ad,0xe1ce,0xf1ef,
};
unsigned char stop[] = {0x0a, 0x30,0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x6f};
unsigned char step[] = {0x0a, 0x22,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, 0x57};
unsigned char continuity[] = {0x0a, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x72};

int uart_fd = 0;
struct termios uart_config_original;

static int set_uart_speed(speed_t speed)
{
    int ret = 0;
    int termios_state;
    struct termios *uart_config;

    if((termios_state = tcgetattr(uart_fd, &uart_config_original)) < 0)
    {
        err("Error: tcgetattr %s: %d\n", SERIAL_DEVICE_NAME, termios_state);
        ret = -1;
        goto exit;
    }

    if(cfsetispeed(uart_config, speed) < 0)
    {
        err("Error: %s (cfsetispeed)\n", SERIAL_DEVICE_NAME);
        ret = -1;
        goto exit;
    }

    if(tcsetattr(uart_fd, TCSANOW, uart_config) < 0)
    {
        err("Error: %s (tcsetattr)\n", SERIAL_DEVICE_NAME);
        ret = -1;
        goto exit;
    }

exit:
    return ret;
}

static int uart_init(void)
{
    int ret = 0;
    int termios_state = 0;
    static speed_t speed = SERIAL_BITRATE;
    struct termios *uart_config;
    char *dev_name = SERIAL_DEVICE_NAME;

    info("Enter: %s\n", __func__);

    uart_fd = open(dev_name, O_RDWR | O_NOCTTY | O_NONBLOCK);

    if(uart_fd < 0)
    {
        err("Error: opening port: %s\n", SERIAL_DEVICE_NAME);
        ret = -1;
        goto exit;
    }

    if((termios_state = tcgetattr(uart_fd, &uart_config_original)) < 0)
    {
        err("Error: tcgetattr %s: %d\n", SERIAL_DEVICE_NAME, termios_state);
        close(uart_fd);
        ret = -1;
        goto exit;
    }else
    {
        info("tcgetattr success!\n");
    }

    uart_config = &uart_config_original;

    /* Disable outpu post-processing */
    uart_config->c_oflag &= ~OPOST;

    /* Set baud rate */
    if(cfsetispeed(uart_config, speed) < 0 || cfsetospeed(uart_config, speed) < 0)
    {
        err("Error: %s (cfsetispeed, cfsetospeed)\n", SERIAL_DEVICE_NAME);
        close(uart_fd);
        ret = -1;
        goto exit;
    }else
    {
        info("cfsetispeed cfsetospeed success!\n");
    }

    if((termios_state = tcsetattr(uart_fd, TCSANOW, uart_config)) < 0)
    {
        err("Error: %s (tcsetattr)\n", SERIAL_DEVICE_NAME);
        close(uart_fd);
        ret = -1;
        goto exit;
    }else
    {
        info("tcsetattr success!\n");
    }


exit:
    return ret;
}

void uart_close()
{
    /* Reset the UART flags to original state */
    if(tcsetattr(uart_fd, TCSANOW, &uart_config_original))
    {
        err("Error: %s (tcsetattr)\n", SERIAL_DEVICE_NAME);
    }

    close(uart_fd);
}

U16 CRC16_Cal(U8* ptr, U8 len)
{
    U16 crc = 0xffff;
    U8 high = 0x00;

    while(len-- != 0)
    {
        high = (U8)(crc/4096);
        crc <<= 4;
        crc ^= crc_ta_4[high^(*ptr/16)];
        high = (U8)(crc/4096);
        crc <<= 4;
        crc ^= crc_ta_4[high^(*ptr&0x0f)];
        ptr++;

    }
    return crc;

}

U8 packet_parser(U8 *packet, U8 data_buff[])
{
    U16 crc16_cal = 0x0000;
    U16 crc16_packet = 0x0000;
    U8 len = packet[1]+2;

    if(packet[0] != SENSOR_PACKET_START)
    {
        return 0;
    }

    crc16_packet = packet[len-2]<<8;
    crc16_packet |= packet[len-1];
    crc16_cal = CRC16_Cal(packet+2, len-4);
    if(crc16_cal == crc16_packet)
    {
        memcpy(data_buff, packet+2, len-4);
        return 1;
    }

    return 0;
}

int main(void)
{
    int ret = 0;
    int i = 0;
    int offset = 0;
    struct pollfd fds;
    unsigned char buf[20];
    unsigned char data[15];
    sensorData dbuf;

    ret = uart_init();

    if(ret == -1)
    {
        err("Error: uart_Init failed.\n");
        goto exit;
    }else
    {
        info("uart_init success!\n");
    }

    fds.fd = uart_fd;
    fds.events = POLLIN;

    printf("\033[2J\033[2;0H");
    while(1)
    {
        memset(buf, 0, sizeof(buf));
        write(uart_fd, step, sizeof(step));
        usleep(1 * 1000);
REPOLL:
        ret = poll(&fds, 1, 1);
        if(ret > 0)
        {
            ret = read(uart_fd, buf, 15);
            if(ret > 0)
            {
                for(i = 0; i < ret; i++)
                {
                    data[offset] = buf[i];
                    offset++;
                }
            } }

        if(fds.revents & POLLIN)
        {
            goto REPOLL;
        }

        offset = 0;

        ret = packet_parser(data, buf);
        if(ret = 1)
        {
            dbuf.distance = ((data[5] << 8)|data[6]);
            dbuf.magnitude = (data[7] << 8)|data[8];
            dbuf.magnitude_exp = data[9];
            dbuf.ambient_adc = data[10];
            dbuf.precision = (data[11] << 8)|data[12];
        }
        printf("\033[2J");
        printf("\033[2;0H");
        printf("\033[7m\tDistance\tMagnitude\tmagnitude_exp\tPrecision\tambient_adc\033[0m\n");
        printf("\033[3;0H\033[32m\t%d mm\t", dbuf.distance);
        printf("\t%d\t", dbuf.magnitude);
        printf("\t%d\t", dbuf.magnitude_exp);
        printf("\t%d\t", dbuf.precision);
        printf("\t%d\033[0m\n", dbuf.ambient_adc);

#if 0
        for(i = 0; i < 15; i++)
        {
            printf("0x%02x ", data[i]);
        }
#endif
    }


    uart_close();

exit:
    return ret;
}
