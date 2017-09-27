# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bruce/work/demo/src/python/tool/opencv-3.3.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release

# Utility rule file for pch_Generate_opencv_test_imgcodecs.

# Include the progress variables for this target.
include modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/progress.make

modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs: modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch

modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch: ../modules/imgcodecs/test/test_precomp.hpp
modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch: modules/imgcodecs/test_precomp.hpp
modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch: lib/libopencv_test_imgcodecs_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch"
	cd /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs && /usr/bin/cmake -E make_directory /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs/test_precomp.hpp.gch
	cd /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs && /usr/bin/c++ -O3 -DNDEBUG -DNDEBUG "-D__OPENCV_BUILD=1" "-D_USE_MATH_DEFINES" "-D__STDC_CONSTANT_MACROS" "-D__STDC_LIMIT_MACROS" "-D__STDC_FORMAT_MACROS" "-DHAVE_WEBP" "-D__OPENCV_TESTS=1" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/3rdparty/libwebp" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release" -isystem"/usr/include/eigen3" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include/x86_64-linux-gnu" -isystem"/usr/include" -isystem"/usr/include/OpenEXR" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/3rdparty/libwebp" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/release" -isystem"/usr/include/eigen3" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include" -isystem"/usr/include/x86_64-linux-gnu" -isystem"/usr/include" -isystem"/usr/include/OpenEXR" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/ts/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/videoio/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/core/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgproc/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/core/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgproc/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/videoio/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/highgui/include" -I"/home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs/test" -fsigned-char -W -Wall -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Wformat -Werror=format-security -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wshadow -Wsign-promo -Wuninitialized -Winit-self -Wno-narrowing -Wno-delete-non-virtual-dtor -Wno-comment -fdiagnostics-show-option -Wno-long-long -pthread -fomit-frame-pointer -ffunction-sections -msse -msse2 -msse3 -fvisibility=hidden -fvisibility-inlines-hidden -Wno-deprecated-declarations -x c++-header -o /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs/test_precomp.hpp

modules/imgcodecs/test_precomp.hpp: ../modules/imgcodecs/test/test_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating test_precomp.hpp"
	cd /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs && /usr/bin/cmake -E copy_if_different /home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs/test/test_precomp.hpp /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs/test_precomp.hpp

pch_Generate_opencv_test_imgcodecs: modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs
pch_Generate_opencv_test_imgcodecs: modules/imgcodecs/test_precomp.hpp.gch/opencv_test_imgcodecs_RELEASE.gch
pch_Generate_opencv_test_imgcodecs: modules/imgcodecs/test_precomp.hpp
pch_Generate_opencv_test_imgcodecs: modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/build.make
.PHONY : pch_Generate_opencv_test_imgcodecs

# Rule to build all files generated by this target.
modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/build: pch_Generate_opencv_test_imgcodecs
.PHONY : modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/build

modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/clean:
	cd /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/cmake_clean.cmake
.PHONY : modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/clean

modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/depend:
	cd /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bruce/work/demo/src/python/tool/opencv-3.3.0 /home/bruce/work/demo/src/python/tool/opencv-3.3.0/modules/imgcodecs /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs /home/bruce/work/demo/src/python/tool/opencv-3.3.0/release/modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/imgcodecs/CMakeFiles/pch_Generate_opencv_test_imgcodecs.dir/depend

