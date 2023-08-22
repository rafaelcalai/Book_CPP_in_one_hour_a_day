cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME chapter12)
set(EXERCISE1 Exercise1)
set(EXERCISE2 Exercise2)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXERCISE1} Exercise1.cpp)
add_executable(${EXERCISE2} Exercise2.cpp)
