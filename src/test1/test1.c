#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/shm.h>

#include <debug.h>
#include <shmdata.h>

typedef unsigned long long uint64;
typedef long long int64;

int64 power(int64 root, int power)
{
    int64 total = 1;
    int i = 0;
    
    if(power <=0)
    {
        if(root < 0)
        {
            return -1;
        }else
        {
            return 1;
        }
    }else
    {
        for(i = -1; i >= power; i--)
        {
            total = total / root;
        }
    }

    for(i = 1; i <= power; i++)
    {
        total = total * root;
    }

    return total;
}

int check4(int *data)
{
    int count = 0;
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        if(data[i] == 4)
            count++;
    }
   if(count)
      return 1;

  return 0; 
}

void itoa(int n, int * data)
{
    int i = 0;
    data[0] = n;
    while(data[i] != 0)
    {
        data[i + 1] = data[i] / 10;
        if(data[i+1] == 0)
        {
            data[i] = data[i] % 10;
        }else
        {
            data[i] = (data[i] > 0 ? data[i]: - data[i]) % 10;
        }
//        debug(WARN, "nums[%d]=%d%d\n", i,  data[1], data[0]);
        i++;
    }
    return;
}

int sum(int data)
{
    int sum = 0;
    int i = 0;
    int j = 0;
    int port[10] = {0};

    for(i = 0; i <= data; i++)
    {
        port[0]++;
        for(j = 0; j < 10; j++)
        {
            if(port[j] == 10)
            {
                port[j+1]++;
                port[j] = 0;
            }
            if(port[j] == 4)
            {
                port[j]++;
            }
        }
        debug(WARN,"||\t%d\t", i);
        for(j = 9; j >= 0; j--)
        {
            printf("%d", port[j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int ret = 0;
    int num = 0;
    int i,j;
    int nums[10];
    int out[10];
    int count = 0;

    debug(WARN,"Input the data: ");
    scanf("%d", &num);

    nums[0] = num;
    i = 0;
    while(nums[i] != 0)
    {
        nums[i + 1] = nums[i] / 10;
        if(nums[i+1] == 0)
        {
            nums[i] = nums[i] % 10;
        }else
        {
            nums[i] = (nums[i] > 0 ? nums[i]: -nums[i]) % 10;
        }
        debug(WARN, "nums[%d]=%d\n", i,  nums[i]);
        i++;
    }   
    for(j = 0; j < i; j++)
    {
        count = nums[j] * power(10, j - 1);
        debug(WARN, "count = %d, i=%d j=%d\n", count, i , j);
        debug(WARN, "count = %lld\n", power(10,2));
    }

    int counts = 0;
    int data[10];

    debug(WARN, "||\tDATA\tPort\tFlags\t\n");
    for (i = 0; i <= num; i++)
    {
        itoa(i, data);

        //debug(WARN, "DATA:%d %d\n", data[1],data[0]);
        counts = check4(data) + counts;
        if(counts % 10 == 4)
            counts++;
       
        debug(WARN, "||\t%d\t%d\t%d\n", i, counts + i, check4(data));
        count++;
    }
    sum(num);
    return ret;
}
