# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_05_TrapeziodArea.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_05_TrapeziodArea.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_05_TrapeziodArea.dir/flags.make

CMakeFiles/_05_TrapeziodArea.dir/main.cpp.obj: CMakeFiles/_05_TrapeziodArea.dir/flags.make
CMakeFiles/_05_TrapeziodArea.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_05_TrapeziodArea.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\_05_TrapeziodArea.dir\main.cpp.obj -c C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\main.cpp

CMakeFiles/_05_TrapeziodArea.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_05_TrapeziodArea.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\main.cpp > CMakeFiles\_05_TrapeziodArea.dir\main.cpp.i

CMakeFiles/_05_TrapeziodArea.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_05_TrapeziodArea.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\main.cpp -o CMakeFiles\_05_TrapeziodArea.dir\main.cpp.s

# Object files for target _05_TrapeziodArea
_05_TrapeziodArea_OBJECTS = \
"CMakeFiles/_05_TrapeziodArea.dir/main.cpp.obj"

# External object files for target _05_TrapeziodArea
_05_TrapeziodArea_EXTERNAL_OBJECTS =

_05_TrapeziodArea.exe: CMakeFiles/_05_TrapeziodArea.dir/main.cpp.obj
_05_TrapeziodArea.exe: CMakeFiles/_05_TrapeziodArea.dir/build.make
_05_TrapeziodArea.exe: CMakeFiles/_05_TrapeziodArea.dir/linklibs.rsp
_05_TrapeziodArea.exe: CMakeFiles/_05_TrapeziodArea.dir/objects1.rsp
_05_TrapeziodArea.exe: CMakeFiles/_05_TrapeziodArea.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _05_TrapeziodArea.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_05_TrapeziodArea.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_05_TrapeziodArea.dir/build: _05_TrapeziodArea.exe

.PHONY : CMakeFiles/_05_TrapeziodArea.dir/build

CMakeFiles/_05_TrapeziodArea.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_05_TrapeziodArea.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_05_TrapeziodArea.dir/clean

CMakeFiles/_05_TrapeziodArea.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_05_TrapeziodArea\cmake-build-debug\CMakeFiles\_05_TrapeziodArea.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_05_TrapeziodArea.dir/depend

