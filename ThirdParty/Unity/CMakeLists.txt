cmake_minimum_required(VERSION 3.16.0)

set(USER_PROJECT_NAME "Unity_Example")

project(${USER_PROJECT_NAME} VERSION 0.1.0)

# Generate the static library
add_subdirectory(Unity-2.5.1)

# Enable Testing
include(CTest)
enable_testing()

# Add your main executable program
add_executable(${USER_PROJECT_NAME} main.c)
add_subdirectory(src)
