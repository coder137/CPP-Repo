- [Google Logging](#google-logging)
- [Integrate with CMake](#integrate-with-cmake)
- [Integrate GFLAG with CMake](#integrate-gflag-with-cmake)
- [Usage](#usage)
  - [Pre-requisites](#pre-requisites)
  - [Logging to Stderr](#logging-to-stderr)
  - [Logging to Files](#logging-to-files)
  - [Logging Errors (Stack Trace)](#logging-errors-stack-trace)

# Google Logging

[Glog Documentation](http://rpg.ifi.uzh.ch/docs/glog.html)

# Integrate with CMake

- Download the `glog` repo and keep the cmake and src based files
- In our root `CMakeLists.txt`
  - `add_subdirectory(glog)`
  - `target_link_libraries(GoogleLogging PRIVATE glog::glog)`
- We can now include the `<glog/logging.h>` into our source files for the same

# Integrate GFLAG with CMake

Currently, `option(WITH_GFLAGS "Use gflags" OFF)` has been set **OFF**

> TODO, Need to Install GFlag for certain Glog features to be activated

# Usage

- `LOG(INFO)`
- `LOG(WARNING)`
- `LOG(ERROR)`
- `LOG(FATAL)`
  - Calls Failure function incase `google::InstallFailureFunction(&failure_function)` has been attached

## Pre-requisites

- Should call `google::InitGoogleLogging(argv[0])` before `LOG` functions are used

## Logging to Stderr

- Set the `FLAG_logtostderr = true` programmatically
- If **GFlag** is not installed we cannot use command line arguments

## Logging to Files

- Set the output directory with `FLAG_output_dir = "."` to set the binary directory for log output

## Logging Errors (Stack Trace)

- `google::InstallFailureSignalHandler()` gives the stack dump output
