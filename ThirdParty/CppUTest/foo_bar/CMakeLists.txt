target_sources(cpputest_example PRIVATE foo_bar.cpp)
target_include_directories(cpputest_example PRIVATE .)

# [TEST] [MOCK] foo_bar_test
add_executable(foo_bar_test test/foo_bar_test.cpp)
target_sources(foo_bar_test PRIVATE foo_bar.cpp ../foo/foo.cpp)
target_include_directories(foo_bar_test PRIVATE . ../foo)
target_link_libraries(foo_bar_test PRIVATE CppUTest CppUTestExt)
add_test(NAME foo_bar_test COMMAND foo_bar_test)
