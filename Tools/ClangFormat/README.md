- [Clang Format](#clang-format)
  - [Install via Package Manager](#install-via-package-manager)
  - [Install Manually](#install-manually)
  - [Getting the config file](#getting-the-config-file)
  - [Formatting the document](#formatting-the-document)
- [Format with VSCode](#format-with-vscode)

# Clang Format

Getting Started with Clang Format

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
