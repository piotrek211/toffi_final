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

# Include any dependencies generated for this target.
include loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/depend.make

# Include the progress variables for this target.
include loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/progress.make

# Include the compile flags for this target's objects.
include loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/flags.make

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/flags.make
loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o: loop-functions/mocha/tutti_pu_loopfunc_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piotrek/toffi/experiments-loop-functions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o -c /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha/tutti_pu_loopfunc_autogen/mocs_compilation.cpp

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.i"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha/tutti_pu_loopfunc_autogen/mocs_compilation.cpp > CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.i

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.s"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha/tutti_pu_loopfunc_autogen/mocs_compilation.cpp -o CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.s

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/flags.make
loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o: ../loop-functions/mocha/ToffiPuLoopFunc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piotrek/toffi/experiments-loop-functions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o -c /home/piotrek/toffi/experiments-loop-functions/loop-functions/mocha/ToffiPuLoopFunc.cpp

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.i"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piotrek/toffi/experiments-loop-functions/loop-functions/mocha/ToffiPuLoopFunc.cpp > CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.i

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.s"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piotrek/toffi/experiments-loop-functions/loop-functions/mocha/ToffiPuLoopFunc.cpp -o CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.s

# Object files for target tutti_pu_loopfunc
tutti_pu_loopfunc_OBJECTS = \
"CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o"

# External object files for target tutti_pu_loopfunc
tutti_pu_loopfunc_EXTERNAL_OBJECTS =

loop-functions/mocha/libtutti_pu_loopfunc.so: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/tutti_pu_loopfunc_autogen/mocs_compilation.cpp.o
loop-functions/mocha/libtutti_pu_loopfunc.so: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/ToffiPuLoopFunc.cpp.o
loop-functions/mocha/libtutti_pu_loopfunc.so: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/build.make
loop-functions/mocha/libtutti_pu_loopfunc.so: loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/piotrek/toffi/experiments-loop-functions/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libtutti_pu_loopfunc.so"
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutti_pu_loopfunc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/build: loop-functions/mocha/libtutti_pu_loopfunc.so

.PHONY : loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/build

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/clean:
	cd /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha && $(CMAKE_COMMAND) -P CMakeFiles/tutti_pu_loopfunc.dir/cmake_clean.cmake
.PHONY : loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/clean

loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/depend:
	cd /home/piotrek/toffi/experiments-loop-functions/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piotrek/toffi/experiments-loop-functions /home/piotrek/toffi/experiments-loop-functions/loop-functions/mocha /home/piotrek/toffi/experiments-loop-functions/build /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha /home/piotrek/toffi/experiments-loop-functions/build/loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : loop-functions/mocha/CMakeFiles/tutti_pu_loopfunc.dir/depend

