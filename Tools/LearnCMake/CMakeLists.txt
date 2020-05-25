cmake_minimum_required(VERSION 3.16)

# Set User Variables

set(USER_PROJECT "LearnCMake")

# END

project(${USER_PROJECT})
add_executable(${USER_PROJECT} main.cpp)

# Lib
add_subdirectory(lib)
target_link_libraries(${USER_PROJECT} PRIVATE foo bar)

# ! IMPORTANT, Put all your ThirdParty library includes after this line (files
# which you do not want formatted)

add_custom_target(
  run
  DEPENDS ${USER_PROJECT}
  COMMAND ${USER_PROJECT}.exe
  VERBATIM USES_TERMINAL)
