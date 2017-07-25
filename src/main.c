#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <debug.h>


struct command {
    char buf [128];
};

struct command cmd[] = {
    "start debug",
    "start fread",
    "start irm_sound",
    "start shm_write",
    "start systime",
    "start uart_irm"
};

static char flags[][128] = {"1", "2", "3", "4", "5", "6"};

void usage(void)
{
    debug(INFO, " usage: demo start \n");
    debug(INFO, "  1. start debug \n");
    debug(INFO, "  2. start fread \n");
    debug(INFO, "  3. start irm_sound \n");
    debug(INFO, "  4. start shm_write \n");
    debug(INFO, "  5. start systime \n");
    debug(INFO, "  6. start uart_irm \n");
    debug(INFO, "  help \n");
    debug(INFO, "  exit \n");
}

int main(int argc, char *argv[])
{
    int ret;
    int i = 0;
    char buf[128];

    if(argc != 2)
    {
        debug(ERR, " -CMD  format error! \n");
        usage();
        goto err;
    }
    system("clear");
    usage();
    while(1)
    {
        gets(buf);
        system("clear");
        usage();
        printf("============================================\n");
        for(i = 0; i < (sizeof(flags) / (128 * sizeof(char))); i++)
        {
           if(!strcmp(buf, flags[i]))
           {
            debug(INFO, "Cmd:%s \n", cmd[i].buf);
           }
            
        }
        if(!strcmp(buf, "help"))
        {
            usage();
        }
        if(!strcmp(buf, "exit"))
        {
            goto err;
        }

    }

err:
    return 0;
}
