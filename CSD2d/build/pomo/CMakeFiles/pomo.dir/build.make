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

# Include any dependencies generated for this target.
include pomo/CMakeFiles/pomo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include pomo/CMakeFiles/pomo.dir/compiler_depend.make

# Include the progress variables for this target.
include pomo/CMakeFiles/pomo.dir/progress.make

# Include the compile flags for this target's objects.
include pomo/CMakeFiles/pomo.dir/flags.make

pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o: /Users/tim/code/CSD/csd2d/pomo/PluginEditor.cpp
pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o -MF CMakeFiles/pomo.dir/PluginEditor.cpp.o.d -o CMakeFiles/pomo.dir/PluginEditor.cpp.o -c /Users/tim/code/CSD/csd2d/pomo/PluginEditor.cpp

pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/PluginEditor.cpp.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/pomo/PluginEditor.cpp > CMakeFiles/pomo.dir/PluginEditor.cpp.i

pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/PluginEditor.cpp.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/pomo/PluginEditor.cpp -o CMakeFiles/pomo.dir/PluginEditor.cpp.s

pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o: /Users/tim/code/CSD/csd2d/pomo/PluginProcessor.cpp
pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o -MF CMakeFiles/pomo.dir/PluginProcessor.cpp.o.d -o CMakeFiles/pomo.dir/PluginProcessor.cpp.o -c /Users/tim/code/CSD/csd2d/pomo/PluginProcessor.cpp

pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/PluginProcessor.cpp.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/pomo/PluginProcessor.cpp > CMakeFiles/pomo.dir/PluginProcessor.cpp.i

pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/PluginProcessor.cpp.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/pomo/PluginProcessor.cpp -o CMakeFiles/pomo.dir/PluginProcessor.cpp.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_processors/juce_audio_processors.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_extra/juce_gui_extra.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_extra/juce_gui_extra.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_extra/juce_gui_extra.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_extra/juce_gui_extra.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_basics/juce_gui_basics.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_basics/juce_gui_basics.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_basics/juce_gui_basics.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_gui_basics/juce_gui_basics.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_graphics/juce_graphics.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_graphics/juce_graphics.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_graphics/juce_graphics.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_graphics/juce_graphics.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_events/juce_events.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_events/juce_events.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_events/juce_events.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_events/juce_events.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_core/juce_core.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_core/juce_core.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_core/juce_core.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_core/juce_core.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_data_structures/juce_data_structures.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_data_structures/juce_data_structures.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_data_structures/juce_data_structures.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_data_structures/juce_data_structures.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_basics/juce_audio_basics.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_basics/juce_audio_basics.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_basics/juce_audio_basics.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_basics/juce_audio_basics.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_utils/juce_audio_utils.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_utils/juce_audio_utils.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_utils/juce_audio_utils.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_utils/juce_audio_utils.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_formats/juce_audio_formats.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_formats/juce_audio_formats.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_formats/juce_audio_formats.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_formats/juce_audio_formats.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o: pomo/CMakeFiles/pomo.dir/flags.make
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o: /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_devices/juce_audio_devices.mm
pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o: pomo/CMakeFiles/pomo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o -MF CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o.d -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o -c /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_devices/juce_audio_devices.mm

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.i"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_devices/juce_audio_devices.mm > CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.i

pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.s"
	cd /Users/tim/code/CSD/csd2d/build/pomo && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tim/code/CSD/csd2d/JUCE/modules/juce_audio_devices/juce_audio_devices.mm -o CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.s

# Object files for target pomo
pomo_OBJECTS = \
"CMakeFiles/pomo.dir/PluginEditor.cpp.o" \
"CMakeFiles/pomo.dir/PluginProcessor.cpp.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o" \
"CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o"

# External object files for target pomo
pomo_EXTERNAL_OBJECTS =

pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/PluginEditor.cpp.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/PluginProcessor.cpp.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_ara.cpp.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors_lv2_libs.cpp.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_processors/juce_audio_processors.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_extra/juce_gui_extra.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_gui_basics/juce_gui_basics.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_graphics/juce_graphics.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_events/juce_events.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_core/juce_core.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_data_structures/juce_data_structures.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_utils/juce_audio_utils.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/__/JUCE/modules/juce_audio_devices/juce_audio_devices.mm.o
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/build.make
pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a: pomo/CMakeFiles/pomo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/tim/code/CSD/csd2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX static library \"pomo_artefacts/RelWithDebInfo/libPomodoro Timer_SharedCode.a\""
	cd /Users/tim/code/CSD/csd2d/build/pomo && $(CMAKE_COMMAND) -P CMakeFiles/pomo.dir/cmake_clean_target.cmake
	cd /Users/tim/code/CSD/csd2d/build/pomo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pomo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pomo/CMakeFiles/pomo.dir/build: pomo/pomo_artefacts/RelWithDebInfo/libPomodoro\ Timer_SharedCode.a
.PHONY : pomo/CMakeFiles/pomo.dir/build

pomo/CMakeFiles/pomo.dir/clean:
	cd /Users/tim/code/CSD/csd2d/build/pomo && $(CMAKE_COMMAND) -P CMakeFiles/pomo.dir/cmake_clean.cmake
.PHONY : pomo/CMakeFiles/pomo.dir/clean

pomo/CMakeFiles/pomo.dir/depend:
	cd /Users/tim/code/CSD/csd2d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tim/code/CSD/csd2d /Users/tim/code/CSD/csd2d/pomo /Users/tim/code/CSD/csd2d/build /Users/tim/code/CSD/csd2d/build/pomo /Users/tim/code/CSD/csd2d/build/pomo/CMakeFiles/pomo.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : pomo/CMakeFiles/pomo.dir/depend

