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
CMAKE_SOURCE_DIR = /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_10_HotelRoom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_10_HotelRoom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_10_HotelRoom.dir/flags.make

CMakeFiles/_10_HotelRoom.dir/main.cpp.o: CMakeFiles/_10_HotelRoom.dir/flags.make
CMakeFiles/_10_HotelRoom.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_10_HotelRoom.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_10_HotelRoom.dir/main.cpp.o -c /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/main.cpp

CMakeFiles/_10_HotelRoom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_10_HotelRoom.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/main.cpp > CMakeFiles/_10_HotelRoom.dir/main.cpp.i

CMakeFiles/_10_HotelRoom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_10_HotelRoom.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/main.cpp -o CMakeFiles/_10_HotelRoom.dir/main.cpp.s

# Object files for target _10_HotelRoom
_10_HotelRoom_OBJECTS = \
"CMakeFiles/_10_HotelRoom.dir/main.cpp.o"

# External object files for target _10_HotelRoom
_10_HotelRoom_EXTERNAL_OBJECTS =

_10_HotelRoom: CMakeFiles/_10_HotelRoom.dir/main.cpp.o
_10_HotelRoom: CMakeFiles/_10_HotelRoom.dir/build.make
_10_HotelRoom: CMakeFiles/_10_HotelRoom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _10_HotelRoom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_10_HotelRoom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_10_HotelRoom.dir/build: _10_HotelRoom

.PHONY : CMakeFiles/_10_HotelRoom.dir/build

CMakeFiles/_10_HotelRoom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_10_HotelRoom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_10_HotelRoom.dir/clean

CMakeFiles/_10_HotelRoom.dir/depend:
	cd /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug /home/andrey/Projects/CPP_Basics/_06_NestedConditionalStatementsEX/_10_HotelRoom/cmake-build-debug/CMakeFiles/_10_HotelRoom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_10_HotelRoom.dir/depend

