#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <signal.h>
#include <time.h>

#include <log.h>
#include <_timer.h>
#include <display.h>

int count = 0;
void display(int row, int column)
{
    int ret = 0;

    printf("\033[2J");
    printf("\033[%d;%dH%s():%02d\n", row, column, __func__, count++);
    count = (count == 100?0:count);

    return;

}

#ifdef  __DEBUG_TEST__
int main()
{
    int ret = 0;

    //while(1)
    //{;}
    display(10, 20);

    return ret;
}
#endif    // __DEBUG_TEST__
