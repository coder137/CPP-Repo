cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(googletest)

project(GTest)
enable_testing()

add_executable(GTest main.cpp)

add_subdirectory(bar)
add_subdirectory(foo)
add_subdirectory(random)
