# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bastia/Desktop/laboratorio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bastia/Desktop/laboratorio

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/opt/homebrew/Cellar/cmake/3.25.0/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/opt/homebrew/Cellar/cmake/3.25.0/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/bastia/Desktop/laboratorio/CMakeFiles /Users/bastia/Desktop/laboratorio//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/bastia/Desktop/laboratorio/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named progetto

# Build rule for target.
progetto: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 progetto
.PHONY : progetto

# fast build rule for target.
progetto/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/build
.PHONY : progetto/fast

src/Book.o: src/Book.cpp.o
.PHONY : src/Book.o

# target to build an object file
src/Book.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Book.cpp.o
.PHONY : src/Book.cpp.o

src/Book.i: src/Book.cpp.i
.PHONY : src/Book.i

# target to preprocess a source file
src/Book.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Book.cpp.i
.PHONY : src/Book.cpp.i

src/Book.s: src/Book.cpp.s
.PHONY : src/Book.s

# target to generate assembly for a file
src/Book.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Book.cpp.s
.PHONY : src/Book.cpp.s

src/Date.o: src/Date.cpp.o
.PHONY : src/Date.o

# target to build an object file
src/Date.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Date.cpp.o
.PHONY : src/Date.cpp.o

src/Date.i: src/Date.cpp.i
.PHONY : src/Date.i

# target to preprocess a source file
src/Date.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Date.cpp.i
.PHONY : src/Date.cpp.i

src/Date.s: src/Date.cpp.s
.PHONY : src/Date.s

# target to generate assembly for a file
src/Date.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/Date.cpp.s
.PHONY : src/Date.cpp.s

src/DateControl.o: src/DateControl.cpp.o
.PHONY : src/DateControl.o

# target to build an object file
src/DateControl.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/DateControl.cpp.o
.PHONY : src/DateControl.cpp.o

src/DateControl.i: src/DateControl.cpp.i
.PHONY : src/DateControl.i

# target to preprocess a source file
src/DateControl.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/DateControl.cpp.i
.PHONY : src/DateControl.cpp.i

src/DateControl.s: src/DateControl.cpp.s
.PHONY : src/DateControl.s

# target to generate assembly for a file
src/DateControl.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/DateControl.cpp.s
.PHONY : src/DateControl.cpp.s

src/controlISBN.o: src/controlISBN.cpp.o
.PHONY : src/controlISBN.o

# target to build an object file
src/controlISBN.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/controlISBN.cpp.o
.PHONY : src/controlISBN.cpp.o

src/controlISBN.i: src/controlISBN.cpp.i
.PHONY : src/controlISBN.i

# target to preprocess a source file
src/controlISBN.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/controlISBN.cpp.i
.PHONY : src/controlISBN.cpp.i

src/controlISBN.s: src/controlISBN.cpp.s
.PHONY : src/controlISBN.s

# target to generate assembly for a file
src/controlISBN.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/controlISBN.cpp.s
.PHONY : src/controlISBN.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/progetto.dir/build.make CMakeFiles/progetto.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... progetto"
	@echo "... src/Book.o"
	@echo "... src/Book.i"
	@echo "... src/Book.s"
	@echo "... src/Date.o"
	@echo "... src/Date.i"
	@echo "... src/Date.s"
	@echo "... src/DateControl.o"
	@echo "... src/DateControl.i"
	@echo "... src/DateControl.s"
	@echo "... src/controlISBN.o"
	@echo "... src/controlISBN.i"
	@echo "... src/controlISBN.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
