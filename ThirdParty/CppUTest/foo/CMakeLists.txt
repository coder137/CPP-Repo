# Main Target for cpputest_example
target_sources(cpputest_example PRIVATE foo.cpp)
target_include_directories(cpputest_example PRIVATE .)

# [TEST] foo_test executable
add_executable(foo_test test/foo_test.cpp)
target_sources(foo_test PRIVATE foo.cpp)
target_include_directories(foo_test PRIVATE .)
target_link_libraries(foo_test PRIVATE CppUTest CppUTestExt)
add_test(NAME foo_test COMMAND foo_test)
