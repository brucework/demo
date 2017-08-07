#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>
#include <linux/videodev2.h>

#include <log.h>
#include <camera_api.h>
#include "camera_server.h"

int init_camera(int width, int hight)
{
    int ret = 0;

    // open the camera devices
    video_fd = open(VIDEO_DEV_PATH, O_RDWR);
    if(video_fd == -1)
    {
        err("open camera device failed!\n");
        goto exit;
    }

    ret = ioctl(video_fd,VIDIOC_QUERYCAP, &cap);
    if(ret == -1)
    {
        err("Query device cap failed!\n");
        goto exit;
    }
    info("\n");
    info("Camera Device CAP:\n");
    info("Name: %s\t\t\tCap: %s\n",cap.driver, cap.card);
    info("Bus: %s\tCapability: %08x\n\n", cap.bus_info, cap.capabilities);

    if(!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE))
    {
        err("The camera device not support video caputre!\n");
    }else
    {
        info("The camera device support video caputre!\n");
    }

    if(!(cap.capabilities & V4L2_CAP_READWRITE))
    {
        err("The camera device not support V4L2_CAP_READWRITE capability\n");
    }else
    {
        err("The camera device support V4L2_CAP_READWRITE capability\n");
    }

    // Check the camera device support format.
    fmtdesc.index = 0;
    fmtdesc.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    
    info("\n");
    info("Camera device support format:\n");
    ret = ioctl(video_fd, VIDIOC_ENUM_FMT, &fmtdesc);

    while(ret != -1)
    {
        info("\t%d.%s\n", fmtdesc.index, fmtdesc.description);

        fmtdesc.index++;
        ret = ioctl(video_fd, VIDIOC_ENUM_FMT, &fmtdesc);
    }
    info("\n");

exit:
    return ret; 
}

void close_camera(void)
{
   if(video_fd != -1)
   {
       if(close(video_fd) == -1)
       {
           err("Close camera device failed!\n");
           return;
       }

       video_fd = -1;
       info("Close camera device success.\n");
   }
}
