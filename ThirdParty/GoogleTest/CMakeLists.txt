cmake_minimum_required(VERSION 3.16)

add_subdirectory(googletest)

project(GTest)
enable_testing()

add_executable(GTest main.cpp)

add_subdirectory(bar)
add_subdirectory(foo)
