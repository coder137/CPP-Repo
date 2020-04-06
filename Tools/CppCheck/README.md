- [cppcheck](#cppcheck)
  - [What does it check](#what-does-it-check)
  - [Integration with CMake](#integration-with-cmake)

# cppcheck

- [cppcheck website](http://cppcheck.sourceforge.net/)
- [Integration with CMake](https://gitlab.kitware.com/cmake/cmake/commit/3b80cd77fb3e1d0ee6a77a590830e7dc620df1a5)

## What does it check

- Undefined behaviour
- Dead pointers
- Division by zero
- Integer overflows
- Invalid bit shift operands
- Invalid conversions
- Invalid usage of STL
- Memory management
- Null pointer dereferences
- Out of bounds checking
- Uninitialized variables
- Writing const data

## Integration with CMake

```cmake
# Set your path
set(USER_CPPCHECK_PATH "D:/Software/Cppcheck/cppcheck.exe")

# Set the Variable that defines behaviour
set(CMAKE_CXX_CPPCHECK "${USER_CPPCHECK_PATH};--enable=all;--inconclusive;--suppress=missingIncludeSystem;--error-exitcode=1")
```

- `--error-exitcode` flag is used to stop the build process if errors are detected
- `--supress=missingIncludeSystem` is to remove unnecessary include errors (incase the system cannot detect your compiler libraries)
- `--enable=all` and `--inconclusive` gives checks
