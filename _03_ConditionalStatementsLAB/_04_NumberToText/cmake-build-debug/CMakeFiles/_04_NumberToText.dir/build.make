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
CMAKE_COMMAND = /opt/clionInstall/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clionInstall/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_04_NumberToText.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_04_NumberToText.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_04_NumberToText.dir/flags.make

CMakeFiles/_04_NumberToText.dir/main.cpp.o: CMakeFiles/_04_NumberToText.dir/flags.make
CMakeFiles/_04_NumberToText.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_04_NumberToText.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_04_NumberToText.dir/main.cpp.o -c /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/main.cpp

CMakeFiles/_04_NumberToText.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_04_NumberToText.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/main.cpp > CMakeFiles/_04_NumberToText.dir/main.cpp.i

CMakeFiles/_04_NumberToText.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_04_NumberToText.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/main.cpp -o CMakeFiles/_04_NumberToText.dir/main.cpp.s

# Object files for target _04_NumberToText
_04_NumberToText_OBJECTS = \
"CMakeFiles/_04_NumberToText.dir/main.cpp.o"

# External object files for target _04_NumberToText
_04_NumberToText_EXTERNAL_OBJECTS =

_04_NumberToText: CMakeFiles/_04_NumberToText.dir/main.cpp.o
_04_NumberToText: CMakeFiles/_04_NumberToText.dir/build.make
_04_NumberToText: CMakeFiles/_04_NumberToText.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _04_NumberToText"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_04_NumberToText.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_04_NumberToText.dir/build: _04_NumberToText

.PHONY : CMakeFiles/_04_NumberToText.dir/build

CMakeFiles/_04_NumberToText.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_04_NumberToText.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_04_NumberToText.dir/clean

CMakeFiles/_04_NumberToText.dir/depend:
	cd /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug /home/andrey/Projects/CPP_Basics/_03_ConditionalStatementsLAB/_04_NumberToText/cmake-build-debug/CMakeFiles/_04_NumberToText.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_04_NumberToText.dir/depend

