cmake_minimum_required(VERSION 3.25)

set(PROJECT_NAME chapter21)
set(EXECUTABLE_EXERCISE1 exercise1)
set(EXECUTABLE_EXERCISE2 exercise2)
set(EXECUTABLE_EXERCISE3 exercise3)

project($PROJECT_NAME)

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE_EXERCISE1} exercise1.cpp)
add_executable(${EXECUTABLE_EXERCISE2} exercise2.cpp)
add_executable(${EXECUTABLE_EXERCISE3} exercise3.cpp)
