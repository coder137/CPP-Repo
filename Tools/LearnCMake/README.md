- [Learn CMake](#learn-cmake)
- [CMake Getting Started](#cmake-getting-started)
  - [`add_executable`](#add_executable)
  - [`add_library`](#add_library)
    - [STATIC Library](#static-library)
    - [SHARED Library](#shared-library)
  - [`add_subdirectory`](#add_subdirectory)
- [OLD](#old)
  - [Install via Package Manager](#install-via-package-manager)
  - [Install Manually](#install-manually)
  - [Getting the config file](#getting-the-config-file)
  - [Formatting the document](#formatting-the-document)
- [Format with VSCode](#format-with-vscode)

# Learn CMake

> Copied from ClangFormat project

# CMake Getting Started

## `add_executable`

- Add your source files to an executable for compilation
- Drawbacks
  - For a large C / CPP project cannot collect and add all the source files here
  - Need to add manually or as a list using the GLOB keyword (Bad practice generally)
  - Hence we need libraries

## `add_library`

- Creates a STATIC, SHARED or MODULE type library

### STATIC Library

- Added into the code during link time
- Helps to seperate the code
  - Code is compiled only once
  - Since it is included into the executable it increases the size of the binary file

### SHARED Library

- Adds a reference/requirement during link time
- Needs to be provided to the executable during runtime
- Helps to seperate the code
  - Code is compiled only once
  - Since it is not included into executable it decreases the size of the binary file


## `add_subdirectory`

- Used to make each folder an independent compute unit
- Each independent compilation unit will have its own `CMakeLists.txt` file

# OLD

Relevant related to getting the project running

## Install via Package Manager

```
choco install llvm
```

## Install Manually

> TODO,

## Getting the config file

```
clang-format --dump-config -style=LLVM > .clang-format
```

## Formatting the document

```
clang-format -i file1.cpp file2.cpp ...
```

# Format with VSCode

```json
{
  "C_Cpp.default.configurationProvider": "vector-of-bool.cmake-tools",
  "editor.formatOnSave": true,
  "files.insertFinalNewline": true
}
```

- Added `formatOnSave` that uses clang-format by default
- Added `insertFinalNewline` that conforms with git commits (to add a new line)
