# Foo Test and dependencies
add_executable(foo_test foo_test.c)
target_sources(foo_test PRIVATE ../foo.c)
target_include_directories(foo_test PRIVATE ../)
# Unity library
target_link_libraries(foo_test PRIVATE unity)

# Configure the test
add_test(NAME foo_test COMMAND foo_test)
