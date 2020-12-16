cmake_minimum_required(VERSION 3.16)
project(sorting_algorithms)

# Merge sort
add_library(merge_sort merge_sort/merge_sort.cpp)
target_include_directories(merge_sort PUBLIC merge_sort)

add_executable(sort
  main.cpp
)
target_link_libraries(sort
  merge_sort
)
