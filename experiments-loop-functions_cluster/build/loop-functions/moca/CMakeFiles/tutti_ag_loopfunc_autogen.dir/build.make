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
CMAKE_SOURCE_DIR = /home/piotrek/toffi/experiments-loop-functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/piotrek/toffi/experiments-loop-functions/build

# Utility rule file for tutti_ag_loopfunc_autogen.

# Include the progress variables for this target.
include loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/progress.make

loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/piotrek/toffi/experiments-loop-functions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target tutti_ag_loopfunc"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/moca && /usr/bin/cmake -E cmake_autogen /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/AutogenInfo.json ""

tutti_ag_loopfunc_autogen: loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen
tutti_ag_loopfunc_autogen: loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/build.make

.PHONY : tutti_ag_loopfunc_autogen

# Rule to build all files generated by this target.
loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/build: tutti_ag_loopfunc_autogen

.PHONY : loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/build

loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/clean:
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/moca && $(CMAKE_COMMAND) -P CMakeFiles/tutti_ag_loopfunc_autogen.dir/cmake_clean.cmake
.PHONY : loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/clean

loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/depend:
	cd /home/piotrek/toffi/experiments-loop-functions/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piotrek/toffi/experiments-loop-functions /home/piotrek/toffi/experiments-loop-functions/loop-functions/moca /home/piotrek/toffi/experiments-loop-functions/build /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/moca /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : loop-functions/moca/CMakeFiles/tutti_ag_loopfunc_autogen.dir/depend

