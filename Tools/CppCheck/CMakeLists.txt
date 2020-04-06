cmake_minimum_required(VERSION 3.16)

# User Constant

set(USER_PROJECT "CppCheckExample")

set(USER_CPPCHECK_PATH "D:/Software/Cppcheck/cppcheck.exe")

# END

# CMAKE Constant

# Static Analysis with CppCheck
set(CMAKE_CXX_CPPCHECK "${USER_CPPCHECK_PATH};--enable=all;--inconclusive;--suppress=missingIncludeSystem;--error-exitcode=1")

# END


project(${USER_PROJECT})
add_executable(${USER_PROJECT} main.cpp)

# TODO, Make this for all files
add_custom_target(
  format ALL
  COMMAND clang-format.exe -i --verbose ${CMAKE_SOURCE_DIR}/main.cpp
  VERBATIM USES_TERMINAL)

add_custom_target(
  run
  DEPENDS ${USER_PROJECT} format
  COMMAND ${USER_PROJECT}.exe
  VERBATIM USES_TERMINAL)
