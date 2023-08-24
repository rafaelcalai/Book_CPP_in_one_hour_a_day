cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME chapter16)
set(EXECUTABLE1 Exercise_1)
set(EXECUTABLE2 Exercise_2)
set(EXECUTABLE3 Exercise_3)
set(EXECUTABLE4 Exercise_4)
set(EXECUTABLE5 Exercise_5)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE1} Exercise1.cpp)
add_executable(${EXECUTABLE2} Exercise2.cpp)
add_executable(${EXECUTABLE3} Exercise3.cpp)
add_executable(${EXECUTABLE4} Exercise4.cpp)
add_executable(${EXECUTABLE5} Exercise5.cpp)
