cmake_minimum_required(VERSION 3.16)
project(sorting_algorithms)

add_subdirectory(insertion_sort)
add_subdirectory(merge_sort)
add_subdirectory(quick_sort)

add_executable(sort
  main.cpp
)
target_link_libraries(sort
  insertion_sort
  merge_sort
  quick_sort
)
