# CMake generated Testfile for 
# Source directory: /home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/highgui
# Build directory: /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/highgui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_highgui "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/bin/opencv_test_highgui" "--gtest_output=xml:opencv_test_highgui.xml")
set_tests_properties(opencv_test_highgui PROPERTIES  LABELS "Main;opencv_highgui;Accuracy" WORKING_DIRECTORY "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/test-reports/accuracy")
