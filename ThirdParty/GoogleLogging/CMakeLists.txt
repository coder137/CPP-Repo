cmake_minimum_required(VERSION 3.16)

project(GoogleLogging)
add_executable(GoogleLogging main.cpp)

set(gflags_DIR "gflags/")

message("cmake_prefix_path: ${CMAKE_PREFIX_PATH}")

# add_subdirectory(gflags)
add_subdirectory(glog)
target_link_libraries(GoogleLogging PRIVATE glog::glog)
