cmake_minimum_required(VERSION 3.16.0)
project(cpputest_example VERSION 0.1.0)

include(CTest)
enable_testing()

# ~~~
# NOTE, Set these variables in the cpputest CMakeLists.txt file
# set(LONGLONG ON)
# set(WERROR ON)
# set(TESTS OFF)
# set(TESTS_BUILD_DISCOVER OFF)
# ~~~
add_subdirectory(cpputest-4.0)

add_executable(cpputest_example main.cpp)
add_subdirectory(foo)
