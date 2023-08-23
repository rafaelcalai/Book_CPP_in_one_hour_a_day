cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME chapter14)
set(EXECUTABLE1 Exercise1)
set(EXECUTABLE2 Exercise2)
set(EXECUTABLE3 Exercise3)
set(EXECUTABLE5 Exercise5)
set(EXECUTABLE6 Exercise6)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE1} Exercise1.cpp)
add_executable(${EXECUTABLE2} Exercise2.cpp)
add_executable(${EXECUTABLE3} Exercise3.cpp)
add_executable(${EXECUTABLE5} Exercise5.cpp)
add_executable(${EXECUTABLE6} Exercise6.cpp)

