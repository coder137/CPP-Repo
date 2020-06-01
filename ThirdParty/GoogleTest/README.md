- [Google Test](#google-test)
- [Integration with CMake](#integration-with-cmake)
- [Testing from command line](#testing-from-command-line)
- [Building googletests](#building-googletests)

# Google Test

- [Google Test Documentation](https://github.com/google/googletest/blob/master/googletest/docs/primer.md)
- [Google Test CMake Integration](https://www.youtube.com/watch?v=Lp1ifh9TuFI)


# Integration with CMake

- Add `googletest` using `add_subdirectory`
- Link the `target_link_libraries(<target> PRIVATE gtest gtest_main)`
  - Two targets `gtest` and `gtest_main` are created
- Example: Take a look at **example** directory
  - Tests are present inside the test folder
  - example folder `CMakeLists.txt`

# Testing from command line

```bash
# Builds the program in the build directory
cmake --build build

# --output-on-failure gives you the failure output (helpful during debugging)
ctest -T test --output-on-failure
```

# Building googletests

- Create a main executable with your `test.cpp` file
- main executable should contains **dependency sources**
  - In the Example folder the dependencies are example.cpp and example.h
- This can be added in 2 ways
  - Create an example library and link that to the test executable
  - Add the sources and include files manually to the test executable
