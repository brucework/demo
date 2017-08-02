#ifndef __TIMER__
#define __TIMER__

#define REAL_TIME    1
//#define SLEEP_TIME    1

void init_timer(struct timeval set_val, void(*func)(int));
void concel_timer();
void init_time_signal(void(*func)(int));

#endif    // end __TIMER__
