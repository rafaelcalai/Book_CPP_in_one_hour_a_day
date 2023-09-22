cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME chapter26)
set(EXECUTABLE_OUTPUT_NAME exercise2)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE_OUTPUT_NAME} exercise2.cpp)
