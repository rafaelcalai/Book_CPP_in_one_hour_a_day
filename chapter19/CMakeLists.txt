cmake_minimum_required(VERSION 3.25)
project(chapter19)

set(EXECUTABLE_OUTPUT1 Exercise1)
set(EXECUTABLE_OUTPUT2 Exercise2)
set(EXECUTABLE_OUTPUT3 Exercise3)

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE_OUTPUT1} exercise1.cpp)
add_executable(${EXECUTABLE_OUTPUT2} exercise2.cpp)
add_executable(${EXECUTABLE_OUTPUT3} exercise3.cpp)
