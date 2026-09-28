# Sets the minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.10)

# Defines the project name and sets the language to C++ (CXX)
project(EmptyProject LANGUAGES CXX)

# Sets the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Creates an executable binary named "hello_run" from the main.cpp source file
add_executable(my_executable main.cpp)
