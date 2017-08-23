#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <signal.h>
#include <time.h>

#include <log.h>
#include <_timer.h>

void loop_task();
void cancel_time(void);
void cancel_signal(void);

struct timespec old_t, now_t;
void loop_task()
{
    clock_gettime(CLOCK_REALTIME, &now_t);

    info("time: %09ld.%09ld\n", now_t.tv_sec, now_t.tv_nsec);
}

#ifdef REAL_TIME
void init_timer(struct timeval set_val, void(*func)(int))
{
    struct itimerval val;

    val.it_value.tv_sec = set_val.tv_sec;
    val.it_value.tv_usec = set_val.tv_usec;
    val.it_interval = val.it_value;

    init_time_signal(func);

    /* set ITIMER_REAL */
    setitimer(ITIMER_REAL, &val, NULL);
}

void init_time_signal(void(*func)(int))
{
    struct sigaction set;

    set.sa_handler = func;
    set.sa_flags = 0;

    //set SIGRTMIN as the signal type to wait on
    sigemptyset(&set.sa_mask);
    sigaction(SIGALRM, &set, NULL);
}

void cancel_timer(void)
{
    struct itimerval val;

    val.it_value.tv_sec = 0;
    val.it_value.tv_usec = 0;
    val.it_interval = val.it_value;

    /* set ITMER_REAL */
    setitimer(ITIMER_REAL, &val, NULL);

    cancel_signal();
}

void cancel_signal(void)
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
void init_timer(struct timeval set_val, void(*func)(int))
{
    double count = 0;
 
    while(1)
    {
       if(set_val.tv_sec != 0)
       {
           sleep(set_val.tv_sec);
       }
       if(set_val.tv_usec != 0)
       {
           usleep(set_val.tv_usec);
       }

       func(count);

       count++;
    }
}

#endif

#ifdef  __DEBUG_TEST__
int main()
{
    int ret = 0;
    struct timeval set_val;

    set_val.tv_sec = 0;
    set_val.tv_usec = 100 * 1000;

    init_time_signal();
    init_timer(set_val);

    while(1)
    {;}

    return ret;
}
#endif    // __DEBUG_TEST__
