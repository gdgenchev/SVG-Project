# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\georg\Desktop\C++ Projects\SVG-Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SVG_project_FMI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SVG_project_FMI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SVG_project_FMI.dir/flags.make

CMakeFiles/SVG_project_FMI.dir/main.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SVG_project_FMI.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\main.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\main.cpp"

CMakeFiles/SVG_project_FMI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\main.cpp" > CMakeFiles\SVG_project_FMI.dir\main.cpp.i

CMakeFiles/SVG_project_FMI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\main.cpp" -o CMakeFiles\SVG_project_FMI.dir\main.cpp.s

CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/main.cpp.obj


CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj: ../Rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\Rectangle.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Rectangle.cpp"

CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Rectangle.cpp" > CMakeFiles\SVG_project_FMI.dir\Rectangle.cpp.i

CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Rectangle.cpp" -o CMakeFiles\SVG_project_FMI.dir\Rectangle.cpp.s

CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj


CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj: ../Figure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\Figure.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Figure.cpp"

CMakeFiles/SVG_project_FMI.dir/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/Figure.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Figure.cpp" > CMakeFiles\SVG_project_FMI.dir\Figure.cpp.i

CMakeFiles/SVG_project_FMI.dir/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/Figure.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Figure.cpp" -o CMakeFiles\SVG_project_FMI.dir\Figure.cpp.s

CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj


CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj: ../Circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\Circle.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Circle.cpp"

CMakeFiles/SVG_project_FMI.dir/Circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/Circle.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Circle.cpp" > CMakeFiles\SVG_project_FMI.dir\Circle.cpp.i

CMakeFiles/SVG_project_FMI.dir/Circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/Circle.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Circle.cpp" -o CMakeFiles\SVG_project_FMI.dir\Circle.cpp.s

CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj


CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj: ../Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\Line.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Line.cpp"

CMakeFiles/SVG_project_FMI.dir/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/Line.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Line.cpp" > CMakeFiles\SVG_project_FMI.dir\Line.cpp.i

CMakeFiles/SVG_project_FMI.dir/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/Line.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\Line.cpp" -o CMakeFiles\SVG_project_FMI.dir\Line.cpp.s

CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj


CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj: CMakeFiles/SVG_project_FMI.dir/flags.make
CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj: ../FigureCollection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SVG_project_FMI.dir\FigureCollection.cpp.obj -c "C:\Users\georg\Desktop\C++ Projects\SVG-Project\FigureCollection.cpp"

CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\C++ Projects\SVG-Project\FigureCollection.cpp" > CMakeFiles\SVG_project_FMI.dir\FigureCollection.cpp.i

CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\C++ Projects\SVG-Project\FigureCollection.cpp" -o CMakeFiles\SVG_project_FMI.dir\FigureCollection.cpp.s

CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.requires:

.PHONY : CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.requires

CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.provides: CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.requires
	$(MAKE) -f CMakeFiles\SVG_project_FMI.dir\build.make CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.provides.build
.PHONY : CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.provides

CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.provides.build: CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj


# Object files for target SVG_project_FMI
SVG_project_FMI_OBJECTS = \
"CMakeFiles/SVG_project_FMI.dir/main.cpp.obj" \
"CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj" \
"CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj" \
"CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj" \
"CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj" \
"CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj"

# External object files for target SVG_project_FMI
SVG_project_FMI_EXTERNAL_OBJECTS =

SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/main.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/build.make
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/linklibs.rsp
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/objects1.rsp
SVG_project_FMI.exe: CMakeFiles/SVG_project_FMI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable SVG_project_FMI.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SVG_project_FMI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SVG_project_FMI.dir/build: SVG_project_FMI.exe

.PHONY : CMakeFiles/SVG_project_FMI.dir/build

CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/main.cpp.obj.requires
CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/Rectangle.cpp.obj.requires
CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/Figure.cpp.obj.requires
CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/Circle.cpp.obj.requires
CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/Line.cpp.obj.requires
CMakeFiles/SVG_project_FMI.dir/requires: CMakeFiles/SVG_project_FMI.dir/FigureCollection.cpp.obj.requires

.PHONY : CMakeFiles/SVG_project_FMI.dir/requires

CMakeFiles/SVG_project_FMI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SVG_project_FMI.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SVG_project_FMI.dir/clean

CMakeFiles/SVG_project_FMI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\georg\Desktop\C++ Projects\SVG-Project" "C:\Users\georg\Desktop\C++ Projects\SVG-Project" "C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug" "C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug" "C:\Users\georg\Desktop\C++ Projects\SVG-Project\cmake-build-debug\CMakeFiles\SVG_project_FMI.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SVG_project_FMI.dir/depend

