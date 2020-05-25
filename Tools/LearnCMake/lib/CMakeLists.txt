add_library(bar STATIC bar/bar.cpp)
target_include_directories(bar PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/bar")

add_library(foo STATIC foo/foo.cpp)
target_include_directories(foo PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/foo")
