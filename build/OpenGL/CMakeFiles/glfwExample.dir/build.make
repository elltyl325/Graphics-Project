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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tylerelliott/Desktop/School/GraphicsProj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tylerelliott/Desktop/School/GraphicsProj/build

# Include any dependencies generated for this target.
include OpenGL/CMakeFiles/glfwExample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include OpenGL/CMakeFiles/glfwExample.dir/compiler_depend.make

# Include the progress variables for this target.
include OpenGL/CMakeFiles/glfwExample.dir/progress.make

# Include the compile flags for this target's objects.
include OpenGL/CMakeFiles/glfwExample.dir/flags.make

OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o: OpenGL/CMakeFiles/glfwExample.dir/flags.make
OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o: ../OpenGL/glfwExample.cpp
OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o: OpenGL/CMakeFiles/glfwExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o -MF CMakeFiles/glfwExample.dir/glfwExample.cpp.o.d -o CMakeFiles/glfwExample.dir/glfwExample.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/glfwExample.cpp

OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glfwExample.dir/glfwExample.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/glfwExample.cpp > CMakeFiles/glfwExample.dir/glfwExample.cpp.i

OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glfwExample.dir/glfwExample.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/glfwExample.cpp -o CMakeFiles/glfwExample.dir/glfwExample.cpp.s

OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o: OpenGL/CMakeFiles/glfwExample.dir/flags.make
OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o: ../OpenGL/GLSL.cpp
OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o: OpenGL/CMakeFiles/glfwExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o -MF CMakeFiles/glfwExample.dir/GLSL.cpp.o.d -o CMakeFiles/glfwExample.dir/GLSL.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/GLSL.cpp

OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glfwExample.dir/GLSL.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/GLSL.cpp > CMakeFiles/glfwExample.dir/GLSL.cpp.i

OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glfwExample.dir/GLSL.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL/GLSL.cpp -o CMakeFiles/glfwExample.dir/GLSL.cpp.s

# Object files for target glfwExample
glfwExample_OBJECTS = \
"CMakeFiles/glfwExample.dir/glfwExample.cpp.o" \
"CMakeFiles/glfwExample.dir/GLSL.cpp.o"

# External object files for target glfwExample
glfwExample_EXTERNAL_OBJECTS =

OpenGL/glfwExample: OpenGL/CMakeFiles/glfwExample.dir/glfwExample.cpp.o
OpenGL/glfwExample: OpenGL/CMakeFiles/glfwExample.dir/GLSL.cpp.o
OpenGL/glfwExample: OpenGL/CMakeFiles/glfwExample.dir/build.make
OpenGL/glfwExample: /usr/local/lib/libGLEW.dylib
OpenGL/glfwExample: glfw-master/src/libglfw3.a
OpenGL/glfwExample: /usr/local/lib/libpng.dylib
OpenGL/glfwExample: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/lib/libz.tbd
OpenGL/glfwExample: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/lib/libz.tbd
OpenGL/glfwExample: OpenGL/CMakeFiles/glfwExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable glfwExample"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glfwExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
OpenGL/CMakeFiles/glfwExample.dir/build: OpenGL/glfwExample
.PHONY : OpenGL/CMakeFiles/glfwExample.dir/build

OpenGL/CMakeFiles/glfwExample.dir/clean:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL && $(CMAKE_COMMAND) -P CMakeFiles/glfwExample.dir/cmake_clean.cmake
.PHONY : OpenGL/CMakeFiles/glfwExample.dir/clean

OpenGL/CMakeFiles/glfwExample.dir/depend:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tylerelliott/Desktop/School/GraphicsProj /Users/tylerelliott/Desktop/School/GraphicsProj/OpenGL /Users/tylerelliott/Desktop/School/GraphicsProj/build /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL /Users/tylerelliott/Desktop/School/GraphicsProj/build/OpenGL/CMakeFiles/glfwExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : OpenGL/CMakeFiles/glfwExample.dir/depend
