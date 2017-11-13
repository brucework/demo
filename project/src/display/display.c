#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <signal.h>
#include <time.h>

#include <log.h>
#include <_timer.h>
#include <display.h>

void display(int row, int column)
{
    int ret = 0;

    printf("\033[2J");
    printf("\033[%d;%dHhello!\n", row, column);

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
