#ifndef __CAMERA_SERVER__
#define __CAMERA_SERVER__

#define VIDEO_DEV_PATH    "/dev/video0"

static int video_fd = -1;

struct v4l2_capability cap;
struct v4l2_fmtdesc fmtdesc;

#endif    // end __CAMERA_SERVER__
