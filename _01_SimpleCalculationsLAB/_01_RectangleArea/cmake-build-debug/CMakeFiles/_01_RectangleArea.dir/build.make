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
CMAKE_SOURCE_DIR = C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/_01_RectangleArea.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_01_RectangleArea.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_01_RectangleArea.dir/flags.make

CMakeFiles/_01_RectangleArea.dir/main.cpp.obj: CMakeFiles/_01_RectangleArea.dir/flags.make
CMakeFiles/_01_RectangleArea.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_01_RectangleArea.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\_01_RectangleArea.dir\main.cpp.obj -c C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\main.cpp

CMakeFiles/_01_RectangleArea.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_01_RectangleArea.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\main.cpp > CMakeFiles\_01_RectangleArea.dir\main.cpp.i

CMakeFiles/_01_RectangleArea.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_01_RectangleArea.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\main.cpp -o CMakeFiles\_01_RectangleArea.dir\main.cpp.s

# Object files for target _01_RectangleArea
_01_RectangleArea_OBJECTS = \
"CMakeFiles/_01_RectangleArea.dir/main.cpp.obj"

# External object files for target _01_RectangleArea
_01_RectangleArea_EXTERNAL_OBJECTS =

_01_RectangleArea.exe: CMakeFiles/_01_RectangleArea.dir/main.cpp.obj
_01_RectangleArea.exe: CMakeFiles/_01_RectangleArea.dir/build.make
_01_RectangleArea.exe: CMakeFiles/_01_RectangleArea.dir/linklibs.rsp
_01_RectangleArea.exe: CMakeFiles/_01_RectangleArea.dir/objects1.rsp
_01_RectangleArea.exe: CMakeFiles/_01_RectangleArea.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _01_RectangleArea.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_01_RectangleArea.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_01_RectangleArea.dir/build: _01_RectangleArea.exe

.PHONY : CMakeFiles/_01_RectangleArea.dir/build

CMakeFiles/_01_RectangleArea.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_01_RectangleArea.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_01_RectangleArea.dir/clean

CMakeFiles/_01_RectangleArea.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug C:\Projects\CPP_Basics\_01_SimpleCalculationsLAB\_01_RectangleArea\cmake-build-debug\CMakeFiles\_01_RectangleArea.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/_01_RectangleArea.dir/depend

