# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/harryhill/Documents/01_code/c_chess_engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/harryhill/Documents/01_code/c_chess_engine/build

# Include any dependencies generated for this target.
include CMakeFiles/my_executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_executable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_executable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_executable.dir/flags.make

CMakeFiles/my_executable.dir/src/constants.c.o: CMakeFiles/my_executable.dir/flags.make
CMakeFiles/my_executable.dir/src/constants.c.o: /Users/harryhill/Documents/01_code/c_chess_engine/src/constants.c
CMakeFiles/my_executable.dir/src/constants.c.o: CMakeFiles/my_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/my_executable.dir/src/constants.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_executable.dir/src/constants.c.o -MF CMakeFiles/my_executable.dir/src/constants.c.o.d -o CMakeFiles/my_executable.dir/src/constants.c.o -c /Users/harryhill/Documents/01_code/c_chess_engine/src/constants.c

CMakeFiles/my_executable.dir/src/constants.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/my_executable.dir/src/constants.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/harryhill/Documents/01_code/c_chess_engine/src/constants.c > CMakeFiles/my_executable.dir/src/constants.c.i

CMakeFiles/my_executable.dir/src/constants.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/my_executable.dir/src/constants.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/harryhill/Documents/01_code/c_chess_engine/src/constants.c -o CMakeFiles/my_executable.dir/src/constants.c.s

CMakeFiles/my_executable.dir/src/main.c.o: CMakeFiles/my_executable.dir/flags.make
CMakeFiles/my_executable.dir/src/main.c.o: /Users/harryhill/Documents/01_code/c_chess_engine/src/main.c
CMakeFiles/my_executable.dir/src/main.c.o: CMakeFiles/my_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/my_executable.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_executable.dir/src/main.c.o -MF CMakeFiles/my_executable.dir/src/main.c.o.d -o CMakeFiles/my_executable.dir/src/main.c.o -c /Users/harryhill/Documents/01_code/c_chess_engine/src/main.c

CMakeFiles/my_executable.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/my_executable.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/harryhill/Documents/01_code/c_chess_engine/src/main.c > CMakeFiles/my_executable.dir/src/main.c.i

CMakeFiles/my_executable.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/my_executable.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/harryhill/Documents/01_code/c_chess_engine/src/main.c -o CMakeFiles/my_executable.dir/src/main.c.s

CMakeFiles/my_executable.dir/src/numc.c.o: CMakeFiles/my_executable.dir/flags.make
CMakeFiles/my_executable.dir/src/numc.c.o: /Users/harryhill/Documents/01_code/c_chess_engine/src/numc.c
CMakeFiles/my_executable.dir/src/numc.c.o: CMakeFiles/my_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/my_executable.dir/src/numc.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_executable.dir/src/numc.c.o -MF CMakeFiles/my_executable.dir/src/numc.c.o.d -o CMakeFiles/my_executable.dir/src/numc.c.o -c /Users/harryhill/Documents/01_code/c_chess_engine/src/numc.c

CMakeFiles/my_executable.dir/src/numc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/my_executable.dir/src/numc.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/harryhill/Documents/01_code/c_chess_engine/src/numc.c > CMakeFiles/my_executable.dir/src/numc.c.i

CMakeFiles/my_executable.dir/src/numc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/my_executable.dir/src/numc.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/harryhill/Documents/01_code/c_chess_engine/src/numc.c -o CMakeFiles/my_executable.dir/src/numc.c.s

CMakeFiles/my_executable.dir/src/pawn_attacks.c.o: CMakeFiles/my_executable.dir/flags.make
CMakeFiles/my_executable.dir/src/pawn_attacks.c.o: /Users/harryhill/Documents/01_code/c_chess_engine/src/pawn_attacks.c
CMakeFiles/my_executable.dir/src/pawn_attacks.c.o: CMakeFiles/my_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/my_executable.dir/src/pawn_attacks.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_executable.dir/src/pawn_attacks.c.o -MF CMakeFiles/my_executable.dir/src/pawn_attacks.c.o.d -o CMakeFiles/my_executable.dir/src/pawn_attacks.c.o -c /Users/harryhill/Documents/01_code/c_chess_engine/src/pawn_attacks.c

CMakeFiles/my_executable.dir/src/pawn_attacks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/my_executable.dir/src/pawn_attacks.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/harryhill/Documents/01_code/c_chess_engine/src/pawn_attacks.c > CMakeFiles/my_executable.dir/src/pawn_attacks.c.i

CMakeFiles/my_executable.dir/src/pawn_attacks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/my_executable.dir/src/pawn_attacks.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/harryhill/Documents/01_code/c_chess_engine/src/pawn_attacks.c -o CMakeFiles/my_executable.dir/src/pawn_attacks.c.s

CMakeFiles/my_executable.dir/src/utils.c.o: CMakeFiles/my_executable.dir/flags.make
CMakeFiles/my_executable.dir/src/utils.c.o: /Users/harryhill/Documents/01_code/c_chess_engine/src/utils.c
CMakeFiles/my_executable.dir/src/utils.c.o: CMakeFiles/my_executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/my_executable.dir/src/utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/my_executable.dir/src/utils.c.o -MF CMakeFiles/my_executable.dir/src/utils.c.o.d -o CMakeFiles/my_executable.dir/src/utils.c.o -c /Users/harryhill/Documents/01_code/c_chess_engine/src/utils.c

CMakeFiles/my_executable.dir/src/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/my_executable.dir/src/utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/harryhill/Documents/01_code/c_chess_engine/src/utils.c > CMakeFiles/my_executable.dir/src/utils.c.i

CMakeFiles/my_executable.dir/src/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/my_executable.dir/src/utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/harryhill/Documents/01_code/c_chess_engine/src/utils.c -o CMakeFiles/my_executable.dir/src/utils.c.s

# Object files for target my_executable
my_executable_OBJECTS = \
"CMakeFiles/my_executable.dir/src/constants.c.o" \
"CMakeFiles/my_executable.dir/src/main.c.o" \
"CMakeFiles/my_executable.dir/src/numc.c.o" \
"CMakeFiles/my_executable.dir/src/pawn_attacks.c.o" \
"CMakeFiles/my_executable.dir/src/utils.c.o"

# External object files for target my_executable
my_executable_EXTERNAL_OBJECTS =

my_executable: CMakeFiles/my_executable.dir/src/constants.c.o
my_executable: CMakeFiles/my_executable.dir/src/main.c.o
my_executable: CMakeFiles/my_executable.dir/src/numc.c.o
my_executable: CMakeFiles/my_executable.dir/src/pawn_attacks.c.o
my_executable: CMakeFiles/my_executable.dir/src/utils.c.o
my_executable: CMakeFiles/my_executable.dir/build.make
my_executable: CMakeFiles/my_executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable my_executable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_executable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_executable.dir/build: my_executable
.PHONY : CMakeFiles/my_executable.dir/build

CMakeFiles/my_executable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_executable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_executable.dir/clean

CMakeFiles/my_executable.dir/depend:
	cd /Users/harryhill/Documents/01_code/c_chess_engine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/harryhill/Documents/01_code/c_chess_engine /Users/harryhill/Documents/01_code/c_chess_engine /Users/harryhill/Documents/01_code/c_chess_engine/build /Users/harryhill/Documents/01_code/c_chess_engine/build /Users/harryhill/Documents/01_code/c_chess_engine/build/CMakeFiles/my_executable.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/my_executable.dir/depend

