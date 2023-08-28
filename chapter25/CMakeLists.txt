cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME Chapter25)
set(EXECUTABLE1 Exercise1)
set(EXECUTABLE2 Exercise2)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE1} exercise1.cpp)
add_executable(${EXECUTABLE2} exercise2.cpp)
