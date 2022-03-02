#include <iostream>

extern "C" {
#include "driver.h"
}

int main(int argc, char **argv) {
  std::cout << "Hello, world!\n";
  driver__start_test();
  return 0;
}
