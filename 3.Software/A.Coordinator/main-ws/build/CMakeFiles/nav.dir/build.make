# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/main-ws/src/conference

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/main-ws/build

# Include any dependencies generated for this target.
include CMakeFiles/nav.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nav.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nav.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nav.dir/flags.make

CMakeFiles/nav.dir/src/nav.cpp.o: CMakeFiles/nav.dir/flags.make
CMakeFiles/nav.dir/src/nav.cpp.o: /home/main-ws/src/conference/src/nav.cpp
CMakeFiles/nav.dir/src/nav.cpp.o: CMakeFiles/nav.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/main-ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nav.dir/src/nav.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nav.dir/src/nav.cpp.o -MF CMakeFiles/nav.dir/src/nav.cpp.o.d -o CMakeFiles/nav.dir/src/nav.cpp.o -c /home/main-ws/src/conference/src/nav.cpp

CMakeFiles/nav.dir/src/nav.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nav.dir/src/nav.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/main-ws/src/conference/src/nav.cpp > CMakeFiles/nav.dir/src/nav.cpp.i

CMakeFiles/nav.dir/src/nav.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nav.dir/src/nav.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/main-ws/src/conference/src/nav.cpp -o CMakeFiles/nav.dir/src/nav.cpp.s

# Object files for target nav
nav_OBJECTS = \
"CMakeFiles/nav.dir/src/nav.cpp.o"

# External object files for target nav
nav_EXTERNAL_OBJECTS =

libnav.a: CMakeFiles/nav.dir/src/nav.cpp.o
libnav.a: CMakeFiles/nav.dir/build.make
libnav.a: CMakeFiles/nav.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/main-ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnav.a"
	$(CMAKE_COMMAND) -P CMakeFiles/nav.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nav.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nav.dir/build: libnav.a
.PHONY : CMakeFiles/nav.dir/build

CMakeFiles/nav.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nav.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nav.dir/clean

CMakeFiles/nav.dir/depend:
	cd /home/main-ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/main-ws/src/conference /home/main-ws/src/conference /home/main-ws/build /home/main-ws/build /home/main-ws/build/CMakeFiles/nav.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nav.dir/depend

