# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sebastian/Schreibtisch/IPI/Übung/Ü6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebastian/Schreibtisch/IPI/Übung/Ü6/build

# Include any dependencies generated for this target.
include CMakeFiles/myvector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myvector.dir/flags.make

CMakeFiles/myvector.dir/main_myvector.cc.o: CMakeFiles/myvector.dir/flags.make
CMakeFiles/myvector.dir/main_myvector.cc.o: ../main_myvector.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastian/Schreibtisch/IPI/Übung/Ü6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myvector.dir/main_myvector.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myvector.dir/main_myvector.cc.o -c /home/sebastian/Schreibtisch/IPI/Übung/Ü6/main_myvector.cc

CMakeFiles/myvector.dir/main_myvector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myvector.dir/main_myvector.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastian/Schreibtisch/IPI/Übung/Ü6/main_myvector.cc > CMakeFiles/myvector.dir/main_myvector.cc.i

CMakeFiles/myvector.dir/main_myvector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myvector.dir/main_myvector.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastian/Schreibtisch/IPI/Übung/Ü6/main_myvector.cc -o CMakeFiles/myvector.dir/main_myvector.cc.s

CMakeFiles/myvector.dir/main_myvector.cc.o.requires:

.PHONY : CMakeFiles/myvector.dir/main_myvector.cc.o.requires

CMakeFiles/myvector.dir/main_myvector.cc.o.provides: CMakeFiles/myvector.dir/main_myvector.cc.o.requires
	$(MAKE) -f CMakeFiles/myvector.dir/build.make CMakeFiles/myvector.dir/main_myvector.cc.o.provides.build
.PHONY : CMakeFiles/myvector.dir/main_myvector.cc.o.provides

CMakeFiles/myvector.dir/main_myvector.cc.o.provides.build: CMakeFiles/myvector.dir/main_myvector.cc.o


CMakeFiles/myvector.dir/myvector.cc.o: CMakeFiles/myvector.dir/flags.make
CMakeFiles/myvector.dir/myvector.cc.o: ../myvector.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastian/Schreibtisch/IPI/Übung/Ü6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myvector.dir/myvector.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myvector.dir/myvector.cc.o -c /home/sebastian/Schreibtisch/IPI/Übung/Ü6/myvector.cc

CMakeFiles/myvector.dir/myvector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myvector.dir/myvector.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastian/Schreibtisch/IPI/Übung/Ü6/myvector.cc > CMakeFiles/myvector.dir/myvector.cc.i

CMakeFiles/myvector.dir/myvector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myvector.dir/myvector.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastian/Schreibtisch/IPI/Übung/Ü6/myvector.cc -o CMakeFiles/myvector.dir/myvector.cc.s

CMakeFiles/myvector.dir/myvector.cc.o.requires:

.PHONY : CMakeFiles/myvector.dir/myvector.cc.o.requires

CMakeFiles/myvector.dir/myvector.cc.o.provides: CMakeFiles/myvector.dir/myvector.cc.o.requires
	$(MAKE) -f CMakeFiles/myvector.dir/build.make CMakeFiles/myvector.dir/myvector.cc.o.provides.build
.PHONY : CMakeFiles/myvector.dir/myvector.cc.o.provides

CMakeFiles/myvector.dir/myvector.cc.o.provides.build: CMakeFiles/myvector.dir/myvector.cc.o


# Object files for target myvector
myvector_OBJECTS = \
"CMakeFiles/myvector.dir/main_myvector.cc.o" \
"CMakeFiles/myvector.dir/myvector.cc.o"

# External object files for target myvector
myvector_EXTERNAL_OBJECTS =

myvector: CMakeFiles/myvector.dir/main_myvector.cc.o
myvector: CMakeFiles/myvector.dir/myvector.cc.o
myvector: CMakeFiles/myvector.dir/build.make
myvector: CMakeFiles/myvector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebastian/Schreibtisch/IPI/Übung/Ü6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable myvector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myvector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myvector.dir/build: myvector

.PHONY : CMakeFiles/myvector.dir/build

CMakeFiles/myvector.dir/requires: CMakeFiles/myvector.dir/main_myvector.cc.o.requires
CMakeFiles/myvector.dir/requires: CMakeFiles/myvector.dir/myvector.cc.o.requires

.PHONY : CMakeFiles/myvector.dir/requires

CMakeFiles/myvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myvector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myvector.dir/clean

CMakeFiles/myvector.dir/depend:
	cd /home/sebastian/Schreibtisch/IPI/Übung/Ü6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebastian/Schreibtisch/IPI/Übung/Ü6 /home/sebastian/Schreibtisch/IPI/Übung/Ü6 /home/sebastian/Schreibtisch/IPI/Übung/Ü6/build /home/sebastian/Schreibtisch/IPI/Übung/Ü6/build /home/sebastian/Schreibtisch/IPI/Übung/Ü6/build/CMakeFiles/myvector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myvector.dir/depend

