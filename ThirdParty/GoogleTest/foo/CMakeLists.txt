add_library(foo foo.cpp)
target_include_directories(foo PUBLIC .)
target_link_libraries(foo PUBLIC bar)

add_executable(foo_test test/foo_test.cpp)
target_link_libraries(foo_test PRIVATE foo bar_mock gtest gtest_main gmock gmock_main)

add_test(NAME foo_test COMMAND foo_test)
