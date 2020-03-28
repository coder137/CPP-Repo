cmake_minimum_required(VERSION 3.16)

project(ClangFormat)
add_executable(ClangFormat main.cpp)

add_custom_target(
  format ALL
  COMMAND clang-format.exe -i --verbose ${CMAKE_SOURCE_DIR}/main.cpp
  VERBATIM USES_TERMINAL)

add_custom_target(
  run
  DEPENDS ClangFormat format
  COMMAND ClangFormat.exe
  VERBATIM USES_TERMINAL)
