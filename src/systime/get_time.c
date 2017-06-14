#include<stdio.h>
#include<time.h>

#include <debug.h>

int main(int argc,char *argv[])
{
    struct timespec time1 = {0, 0};
    struct timespec time2 = {0, 0};
    struct timespec time3 = {0, 0};
    long int sec;
    long int nsec;
    struct tm *tm;

    debug(INFO, "sizeof(tv_sec)%ld sizeof(tv_nsec)%ld\n", sizeof(time1.tv_sec), sizeof(time1.tv_nsec));
    clock_gettime(CLOCK_REALTIME, &time1);
    sleep(1);
    clock_gettime(CLOCK_REALTIME, &time2);

    debug(INFO, "CLOCK_REALTIME time1: %ld, %ld\n", time1.tv_sec, time1.tv_nsec);
    debug(INFO, "CLOCK_REALTIME time2: %ld, %ld\n", time2.tv_sec, time2.tv_nsec);
    debug(INFO, "\n%ld\n", time(NULL));
    time3.tv_sec = time2.tv_sec - time1.tv_sec;
    if(time1.tv_nsec > time2.tv_nsec)
    {
        time3.tv_sec = time3.tv_sec - 1;
        time3.tv_nsec = time2.tv_nsec - time1.tv_nsec + 1000000000;
    }else{
        time3.tv_nsec = time2.tv_nsec - time1.tv_nsec;
    }
    debug(INFO, "CLOCK_REALTIME time3: %ld, %ld\n", time3.tv_sec, time3.tv_nsec);
    debug(INFO, "time2-time1=time3:%ld,%ld\n", time3.tv_sec, time3.tv_nsec);
    tm = gmtime(&time3.tv_sec);
    debug(INFO, "%d-%d-%d\t %d:%d:%d nsec:%ld\n", tm->tm_year + 1900, tm->tm_mon, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, time3.tv_nsec);

    return 0;
}

