# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MagzineNote.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MagzineNote.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MagzineNote.dir/flags.make

CMakeFiles/MagzineNote.dir/main.cpp.o: CMakeFiles/MagzineNote.dir/flags.make
CMakeFiles/MagzineNote.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MagzineNote.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MagzineNote.dir/main.cpp.o -c "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/main.cpp"

CMakeFiles/MagzineNote.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MagzineNote.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/main.cpp" > CMakeFiles/MagzineNote.dir/main.cpp.i

CMakeFiles/MagzineNote.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MagzineNote.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/main.cpp" -o CMakeFiles/MagzineNote.dir/main.cpp.s

# Object files for target MagzineNote
MagzineNote_OBJECTS = \
"CMakeFiles/MagzineNote.dir/main.cpp.o"

# External object files for target MagzineNote
MagzineNote_EXTERNAL_OBJECTS =

MagzineNote: CMakeFiles/MagzineNote.dir/main.cpp.o
MagzineNote: CMakeFiles/MagzineNote.dir/build.make
MagzineNote: CMakeFiles/MagzineNote.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MagzineNote"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MagzineNote.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MagzineNote.dir/build: MagzineNote

.PHONY : CMakeFiles/MagzineNote.dir/build

CMakeFiles/MagzineNote.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MagzineNote.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MagzineNote.dir/clean

CMakeFiles/MagzineNote.dir/depend:
	cd "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote" "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote" "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug" "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug" "/Users/zainansari/Google Drive/MScFE/CPplus/MagzineNote/cmake-build-debug/CMakeFiles/MagzineNote.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MagzineNote.dir/depend

