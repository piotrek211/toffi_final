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
CMAKE_SOURCE_DIR = /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build

# Utility rule file for automode_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/automode_autogen.dir/progress.make

src/CMakeFiles/automode_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target automode"
	cd /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/src && /usr/bin/cmake -E cmake_autogen /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/src/CMakeFiles/automode_autogen.dir/AutogenInfo.json ""

automode_autogen: src/CMakeFiles/automode_autogen
automode_autogen: src/CMakeFiles/automode_autogen.dir/build.make

.PHONY : automode_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/automode_autogen.dir/build: automode_autogen

.PHONY : src/CMakeFiles/automode_autogen.dir/build

src/CMakeFiles/automode_autogen.dir/clean:
	cd /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/src && $(CMAKE_COMMAND) -P CMakeFiles/automode_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/automode_autogen.dir/clean

src/CMakeFiles/automode_autogen.dir/depend:
	cd /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/src /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/src /home/piotrek/Desktop/toffi_final/AutoMoDe-toffi/build/src/CMakeFiles/automode_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/automode_autogen.dir/depend

