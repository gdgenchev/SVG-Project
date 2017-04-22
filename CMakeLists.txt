cmake_minimum_required(VERSION 3.6)
project(SVG_project_FMI)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Rectangle.cpp Rectangle.h Figure.cpp Figure.h)
add_executable(SVG_project_FMI ${SOURCE_FILES})