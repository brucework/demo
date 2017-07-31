#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<log.h>

#define LOG_PATH "./log_v1.txt"

int log_init(void)
{
    int ret = 0;
    FILE *fd;
    
    fd = fopen(LOG_PATH, "w");
    if(fd == NULL)
    {
        err("open file error!\n");
        ret = -1;
    }

    fclose(fd);
    return ret;
}

int log_save(char *buf)
{
    int ret = 0;
    FILE *fd;
    char *bufs;
    int i = 0;

    bufs = malloc(sizeof(char)*1024);
    
    fd = fopen(LOG_PATH, "a");
    if(fd == NULL)
    {
        err("open file error!\n");
        ret = -1;
        goto exit;
    }

    while(buf[i] != '\0')
    {
        bufs[i] = buf[i];
        i++;
    }
    
    info("bufs lens%d:%s\n", i, bufs);

    ret = fwrite(bufs, sizeof(char), i, fd);
    ret = fwrite(bufs, sizeof(char), i, fd);
    ret = fwrite(bufs, sizeof(char), i, fd);
    if(ret <= 0)
    {
        err("write the file error\n");
    }
    
exit:
    fclose(fd);
    free(bufs);
    return ret;
}

