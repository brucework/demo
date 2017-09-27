# CMake generated Testfile for 
# Source directory: /home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgproc
# Build directory: /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgproc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_imgproc "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/bin/opencv_test_imgproc" "--gtest_output=xml:opencv_test_imgproc.xml")
set_tests_properties(opencv_test_imgproc PROPERTIES  LABELS "Main;opencv_imgproc;Accuracy" WORKING_DIRECTORY "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/test-reports/accuracy")
add_test(opencv_perf_imgproc "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/bin/opencv_perf_imgproc" "--gtest_output=xml:opencv_perf_imgproc.xml")
set_tests_properties(opencv_perf_imgproc PROPERTIES  LABELS "Main;opencv_imgproc;Performance" WORKING_DIRECTORY "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/test-reports/performance")
add_test(opencv_sanity_imgproc "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/bin/opencv_perf_imgproc" "--gtest_output=xml:opencv_perf_imgproc.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_imgproc PROPERTIES  LABELS "Main;opencv_imgproc;Sanity" WORKING_DIRECTORY "/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/test-reports/sanity")
