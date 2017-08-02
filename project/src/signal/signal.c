#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void init_signal(void(*func)(int))
{
    signal(SIGINT, func);
}
