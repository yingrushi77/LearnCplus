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
CMAKE_SOURCE_DIR = D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AddressBook.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AddressBook.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AddressBook.dir/flags.make

CMakeFiles/AddressBook.dir/AddressBook.cpp.obj: CMakeFiles/AddressBook.dir/flags.make
CMakeFiles/AddressBook.dir/AddressBook.cpp.obj: ../AddressBook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AddressBook.dir/AddressBook.cpp.obj"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AddressBook.dir\AddressBook.cpp.obj -c D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\AddressBook.cpp

CMakeFiles/AddressBook.dir/AddressBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AddressBook.dir/AddressBook.cpp.i"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\AddressBook.cpp > CMakeFiles\AddressBook.dir\AddressBook.cpp.i

CMakeFiles/AddressBook.dir/AddressBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AddressBook.dir/AddressBook.cpp.s"
	E:\codeblock\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\AddressBook.cpp -o CMakeFiles\AddressBook.dir\AddressBook.cpp.s

# Object files for target AddressBook
AddressBook_OBJECTS = \
"CMakeFiles/AddressBook.dir/AddressBook.cpp.obj"

# External object files for target AddressBook
AddressBook_EXTERNAL_OBJECTS =

AddressBook.exe: CMakeFiles/AddressBook.dir/AddressBook.cpp.obj
AddressBook.exe: CMakeFiles/AddressBook.dir/build.make
AddressBook.exe: CMakeFiles/AddressBook.dir/linklibs.rsp
AddressBook.exe: CMakeFiles/AddressBook.dir/objects1.rsp
AddressBook.exe: CMakeFiles/AddressBook.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AddressBook.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AddressBook.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AddressBook.dir/build: AddressBook.exe

.PHONY : CMakeFiles/AddressBook.dir/build

CMakeFiles/AddressBook.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AddressBook.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AddressBook.dir/clean

CMakeFiles/AddressBook.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug D:\GitHubRepository\LearnC++\code\yingrushi_project\AddressBook\cmake-build-debug\CMakeFiles\AddressBook.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AddressBook.dir/depend

