cmake_minimum_required(VERSION 3.0.0)
project(c_in_cpp_example)

add_executable(c_in_cpp_example 
  main.cpp
)
target_sources(c_in_cpp_example PRIVATE
  c_src/driver.c
)
target_include_directories(c_in_cpp_example PRIVATE 
  c_src
)
