cmake_minimum_required(VERSION 3.16)

project(GoogleFlags)
add_executable(GoogleFlags main.cpp declare_example.cpp)
target_include_directories(GoogleFlags PRIVATE .)

add_subdirectory(gflags)
target_link_libraries(GoogleFlags PRIVATE gflags::gflags)
