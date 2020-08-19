# BAR Library
add_library(bar bar.cpp)
target_include_directories(bar PUBLIC .)

# BAR MOCK Library
add_library(bar_mock INTERFACE)
target_include_directories(bar_mock INTERFACE . mock)
target_link_libraries(bar_mock INTERFACE gmock)

# BAR TEST Executable
add_executable(bar_test test/bar_test.cpp)
target_link_libraries(bar_test PRIVATE bar gtest gtest_main)

add_test(NAME bar_test COMMAND bar_test)
