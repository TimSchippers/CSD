# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tim/code/CSD/csd2d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tim/code/CSD/csd2d/build

# Utility rule file for pomo_All.

# Include any custom commands dependencies for this target.
include pomo/CMakeFiles/pomo_All.dir/compiler_depend.make

# Include the progress variables for this target.
include pomo/CMakeFiles/pomo_All.dir/progress.make

pomo_All: pomo/CMakeFiles/pomo_All.dir/build.make
.PHONY : pomo_All

# Rule to build all files generated by this target.
pomo/CMakeFiles/pomo_All.dir/build: pomo_All
.PHONY : pomo/CMakeFiles/pomo_All.dir/build

pomo/CMakeFiles/pomo_All.dir/clean:
	cd /Users/tim/code/CSD/csd2d/build/pomo && $(CMAKE_COMMAND) -P CMakeFiles/pomo_All.dir/cmake_clean.cmake
.PHONY : pomo/CMakeFiles/pomo_All.dir/clean

pomo/CMakeFiles/pomo_All.dir/depend:
	cd /Users/tim/code/CSD/csd2d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tim/code/CSD/csd2d /Users/tim/code/CSD/csd2d/pomo /Users/tim/code/CSD/csd2d/build /Users/tim/code/CSD/csd2d/build/pomo /Users/tim/code/CSD/csd2d/build/pomo/CMakeFiles/pomo_All.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : pomo/CMakeFiles/pomo_All.dir/depend

