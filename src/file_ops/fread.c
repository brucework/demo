#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <debug.h>

struct reg {
    int reg;
    int value;
};

struct reg reg_cfg[100];
int count;
#define FILEPATH "./data.txt"

int read_file()
{
    FILE *fp;

    count = 0;
    debug(INFO, "\t %s enter! \n", __func__);
    fp = fopen(FILEPATH, "r+");
    if(fp == NULL)
    {
        debug(ERR, "\t open %s error\n", FILEPATH);
        return -1;
    }

    while(!feof(fp))
    {
        fscanf(fp,"%x%d", &reg_cfg[count].reg, &reg_cfg[count].value);
        //debug(DEBUG, "\t count:%d reg:0x%3x,\tvalue:%d\n", count, reg_cfg[count].reg, reg_cfg[count].value);
        count++;
    }
    fclose(fp);
    return 0;
}
int main(void)
{
    debug(INFO, " -main enter!\n");
    int i = 0;
    read_file();

    while(i < count - 1)
    {
        debug(INFO, "\t reg:0x%03x,\tvalue:%d\n", reg_cfg[i].reg, reg_cfg[i].value);
        usleep(500*1000);
        i++;
    }
    debug(INFO, " -Exit.\n");
    return 0;
}


