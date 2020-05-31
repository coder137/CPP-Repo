- [Google Flags](#google-flags)
- [Integrate with CMAKE](#integrate-with-cmake)
- [Usage](#usage)
  - [DEFINE variables](#define-variables)
  - [DECLARE variables](#declare-variables)
  - [Running executable](#running-executable)
    - [Example](#example)

# Google Flags

Command Line Flags (not arguments)
- [Complete Documentation](https://gflags.github.io/gflags/)

# Integrate with CMAKE

- Download the `gflags` repo and keep only the cmake and src based files
- In our case we have a `gflags` folder
- From our project root `CMakeLists.txt`
  - `add_subdirectory(gflags)`
  - `target_link_libraries(GoogleFlags PRIVATE gflags::gflags)`
- We can now `#include <gflag/gflag.h>` into our source files for the same
# Usage

## DEFINE variables

- DEFINE_bool: boolean
- DEFINE_int32: 32-bit integer
- DEFINE_int64: 64-bit integer
- DEFINE_uint64: unsigned 64-bit integer
- DEFINE_double: double
- DEFINE_string: C++ string

## DECLARE variables

- **DEFINE** a flag inside a `.cpp` file
- **DECLARE** the same flag in a different `.cpp` file to get a **reference** to it
- Use the same `FLAG_<key>` construct to get access to that variable

## Running executable

- For all `bool` keys run the executable using
  - `--<key>` for **true**
  - `--no<key>` for **false**
- For all non boolean keys run the executable using
  - `--<key>=<value>`

### Example

```bash
.\GoogleFlags.exe --nomenu --languages=English,Hindi,French
```
