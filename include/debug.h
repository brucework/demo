#ifndef __USER_DEBUG__
#define __USER_DEBUG__

#include <time.h>

#define USER_INFO    " [INFO] "
#define USER_WARN    " [WARN] "
#define USER_DEBUG    " [DEBUG] "
#define USER_ERR    " [ERROR] "

#define NONE    0
#define INFO    1
#define WARN    2
#define DEBUG   3
#define ERR     4

#ifndef USER_DEBUG
#define debug(format,...) printf(format, ##__VA_ARGS__)
#else
#define debug(LEVEL,format, ...) \
    ({ \
         time_t timep; \
         struct tm *p; \
         time(&timep); \
         p = localtime(&timep); \
         switch(LEVEL){ \
         case INFO: \
             printf("[%02d:%02d:%02d]" USER_INFO "Len:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case WARN: \
             printf("[%02d:%02d:%2d]" USER_WARN "Len:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case DEBUG: \
             printf("[%02d:%02d:%02d]" USER_DEBUG "Len:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case ERR: \
             printf("[%02d:%02d:%02d]" USER_ERR "Len:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case NONE: \
             break; \
         default: \
             printf("[%02d:%02d:%02d]" USER_ERR "Len:%02d LOG format error\n", p->tm_hour, p->tm_min, p->tm_sec, __LINE__); \
             break; \
         } \
    })
#endif

#endif    // end __USER_DEBUG__
