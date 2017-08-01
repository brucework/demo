#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <signal.h>
#include <time.h>

#include <log.h>
#include <__timer.h>

#ifdef REAL_TIME
void init_timer(struct timeval set_val)
{
    struct itimerval val;

    val.it_value.tv_sec = set_val.tv_sec;
    val.it_value.tv_usec = set_val.tv_usec;
    val.it_interval = val.it_value;

    /* set ITMER_REAL */
    setitimer(ITIMER_REAL, &val, NULL);
}

struct timespec old_t, now_t;
void loop_task()
{
    clock_gettime(CLOCK_REALTIME, &now_t);

    info("time:%ld.%ld\n", now_t.tv_sec, now_t.tv_nsec);
}

void init_signal(void)
{
    struct sigaction set;

    set.sa_handler = loop_task;
    set.sa_flags = 0;

    //set SIGRTMIN as the signal type to wait on
    sigemptyset(&set.sa_mask);
    sigaction(SIGALRM, &set, NULL);
}

void cancle_timer(void)
{
    struct itimerval val;

    val.it_value.tv_sec = 0;
    val.it_value.tv_usec = 0;
    val.it_interval = val.it_value;

    /* set ITMER_REAL */
    setitimer(ITIMER_REAL, &val, NULL);
   
}

void cancle_signal(void)
{
    struct sigaction set;

    set.sa_handler = NULL;
    set.sa_flags = 0;

    //set SIGRTMIN as the signal type to wait on
    sigemptyset(&set.sa_mask);
    sigaction(SIGALRM, &set, NULL);
}

#endif

#ifdef SLEEP_TIME
int init_timer()

#endif

#ifdef  __DEBUG_TEST__
int main()
{
    int ret = 0;
    struct timeval set_val;

    set_val.tv_sec = 0;
    set_val.tv_usec = 100 * 1000;

    init_signal();
    init_timer(set_val);

    while(1)
    {;}

    return ret;
}
#endif    // __DEBUG_TEST__
