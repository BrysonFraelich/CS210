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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pa2functs.h.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pa2functs.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pa2functs.h.dir/flags.make

CMakeFiles/pa2functs.h.dir/pa2functs.c.o: CMakeFiles/pa2functs.h.dir/flags.make
CMakeFiles/pa2functs.h.dir/pa2functs.c.o: ../pa2functs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pa2functs.h.dir/pa2functs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pa2functs.h.dir/pa2functs.c.o   -c /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2functs.c

CMakeFiles/pa2functs.h.dir/pa2functs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pa2functs.h.dir/pa2functs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2functs.c > CMakeFiles/pa2functs.h.dir/pa2functs.c.i

CMakeFiles/pa2functs.h.dir/pa2functs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pa2functs.h.dir/pa2functs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2functs.c -o CMakeFiles/pa2functs.h.dir/pa2functs.c.s

CMakeFiles/pa2functs.h.dir/pa2main.c.o: CMakeFiles/pa2functs.h.dir/flags.make
CMakeFiles/pa2functs.h.dir/pa2main.c.o: ../pa2main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/pa2functs.h.dir/pa2main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pa2functs.h.dir/pa2main.c.o   -c /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2main.c

CMakeFiles/pa2functs.h.dir/pa2main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pa2functs.h.dir/pa2main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2main.c > CMakeFiles/pa2functs.h.dir/pa2main.c.i

CMakeFiles/pa2functs.h.dir/pa2main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pa2functs.h.dir/pa2main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/pa2main.c -o CMakeFiles/pa2functs.h.dir/pa2main.c.s

# Object files for target pa2functs.h
pa2functs_h_OBJECTS = \
"CMakeFiles/pa2functs.h.dir/pa2functs.c.o" \
"CMakeFiles/pa2functs.h.dir/pa2main.c.o"

# External object files for target pa2functs.h
pa2functs_h_EXTERNAL_OBJECTS =

pa2functs.h.exe: CMakeFiles/pa2functs.h.dir/pa2functs.c.o
pa2functs.h.exe: CMakeFiles/pa2functs.h.dir/pa2main.c.o
pa2functs.h.exe: CMakeFiles/pa2functs.h.dir/build.make
pa2functs.h.exe: CMakeFiles/pa2functs.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable pa2functs.h.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pa2functs.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pa2functs.h.dir/build: pa2functs.h.exe

.PHONY : CMakeFiles/pa2functs.h.dir/build

CMakeFiles/pa2functs.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pa2functs.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pa2functs.h.dir/clean

CMakeFiles/pa2functs.h.dir/depend:
	cd /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2 /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2 /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug /cygdrive/c/Users/C22Bryson.Fraelich/CLionProjects/A2/cmake-build-debug/CMakeFiles/pa2functs.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pa2functs.h.dir/depend

