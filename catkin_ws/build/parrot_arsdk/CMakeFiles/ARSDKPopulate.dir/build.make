# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/ijud/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ijud/catkin_ws/build

# Utility rule file for ARSDKPopulate.

# Include the progress variables for this target.
include parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/progress.make

parrot_arsdk/CMakeFiles/ARSDKPopulate:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ijud/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Populating ARDroneSDK to devel space: /home/ijud/catkin_ws/build/parrot_arsdk/arsdk"
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && /usr/bin/cmake -E make_directory /home/ijud/catkin_ws/devel/include/parrot_arsdk
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && cp -rp ./out/arsdk-native/staging/usr/include/* /home/ijud/catkin_ws/devel/include/parrot_arsdk
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && /usr/bin/cmake -E make_directory /home/ijud/catkin_ws/devel/lib/parrot_arsdk
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && cp -rp ./out/arsdk-native/staging/usr/lib/* /home/ijud/catkin_ws/devel/lib/parrot_arsdk
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && /usr/bin/cmake -E make_directory /home/ijud/catkin_ws/devel/share/parrot_arsdk/parrot_arsdk
	cd /home/ijud/catkin_ws/build/parrot_arsdk/arsdk/src/ARSDKBuildUtils && cp -rp ./out/arsdk-native/staging/usr/share/* /home/ijud/catkin_ws/devel/share/parrot_arsdk/parrot_arsdk

ARSDKPopulate: parrot_arsdk/CMakeFiles/ARSDKPopulate
ARSDKPopulate: parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/build.make

.PHONY : ARSDKPopulate

# Rule to build all files generated by this target.
parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/build: ARSDKPopulate

.PHONY : parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/build

parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/clean:
	cd /home/ijud/catkin_ws/build/parrot_arsdk && $(CMAKE_COMMAND) -P CMakeFiles/ARSDKPopulate.dir/cmake_clean.cmake
.PHONY : parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/clean

parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/depend:
	cd /home/ijud/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ijud/catkin_ws/src /home/ijud/catkin_ws/src/parrot_arsdk /home/ijud/catkin_ws/build /home/ijud/catkin_ws/build/parrot_arsdk /home/ijud/catkin_ws/build/parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : parrot_arsdk/CMakeFiles/ARSDKPopulate.dir/depend
