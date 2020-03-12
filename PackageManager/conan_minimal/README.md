# Conan Minimal

AIM: 

- [x] Build with CMake
- [x] Integrate with VSCode
  - Autocomplete
- [ ] Adding new packages via CMake
- [ ] Basic Conan Commands


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

# Conan Commands

```bash
conan search <package_name> -r=all
```
