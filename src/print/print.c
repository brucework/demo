#include <stdio.h>
#include <string.h>

#include <debug.h>

void main(void)
{
    while(1)
    {
        sleep(1);
        debug(INFO,"%s enter.\n", __func__);
        debug(WARN,"%s enter.\n", __func__);
        debug(DEBUG,"%s enter.\n", __func__);
        debug(ERR,"%s enter.\n", __func__);
        debug(NONE,"%s enter.\n", __func__);
        info("%s enter.\n", __func__);
        warn("%s enter.\n", __func__);
        err("%s enter.\n", __func__);

    }
}

