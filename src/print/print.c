#include <stdio.h>
#include <string.h>

#include <debug.h>

#define ESC    "\033"
#define UP     "\033[A"
#define DOWN   "\033[B"
#define LEFT   "\033[D"
#define RIGHT  "\033[C"

void main(void)
{
    while(1)
    {
        printf("\033[2J");
        sleep(1);
        debug(INFO,"%s enter.\n", __func__);
        debug(WARN,"%s enter.\n", __func__);
        debug(DEBUG,"%s enter.\n", __func__);
        debug(ERR,"%s enter.\n", __func__);
        debug(NONE,"%s enter.\n", __func__);
        info("%s enter.\n", __func__);
        warn("%s enter.\n", __func__);
        err("%s enter.\n", __func__);

       printf("\033[8;5Hhello!\n");




    }
}

