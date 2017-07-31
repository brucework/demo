#include<stdio.h>

#include<log.h>

int log_init(void)
{
    int ret = 0;
    
    fd = fopen(LOG_PATH, "w");
    if(fd == NULL)
    {
        err("open file error!\n");
        ret = -1;
    }

    return ret;
}

void log_close(void)
{
    fclose(fd);
}

int log_save(char *buf)
{
    int ret = 0;
    char *bufs;
    int i = 0;

    bufs = malloc(sizeof(char)*1024);
    
    while(buf[i] != '\0')
    {
        bufs[i] = buf[i];
        i++;
    }
    
    info("bufs lens%d:%s\n", i, bufs);

    ret = fwrite(bufs, sizeof(char), i, fd);
    if(ret <= 0)
    {
        err("write the file error\n");
    }
    
    free(bufs);
    return ret;
}

