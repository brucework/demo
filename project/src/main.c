#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include <log.h>
#include <test.h>
#include <__timer.h>


int main(void)
{
    int ret = 0;
    struct bufs buf[4];
    char log[100] = "abcdefg sdfs\n";
    struct timeval set_val;

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

    log_save(log);
    
    set_val.tv_sec = 0;
    set_val.tv_usec = 2*1000;
    init_signal();
    init_timer(set_val);
    
    while(1)
    {
        sleep(1);
    }

    return 0;
}
