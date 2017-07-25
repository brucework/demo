#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#include <debug.h>

pthread_t pid[2];
pthread_mutex_t mut;
int sum = 0;

void *thread1()
{
    int i = 0;

    debug(INFO, "%s enter!\n", __func__);
    for(i = 0; i < 100; i++)
    {
        pthread_mutex_lock(&mut);
        sum++;
        pthread_mutex_unlock(&mut);
        debug(INFO, "%s SUM:%d \n", __func__, sum);
    }
    pthread_exit("thread1 Exit!");
}

void *thread2()
{
    int i = 0;

    debug(INFO, "%s enter!\n", __func__);
    for(i = 0; i < 100; i++)
    {
        pthread_mutex_lock(&mut);
        sum++;
        pthread_mutex_unlock(&mut);
        debug(INFO, "%s SUM:%d \n", __func__, sum);
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

int main(int argv, char *argc[])
{
    int ret = 0;

    create_pthread();

    thread_wait();
    return 0;
}
