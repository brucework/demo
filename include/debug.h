#ifndef __USER_DEBUG__
#define __USER_DEBUG__

#include <time.h>

#define USER_INFO		" [INFO] "
#define USER_WARN		" [WARN] "
#define USER_DEBUG		" [DEBUG] "
#define USER_ERR		" [ERROR] "

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
             printf("[%02d:%02d:%02d]" USER_INFO "Line:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case WARN: \
             printf("[%02d:%02d:%2d]" USER_WARN "Line:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case DEBUG: \
             printf("[%02d:%02d:%02d]" USER_DEBUG "Line:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case ERR: \
             printf("[%02d:%02d:%02d]" USER_ERR "Line:%02d " format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
             break; \
         case NONE: \
             break; \
         default: \
             printf("[%02d:%02d:%02d]" USER_ERR "Line:%02d LOG format error\n", p->tm_hour, p->tm_min, p->tm_sec, __LINE__); \
             break; \
         } \
    })
#endif

#define err(format, ...) \
    ({ \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("\033[1m\033[42m[%02d:%02d:%02d] (E) " "Line:%02d \033[0m" format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
    })

#define info(format, ...) \
    ({ \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("\033[1m\033[42m[%02d:%02d:%02d] (I) " "Line:%02d \033[0m" format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
    })

#define warn(format, ...) \
    ({ \
        time_t timep; \
        struct tm *p; \
        time(&timep); \
        p = localtime(&timep); \
        printf("\033[1m\033[42m[%02d:%02d:%02d] (W) " "Line:%02d \033[0m" format, p->tm_hour, p->tm_min, p->tm_sec, __LINE__, ##__VA_ARGS__); \
    })

#endif    // end __USER_DEBUG__
