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
include src/CMakeFiles/sive-util.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/sive-util.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/sive-util.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/sive-util.dir/flags.make

src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o: ../src/ArgumentParsing.cpp
src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o -MF CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o.d -o CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/ArgumentParsing.cpp

src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/ArgumentParsing.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/ArgumentParsing.cpp > CMakeFiles/sive-util.dir/ArgumentParsing.cpp.i

src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/ArgumentParsing.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/ArgumentParsing.cpp -o CMakeFiles/sive-util.dir/ArgumentParsing.cpp.s

src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o: ../src/handleGraphicsArgs.cpp
src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o -MF CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o.d -o CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/handleGraphicsArgs.cpp

src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/handleGraphicsArgs.cpp > CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.i

src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/handleGraphicsArgs.cpp -o CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.s

src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o: ../src/jsonSceneParser.cpp
src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o -MF CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o.d -o CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/jsonSceneParser.cpp

src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/jsonSceneParser.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/jsonSceneParser.cpp > CMakeFiles/sive-util.dir/jsonSceneParser.cpp.i

src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/jsonSceneParser.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/jsonSceneParser.cpp -o CMakeFiles/sive-util.dir/jsonSceneParser.cpp.s

src/CMakeFiles/sive-util.dir/model_obj.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/model_obj.cpp.o: ../src/model_obj.cpp
src/CMakeFiles/sive-util.dir/model_obj.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/sive-util.dir/model_obj.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/model_obj.cpp.o -MF CMakeFiles/sive-util.dir/model_obj.cpp.o.d -o CMakeFiles/sive-util.dir/model_obj.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/model_obj.cpp

src/CMakeFiles/sive-util.dir/model_obj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/model_obj.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/model_obj.cpp > CMakeFiles/sive-util.dir/model_obj.cpp.i

src/CMakeFiles/sive-util.dir/model_obj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/model_obj.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/model_obj.cpp -o CMakeFiles/sive-util.dir/model_obj.cpp.s

src/CMakeFiles/sive-util.dir/Random.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/Random.cpp.o: ../src/Random.cpp
src/CMakeFiles/sive-util.dir/Random.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/sive-util.dir/Random.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/Random.cpp.o -MF CMakeFiles/sive-util.dir/Random.cpp.o.d -o CMakeFiles/sive-util.dir/Random.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/Random.cpp

src/CMakeFiles/sive-util.dir/Random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/Random.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/Random.cpp > CMakeFiles/sive-util.dir/Random.cpp.i

src/CMakeFiles/sive-util.dir/Random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/Random.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/Random.cpp -o CMakeFiles/sive-util.dir/Random.cpp.s

src/CMakeFiles/sive-util.dir/Timer.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/Timer.cpp.o: ../src/Timer.cpp
src/CMakeFiles/sive-util.dir/Timer.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/sive-util.dir/Timer.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/Timer.cpp.o -MF CMakeFiles/sive-util.dir/Timer.cpp.o.d -o CMakeFiles/sive-util.dir/Timer.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/Timer.cpp

src/CMakeFiles/sive-util.dir/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/Timer.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/Timer.cpp > CMakeFiles/sive-util.dir/Timer.cpp.i

src/CMakeFiles/sive-util.dir/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/Timer.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/Timer.cpp -o CMakeFiles/sive-util.dir/Timer.cpp.s

src/CMakeFiles/sive-util.dir/Vector3D.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/Vector3D.cpp.o: ../src/Vector3D.cpp
src/CMakeFiles/sive-util.dir/Vector3D.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/sive-util.dir/Vector3D.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/Vector3D.cpp.o -MF CMakeFiles/sive-util.dir/Vector3D.cpp.o.d -o CMakeFiles/sive-util.dir/Vector3D.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/Vector3D.cpp

src/CMakeFiles/sive-util.dir/Vector3D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/Vector3D.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/Vector3D.cpp > CMakeFiles/sive-util.dir/Vector3D.cpp.i

src/CMakeFiles/sive-util.dir/Vector3D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/Vector3D.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/Vector3D.cpp -o CMakeFiles/sive-util.dir/Vector3D.cpp.s

src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o: src/CMakeFiles/sive-util.dir/flags.make
src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o: ../src/XMLSceneParser.cpp
src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o: src/CMakeFiles/sive-util.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o -MF CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o.d -o CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o -c /Users/tylerelliott/Desktop/School/GraphicsProj/src/XMLSceneParser.cpp

src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sive-util.dir/XMLSceneParser.cpp.i"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tylerelliott/Desktop/School/GraphicsProj/src/XMLSceneParser.cpp > CMakeFiles/sive-util.dir/XMLSceneParser.cpp.i

src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sive-util.dir/XMLSceneParser.cpp.s"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tylerelliott/Desktop/School/GraphicsProj/src/XMLSceneParser.cpp -o CMakeFiles/sive-util.dir/XMLSceneParser.cpp.s

# Object files for target sive-util
sive__util_OBJECTS = \
"CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o" \
"CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o" \
"CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o" \
"CMakeFiles/sive-util.dir/model_obj.cpp.o" \
"CMakeFiles/sive-util.dir/Random.cpp.o" \
"CMakeFiles/sive-util.dir/Timer.cpp.o" \
"CMakeFiles/sive-util.dir/Vector3D.cpp.o" \
"CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o"

# External object files for target sive-util
sive__util_EXTERNAL_OBJECTS =

src/libsive-util.a: src/CMakeFiles/sive-util.dir/ArgumentParsing.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/handleGraphicsArgs.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/jsonSceneParser.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/model_obj.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/Random.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/Timer.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/Vector3D.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/XMLSceneParser.cpp.o
src/libsive-util.a: src/CMakeFiles/sive-util.dir/build.make
src/libsive-util.a: src/CMakeFiles/sive-util.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tylerelliott/Desktop/School/GraphicsProj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libsive-util.a"
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && $(CMAKE_COMMAND) -P CMakeFiles/sive-util.dir/cmake_clean_target.cmake
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sive-util.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/sive-util.dir/build: src/libsive-util.a
.PHONY : src/CMakeFiles/sive-util.dir/build

src/CMakeFiles/sive-util.dir/clean:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build/src && $(CMAKE_COMMAND) -P CMakeFiles/sive-util.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/sive-util.dir/clean

src/CMakeFiles/sive-util.dir/depend:
	cd /Users/tylerelliott/Desktop/School/GraphicsProj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tylerelliott/Desktop/School/GraphicsProj /Users/tylerelliott/Desktop/School/GraphicsProj/src /Users/tylerelliott/Desktop/School/GraphicsProj/build /Users/tylerelliott/Desktop/School/GraphicsProj/build/src /Users/tylerelliott/Desktop/School/GraphicsProj/build/src/CMakeFiles/sive-util.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/sive-util.dir/depend

