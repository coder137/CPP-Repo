add_library(example example.cpp)
target_include_directories(example PUBLIC .)

add_subdirectory(test)
