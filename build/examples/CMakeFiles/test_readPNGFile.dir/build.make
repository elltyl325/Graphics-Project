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
include examples/CMakeFiles/test_readPNGFile.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/test_readPNGFile.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/test_readPNGFile.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/test_readPNGFile.dir/flags.make

examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o: examples/CMakeFiles/test_readPNGFile.dir/flags.make
examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o: ../examples/test_readPNGFile.cpp
examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o: examples/CMakeFiles/test_readPNGFile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o -MF CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o.d -o CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/examples/test_readPNGFile.cpp

examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/examples/test_readPNGFile.cpp > CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.i

examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/examples/test_readPNGFile.cpp -o CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.s

# Object files for target test_readPNGFile
test_readPNGFile_OBJECTS = \
"CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o"

# External object files for target test_readPNGFile
test_readPNGFile_EXTERNAL_OBJECTS =

examples/test_readPNGFile: examples/CMakeFiles/test_readPNGFile.dir/test_readPNGFile.cpp.o
examples/test_readPNGFile: examples/CMakeFiles/test_readPNGFile.dir/build.make
examples/test_readPNGFile: src/libsive-util.a
examples/test_readPNGFile: /usr/local/lib/libboost_program_options-mt.dylib
examples/test_readPNGFile: /usr/local/lib/libpng.dylib
examples/test_readPNGFile: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/lib/libz.tbd
examples/test_readPNGFile: examples/CMakeFiles/test_readPNGFile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_readPNGFile"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_readPNGFile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/test_readPNGFile.dir/build: examples/test_readPNGFile
.PHONY : examples/CMakeFiles/test_readPNGFile.dir/build

examples/CMakeFiles/test_readPNGFile.dir/clean:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/test_readPNGFile.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/test_readPNGFile.dir/clean

examples/CMakeFiles/test_readPNGFile.dir/depend:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tylerelliott/Desktop/School/GraphicsProj /Users/tylerelliott/Desktop/School/GraphicsProj/examples /Users/tylerelliott/Desktop/School/GraphicsProj/build /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples /Users/tylerelliott/Desktop/School/GraphicsProj/build/examples/CMakeFiles/test_readPNGFile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/test_readPNGFile.dir/depend
