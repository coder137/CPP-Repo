add_executable(exampletest exampletest.cpp)
target_link_libraries(exampletest PRIVATE example gtest gtest_main)

add_test(NAME exampletest COMMAND exampletest)
