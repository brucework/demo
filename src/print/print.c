#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <time.h>

#include <debug.h>

#define ESC    27
#define UP     65
#define DOWN   66
#define LEFT   68
#define RIGHT  67

char private_getch()
{
    char ch;
    struct termios store_set;
    struct termios new_set;

    tcgetattr(0, &store_set);
    new_set = store_set;

    new_set.c_lflag &= (~ICANON);

    tcsetattr(0, TCSANOW, &new_set);

#ifdef _WIN32
    ch = getch();
#else
    ch = getchar();
#endif

    putchar('\b');
#ifdef _WIN32
    // Do nothing
#else
    tcsetattr(0, TCSANOW, &store_set);
#endif
    return ch;
}

void test_print()
{
    debug(INFO,"%s enter.\n", __func__);
    debug(WARN,"%s enter.\n", __func__);
    debug(DEBUG,"%s enter.\n", __func__);
    debug(ERR,"%s enter.\n", __func__);
    debug(NONE,"%s enter.\n", __func__);
    info("%s enter.\n", __func__);
    warn("%s enter.\n", __func__);
    err("%s enter.\n", __func__);
}

void gettime()
{
    struct tm * tm;
    struct timespec time = {0, 0};

    clock_gettime(CLOCK_REALTIME, &time);
    
    tm = gmtime(&time.tv_sec);
    printf("\033[0;0H %02d:%02d:%02d nsec:%08ld\n", tm->tm_hour, tm->tm_min, tm->tm_sec, time.tv_nsec);
    
}

void prismatic(int a, int b, int row_offset, int cloumn_offset)    //棱形
{
    int i = 0, j = 0;
    int k = 0;
    int row = row_offset;
    int column = a + cloumn_offset;
#if 1
    if(a > b)
    {
        k = a;
        a = b;
        b = k;
    }
#endif
    for(i = 1; i <= a + b; i++)
    {
        row++;
        if( i > b)
        {
            column++;
            k = 2*(a+b - i) - 1;
            
        }else if(i > a && i <= b)
        {
            column++;
            k = 2 * a -1;
        }
        else if(i <= a)
        {
            column--;
            k = 2 * i -1;
        }
        for(j = 1; j <= k; j++)
        {
            printf("\033[%d;%dH*",row , column + j);   //行;列
        }
    printf("\n");

}
}

void main(void)
{
    int row = 0;    //行
    int column = 0; //列
    int data = 0;

    printf("\033[2J");
    prismatic(5, 10, 0, 0);
    prismatic(10, 5, 0, 10);
    return;
    while(1)
    {
        gettime();       
        data = private_getch();
        printf("data=%d\n", data);
        if (data == 27)
            printf("This is \"ESC\" button!\n");
        if (data == UP)
            if(row > 0)
                row--;
        if (data == DOWN)
            if(row < 60)
                row++;
        if (data == LEFT)
            if(column > 0)
                column--;
        if (data == RIGHT)
            if(column < 120)
                column++;

        printf("\033[%d;%dHhello!\n", row, column);
    }
}

