# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/lehongnhat/workspace/ngapv2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lehongnhat/workspace/ngapv2/build

# Include any dependencies generated for this target.
include CMakeFiles/asntest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/asntest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asntest.dir/flags.make

CMakeFiles/asntest.dir/main.c.o: CMakeFiles/asntest.dir/flags.make
CMakeFiles/asntest.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lehongnhat/workspace/ngapv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/asntest.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/asntest.dir/main.c.o   -c /home/lehongnhat/workspace/ngapv2/main.c

CMakeFiles/asntest.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/asntest.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lehongnhat/workspace/ngapv2/main.c > CMakeFiles/asntest.dir/main.c.i

CMakeFiles/asntest.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/asntest.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lehongnhat/workspace/ngapv2/main.c -o CMakeFiles/asntest.dir/main.c.s

CMakeFiles/asntest.dir/main.c.o.requires:

.PHONY : CMakeFiles/asntest.dir/main.c.o.requires

CMakeFiles/asntest.dir/main.c.o.provides: CMakeFiles/asntest.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/asntest.dir/build.make CMakeFiles/asntest.dir/main.c.o.provides.build
.PHONY : CMakeFiles/asntest.dir/main.c.o.provides

CMakeFiles/asntest.dir/main.c.o.provides.build: CMakeFiles/asntest.dir/main.c.o


# Object files for target asntest
asntest_OBJECTS = \
"CMakeFiles/asntest.dir/main.c.o"

# External object files for target asntest
asntest_EXTERNAL_OBJECTS =

asntest: CMakeFiles/asntest.dir/main.c.o
asntest: CMakeFiles/asntest.dir/build.make
asntest: libngaplib.a
asntest: CMakeFiles/asntest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lehongnhat/workspace/ngapv2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable asntest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/asntest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asntest.dir/build: asntest

.PHONY : CMakeFiles/asntest.dir/build

CMakeFiles/asntest.dir/requires: CMakeFiles/asntest.dir/main.c.o.requires

.PHONY : CMakeFiles/asntest.dir/requires

CMakeFiles/asntest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/asntest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/asntest.dir/clean

CMakeFiles/asntest.dir/depend:
	cd /home/lehongnhat/workspace/ngapv2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lehongnhat/workspace/ngapv2 /home/lehongnhat/workspace/ngapv2 /home/lehongnhat/workspace/ngapv2/build /home/lehongnhat/workspace/ngapv2/build /home/lehongnhat/workspace/ngapv2/build/CMakeFiles/asntest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asntest.dir/depend

