# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "E:\CLion\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassPractice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClassPractice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassPractice.dir/flags.make

CMakeFiles/ClassPractice.dir/main.cpp.obj: CMakeFiles/ClassPractice.dir/flags.make
CMakeFiles/ClassPractice.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassPractice.dir/main.cpp.obj"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ClassPractice.dir\main.cpp.obj -c D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\main.cpp

CMakeFiles/ClassPractice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassPractice.dir/main.cpp.i"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\main.cpp > CMakeFiles\ClassPractice.dir\main.cpp.i

CMakeFiles/ClassPractice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassPractice.dir/main.cpp.s"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\main.cpp -o CMakeFiles\ClassPractice.dir\main.cpp.s

# Object files for target ClassPractice
ClassPractice_OBJECTS = \
"CMakeFiles/ClassPractice.dir/main.cpp.obj"

# External object files for target ClassPractice
ClassPractice_EXTERNAL_OBJECTS =

ClassPractice.exe: CMakeFiles/ClassPractice.dir/main.cpp.obj
ClassPractice.exe: CMakeFiles/ClassPractice.dir/build.make
ClassPractice.exe: CMakeFiles/ClassPractice.dir/linklibs.rsp
ClassPractice.exe: CMakeFiles/ClassPractice.dir/objects1.rsp
ClassPractice.exe: CMakeFiles/ClassPractice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClassPractice.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ClassPractice.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassPractice.dir/build: ClassPractice.exe

.PHONY : CMakeFiles/ClassPractice.dir/build

CMakeFiles/ClassPractice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ClassPractice.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ClassPractice.dir/clean

CMakeFiles/ClassPractice.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug D:\GitHubRepository\LearnC++\code\yingrushi_project\ClassPractice\cmake-build-debug\CMakeFiles\ClassPractice.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassPractice.dir/depend

