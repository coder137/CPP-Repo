add_library(random random.cpp)
target_include_directories(random PUBLIC .)
target_link_libraries(random PUBLIC foo)

# Tests
add_executable(random_test test/random_test.cpp)
target_link_libraries(random_test PRIVATE random gtest gtest_main gmock gmock_main)

add_test(NAME random_test COMMAND random_test)
