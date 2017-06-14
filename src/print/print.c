#include <stdio.h>
#include <string.h>
#include<time.h>

#include <debug.h>

#if 0
void debug3(format, ...)
{

	struct timespec time2 = {0, 0};  
	clock_gettime(CLOCK_REALTIME, &time1);
    
}
#endif

void main(void)
{
    debug(INFO,"%s enter.\n", __func__);
    debug(WARN,"%s enter.\n", __func__);
    debug(DEBUG,"%s enter.\n", __func__);
    debug(ERR,"%s enter.\n", __func__);
    debug(NONE,"%s enter.\n", __func__);
}

