#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/shm.h>

#include <debug.h>
#include <shmdata.h>

int add(int i)
{
    int sum = 0;

    printf("%d",i);
    if(i == 0)
    {
        return 0;
    }else
    {
        sum = add(i - 1) + i;
    }
    return sum;
}

int main()
{
    int ret = 0;
    int data;
    scanf("%d", &data);
    debug(WARN, "||\t %d sum:%d\n",data, add(data));

    return ret;
}
