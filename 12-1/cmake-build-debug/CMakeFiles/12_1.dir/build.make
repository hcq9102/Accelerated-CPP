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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Q\CLionProjects\12-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Q\CLionProjects\12-1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/12_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/12_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12_1.dir/flags.make

CMakeFiles/12_1.dir/main.cpp.obj: CMakeFiles/12_1.dir/flags.make
CMakeFiles/12_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Q\CLionProjects\12-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/12_1.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\12_1.dir\main.cpp.obj -c C:\Users\Q\CLionProjects\12-1\main.cpp

CMakeFiles/12_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_1.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Q\CLionProjects\12-1\main.cpp > CMakeFiles\12_1.dir\main.cpp.i

CMakeFiles/12_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_1.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Q\CLionProjects\12-1\main.cpp -o CMakeFiles\12_1.dir\main.cpp.s

CMakeFiles/12_1.dir/Str.cpp.obj: CMakeFiles/12_1.dir/flags.make
CMakeFiles/12_1.dir/Str.cpp.obj: ../Str.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Q\CLionProjects\12-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/12_1.dir/Str.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\12_1.dir\Str.cpp.obj -c C:\Users\Q\CLionProjects\12-1\Str.cpp

CMakeFiles/12_1.dir/Str.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_1.dir/Str.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Q\CLionProjects\12-1\Str.cpp > CMakeFiles\12_1.dir\Str.cpp.i

CMakeFiles/12_1.dir/Str.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_1.dir/Str.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Q\CLionProjects\12-1\Str.cpp -o CMakeFiles\12_1.dir\Str.cpp.s

# Object files for target 12_1
12_1_OBJECTS = \
"CMakeFiles/12_1.dir/main.cpp.obj" \
"CMakeFiles/12_1.dir/Str.cpp.obj"

# External object files for target 12_1
12_1_EXTERNAL_OBJECTS =

12_1.exe: CMakeFiles/12_1.dir/main.cpp.obj
12_1.exe: CMakeFiles/12_1.dir/Str.cpp.obj
12_1.exe: CMakeFiles/12_1.dir/build.make
12_1.exe: CMakeFiles/12_1.dir/linklibs.rsp
12_1.exe: CMakeFiles/12_1.dir/objects1.rsp
12_1.exe: CMakeFiles/12_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Q\CLionProjects\12-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 12_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\12_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12_1.dir/build: 12_1.exe

.PHONY : CMakeFiles/12_1.dir/build

CMakeFiles/12_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\12_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/12_1.dir/clean

CMakeFiles/12_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Q\CLionProjects\12-1 C:\Users\Q\CLionProjects\12-1 C:\Users\Q\CLionProjects\12-1\cmake-build-debug C:\Users\Q\CLionProjects\12-1\cmake-build-debug C:\Users\Q\CLionProjects\12-1\cmake-build-debug\CMakeFiles\12_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/12_1.dir/depend

