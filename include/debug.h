#ifndef __USER_DEBUG__
#define __USER_DEBUG__

#include <time.h>
#include <stdio.h>

#define USER_INFO    " [INFO] "
#define USER_WARN    " [WARN] "
#define USER_DEBUG    " [WARN] "
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
        switch(LEVEL){ \
            case INFO: \
                printf("[" __TIME__ "]" USER_INFO "Len:%d " format, __LINE__, ##__VA_ARGS__); \
                break; \
            case WARN: \
                printf("[" __TIME__ "]" USER_WARN "Len:%d " format, __LINE__, ##__VA_ARGS__); \
                break; \
            case DEBUG: \
                 printf("[" __TIME__ "]" USER_DEBUG "Len:%d " format, __LINE__, ##__VA_ARGS__); \
                break; \
            case ERR: \
                 printf("[" __TIME__ "]" USER_ERR "Len:%d " format, __LINE__, ##__VA_ARGS__); \
                break; \
            case NONE: \
                break; \
            default: \
                printf("[" __TIME__ "]" USER_ERR "Len:%d LOG format error\n", __LINE__); \
                break; \
        } \
    })
#endif

#endif    // end __USER_DEBUG__
