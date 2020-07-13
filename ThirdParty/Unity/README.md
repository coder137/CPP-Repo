- [Unity Example](#unity-example)
- [Install Unity in CMake](#install-unity-in-cmake)
- [Add Test](#add-test)
  - [Writing your test_*.c file](#writing-your-test_c-file)
- [Build Project](#build-project)
- [Run Test](#run-test)

# Unity Example

A Unit-Testing Framework for C Programming (especially Embedded Systems)

- [Unity Website](http://www.throwtheswitch.org/unity)

# Install Unity in CMake

- Extract **Unity-2.5.1.zip**
- In your root level CMakeLists.txt add `add_subdirectory(Unity-2.5.1)`
- This will create a `libunity.a` or the `unity` library that can be added to the test
  - `target_link_libraries(<test_target> PRIVATE unity)`

# Add Test

- In this example `src` is added as its own subdirectory project
- The test folder adds `foo_test.c` as its primary C source file
- Dependencies are added after that `foo.c` and `foo.h`
- Library dependency is added `target_link_directories(<test_target> PRIVATE unity)`

## Writing your test_*.c file

```c
#include "unity.h"

#include "dependencies"

// Runs before a test
void setUp(void) {}

// Runs after the test
void tearDown(void) {}

// Should return void and take no arguments
void test_your_test_name(void) {}

void test_your_other_tests(void) {}

int main() {
  // Start Unity MACRO
  UNITY_BEGIN();

  // Attach your tests here
  RUN_TEST(test_your_test_name);
  RUN_TEST(test_your_other_tests);

  // Return error code on failure
  return UNITY_END();
}
```

# Build Project

```cmake
cmake --build build --config Debug --target all -- -j 10
```

# Run Test

- Always compile your project before running CTest

**From the build folder**

```cmake
ctest -j10 -C Debug -T test --output-on-failure
```
