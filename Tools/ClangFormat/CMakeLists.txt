cmake_minimum_required(VERSION 3.16)

# Set User Variables

set(USER_PROJECT "ClangFormat")

# END

project(${USER_PROJECT})
add_executable(${USER_PROJECT} main.cpp)

# Lib
target_sources(${USER_PROJECT} PUBLIC lib/foo/foo.cpp lib/bar/bar.cpp)
target_include_directories(${USER_PROJECT} PUBLIC lib/foo lib/bar)

# IMP, Put this function call after your user defined source and include
# directories since it formats all the files
include(cmake/format.cmake)
formatsourcelist(${USER_PROJECT})

# ! IMPORTANT, Put all your ThirdParty library includes after this line (files
# which you do not want formatted)

add_custom_target(
  run
  DEPENDS ${USER_PROJECT} format
  COMMAND ${USER_PROJECT}.exe
  VERBATIM USES_TERMINAL)
