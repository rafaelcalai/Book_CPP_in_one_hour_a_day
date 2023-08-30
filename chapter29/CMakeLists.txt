cmake_minimum_required(VERSION 3.25)
set(PROJECT_NAME Chapter29)
set(EXECUTABLE Exercise3)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE} exercise3.cpp)
