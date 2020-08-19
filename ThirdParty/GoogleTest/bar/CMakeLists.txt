# BAR Library
add_library(bar bar.cpp)
target_include_directories(bar PUBLIC .)

# BAR TEST Executable
add_executable(bar_test test/bar_test.cpp)
target_link_libraries(bar_test PRIVATE bar gtest gtest_main)

add_test(NAME bar_test COMMAND bar_test)
