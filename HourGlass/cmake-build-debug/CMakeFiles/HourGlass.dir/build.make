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
CMAKE_SOURCE_DIR = "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HourGlass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HourGlass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HourGlass.dir/flags.make

CMakeFiles/HourGlass.dir/main.cpp.o: CMakeFiles/HourGlass.dir/flags.make
CMakeFiles/HourGlass.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HourGlass.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HourGlass.dir/main.cpp.o -c "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/main.cpp"

CMakeFiles/HourGlass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HourGlass.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/main.cpp" > CMakeFiles/HourGlass.dir/main.cpp.i

CMakeFiles/HourGlass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HourGlass.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/main.cpp" -o CMakeFiles/HourGlass.dir/main.cpp.s

# Object files for target HourGlass
HourGlass_OBJECTS = \
"CMakeFiles/HourGlass.dir/main.cpp.o"

# External object files for target HourGlass
HourGlass_EXTERNAL_OBJECTS =

HourGlass: CMakeFiles/HourGlass.dir/main.cpp.o
HourGlass: CMakeFiles/HourGlass.dir/build.make
HourGlass: CMakeFiles/HourGlass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HourGlass"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HourGlass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HourGlass.dir/build: HourGlass

.PHONY : CMakeFiles/HourGlass.dir/build

CMakeFiles/HourGlass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HourGlass.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HourGlass.dir/clean

CMakeFiles/HourGlass.dir/depend:
	cd "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass" "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass" "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug" "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug" "/Users/zainansari/Google Drive/MScFE/CPplus/HourGlass/cmake-build-debug/CMakeFiles/HourGlass.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HourGlass.dir/depend

