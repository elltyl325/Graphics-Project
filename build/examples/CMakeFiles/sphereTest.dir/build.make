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
include examples/CMakeFiles/sphereTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/sphereTest.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/sphereTest.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/sphereTest.dir/flags.make

examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o: examples/CMakeFiles/sphereTest.dir/flags.make
examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o: ../examples/sphereTest.cpp
examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o: examples/CMakeFiles/sphereTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o -MF CMakeFiles/sphereTest.dir/sphereTest.cpp.o.d -o CMakeFiles/sphereTest.dir/sphereTest.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/examples/sphereTest.cpp

examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sphereTest.dir/sphereTest.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/examples/sphereTest.cpp > CMakeFiles/sphereTest.dir/sphereTest.cpp.i

examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sphereTest.dir/sphereTest.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/examples/sphereTest.cpp -o CMakeFiles/sphereTest.dir/sphereTest.cpp.s

# Object files for target sphereTest
sphereTest_OBJECTS = \
"CMakeFiles/sphereTest.dir/sphereTest.cpp.o"

# External object files for target sphereTest
sphereTest_EXTERNAL_OBJECTS =

examples/sphereTest: examples/CMakeFiles/sphereTest.dir/sphereTest.cpp.o
examples/sphereTest: examples/CMakeFiles/sphereTest.dir/build.make
examples/sphereTest: src/libsive-util.a
examples/sphereTest: examples/CMakeFiles/sphereTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sphereTest"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sphereTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/sphereTest.dir/build: examples/sphereTest
.PHONY : examples/CMakeFiles/sphereTest.dir/build

examples/CMakeFiles/sphereTest.dir/clean:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/sphereTest.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/sphereTest.dir/clean

examples/CMakeFiles/sphereTest.dir/depend:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tylerelliott/Desktop/School/GraphicsProj /Users/tylerelliott/Desktop/School/GraphicsProj/examples /Users/tylerelliott/Desktop/School/GraphicsProj/build /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples/CMakeFiles/sphereTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/sphereTest.dir/depend

