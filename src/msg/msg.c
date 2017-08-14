#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <poll.h>
#include <fcntl.h>

#include <debug.h>

#define FILEPATH    "./msg2"

pthread_t pid[2];
pthread_mutex_t mut;
int sum = 0;

int _fd = 0;

void *thread1()
{
    int i = 0;
    struct pollfd pf[2];
    int ret = 0;
    char buf[10];
#if 0
    pf[0].fd = _fd;
    pf[0].events = POLLIN;

    debug(INFO, "%s enter!\n", __func__);
//    for(i = 0; i < 100; i++)
    while(1)
    {
        ret = poll(pf, 1, 1000);
        if(pf[0].revents & POLLIN)
        {
            info("have get the data\n");
            read(_fd, buf, ret);
            buf[ret+1] = '\0';
            info("read:%s| ret=%d\n",buf, ret);
            
        }else
        {
            err("poll error ret:%d\n", ret);
        }
//        pthread_mutex_lock(&mut);
        sum++;
//        pthread_mutex_unlock(&mut);
       // debug(INFO, "%s SUM:%d \n", __func__, sum);
    }
#endif
    pthread_exit("thread1 Exit!");
}

void *thread2()
{
    int i = 0;
    char a[10] = "abcd";

    debug(INFO, "%s enter!\n", __func__);
    for(i = 0; i < 10; i++)
    {
        sleep(1);
       write(_fd, a, 3);
//        pthread_mutex_lock(&mut);
        sum++;
//        pthread_mutex_unlock(&mut);
       // debug(INFO, "%s SUM:%d \n", __func__, sum);
    }
    pthread_exit("thread2 Exit!");
 
}

int create_pthread()
{
    int ret = 0;
    
    debug(INFO, "%s enter!\n", __func__);
    memset(pid, 0, sizeof(pid));

    pthread_mutex_init(&mut, NULL);
    debug(INFO, "SUM:%d\n", sum);
    ret = pthread_create(&pid[0], NULL, thread1, NULL);
    if(ret != 0)
    {
        debug(ERR, "Create thread1 error\n");
    }

    ret = pthread_create(&pid[1], NULL, thread2, NULL);
    if(ret != 0)
    {
        debug(ERR, "Create thread2 error\n");
    }

    return ret;
}

void thread_wait()
{
    int ret = 0;
    void *status;

    if(pid[0] != 0)
    {
        pthread_join(pid[0], &status);
        debug(INFO, "[ %s ]\n", (char *)status);
    }
    if(pid[1] != 0)
    {
        pthread_join(pid[1], &status);
        debug(INFO, "[ %s ]\n", (char *)status);
    }
    debug(INFO, "SUM:%d\n", sum);
}

void init_msg(void)
{
    
    _fd = open(FILEPATH,  O_RDWR | O_TRUNC | O_NONBLOCK);
    
    info("fd=%d\n", _fd);
}

int main(int argv, char *argc[])
{
    int ret = 0;

    init_msg();

    create_pthread();

    thread_wait();
    close(_fd);
    return 0;
}
