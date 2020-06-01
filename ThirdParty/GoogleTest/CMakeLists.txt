cmake_minimum_required(VERSION 3.16)

project(GTest)
enable_testing()

add_executable(GTest main.cpp)

add_subdirectory(googletest)
# target_link_libraries(GTest PRIVATE gtest gtest_main)
target_link_libraries(GTest PRIVATE example)

add_subdirectory(example)
