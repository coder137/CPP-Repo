#include "declare_example.h"

#include <gflags/gflags.h>
#include <iostream>

DEFINE_bool(verbose, true, "Verbose flag controls the debugging output");

void declare_example_usage(void) {
  if (FLAGS_verbose) {
    std::cout << __FUNCTION__ << " hello\n";
  }
}
