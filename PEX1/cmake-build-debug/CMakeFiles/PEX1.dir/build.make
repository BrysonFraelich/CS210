# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /cygdrive/c/Users/C22Bryson.Fraelich/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/C22Bryson.Fraelich/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PEX1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PEX1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PEX1.dir/flags.make

CMakeFiles/PEX1.dir/pex1.c.o: CMakeFiles/PEX1.dir/flags.make
CMakeFiles/PEX1.dir/pex1.c.o: ../pex1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PEX1.dir/pex1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/PEX1.dir/pex1.c.o   -c /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/pex1.c

CMakeFiles/PEX1.dir/pex1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PEX1.dir/pex1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/pex1.c > CMakeFiles/PEX1.dir/pex1.c.i

CMakeFiles/PEX1.dir/pex1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PEX1.dir/pex1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/pex1.c -o CMakeFiles/PEX1.dir/pex1.c.s

# Object files for target PEX1
PEX1_OBJECTS = \
"CMakeFiles/PEX1.dir/pex1.c.o"

# External object files for target PEX1
PEX1_EXTERNAL_OBJECTS =

PEX1.exe: CMakeFiles/PEX1.dir/pex1.c.o
PEX1.exe: CMakeFiles/PEX1.dir/build.make
PEX1.exe: CMakeFiles/PEX1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PEX1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PEX1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PEX1.dir/build: PEX1.exe

.PHONY : CMakeFiles/PEX1.dir/build

CMakeFiles/PEX1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PEX1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PEX1.dir/clean

CMakeFiles/PEX1.dir/depend:
	cd /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1 /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1 /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/PEX1/cmake-build-debug/CMakeFiles/PEX1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PEX1.dir/depend

