#!/usr/bin/env python
import cv2

cv2.cv.NamedWindow('testcamera', cv2.cv.CV_WINDOW_AUTOSIZE)
capture = cv2.VideoCapture(0)
print capture.isOpened()
num = 0

while 1:
  ret, img = capture.read()
  cv2.imshow('testcamera', img)
  key = cv2.waitKey(1)
  num += 1
  if key==1048603:#<ESC>
    break

capture.release()
cv2.destroyAllWindows()

