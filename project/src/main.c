#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <signal.h>

#include <log.h>
#include <test.h>
#include <_timer.h>
#include <_signal.h>
#include <camera_api.h>
#include <display.h>

bool main_thread_exit = false;

void sigint(int sig)
{
    if(sig == SIGINT)
    {
        err("CTRL+c has been down!\n");
        cancel_timer();
        main_thread_exit = true;
    }

}

void callback(int i)
{
    struct timespec now_t;

    clock_gettime(CLOCK_REALTIME, &now_t);

    info("time:%09ld.%09ld\n", now_t.tv_sec, now_t.tv_nsec);
}

int main(void)
{
    int ret = 0;
    struct bufs buf[4];
    char log[100] = "abcdefg sdfs\n";
    struct timeval set;

    ret = log_init();
    if(ret == -1)
    {
        err("log init error!\n");
    }

    buf[0].regs = regs1;
    buf[0].node = 1;
    buf[0].lens = sizeof(regs1)/sizeof(struct reg);

    buf[1].regs = regs2;
    buf[1].node = 2;
    buf[1].lens = sizeof(regs2)/sizeof(struct reg);

    buf[2].regs = regs3;
    buf[2].node = 3;
    buf[2].lens = sizeof(regs3)/sizeof(struct reg);

    buf[3].regs = regs4;
    buf[3].node = 4;
    buf[3].lens = sizeof(regs4)/sizeof(struct reg);

    info("%d %d \n", buf[0].regs->reg, buf[0].regs->val);
    info("node %d %d \n", buf[0].node, buf[0].lens);
    info("%d %d \n", buf[1].regs[3].reg, buf[1].regs[3].val);
    info("node %d %d \n", buf[1].node, buf[1].lens);
    info("%d %d \n", buf[2].regs->reg, buf[2].regs->val);
    info("node %d %d \n", buf[2].node, buf[2].lens);
    info("%d %d \n", buf[3].regs->reg, buf[3].regs->val);
    info("node %d %d \n", buf[3].node, buf[3].lens);

    init_signal(sigint);    //^c exit the main.
#if 0
    set.tv_sec = 0;
    set.tv_usec = 2 * 1000;
    init_timer(set, callback);
    //cancel_timer();
#endif

    ret = init_camera(640, 480);
    close_camera();

    while(!main_thread_exit)
    {
        display(10, 20);
        usleep(300*1000);
    }

    return 0;
}
