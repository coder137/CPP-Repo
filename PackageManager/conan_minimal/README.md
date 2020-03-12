# Conan Minimal

AIM: 

- [x] Build with CMake
- [x] Integrate with VSCode
  - Autocomplete
- [x] Adding new packages via CMake
- [x] Basic Conan Commands


# [Build with CMake](https://github.com/conan-io/cmake-conan)

- Using the VSCode CMake Extension by Microsoft

```bash
# Build using the Ninja generator
cmake -B _build -G Ninja

# Build the folder where your CMAKE Builds are present
cmake --build _build

# Run the program using the target that was created
cmake --build _build --target run -- -v
```

# Basic Conan Commands

```bash
conan search <package_name> -r=all
```

> TODO, Add more if required

# Adding Conan Package to CMAKE

- Added `CMAKE_TARGETS` to `conan_cmake_run` macro
- We can then add our conan-target to the project-target by using the `CONAN_PKG:<package_name>` tag
  - Added `docopt` and `spdlog` to the project
  - Added examples for both packages
