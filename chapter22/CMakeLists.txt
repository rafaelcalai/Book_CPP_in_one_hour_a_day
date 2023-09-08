cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME Chapter_22)
set(EXECUTABLE1 exercise1)
set(EXECUTABLE2 exercise2)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE1} Exercise1.cpp)
