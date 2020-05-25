#include "bar.h"

#include <iostream>

void vBar() { std::cout << __FUNCTION__ << std::endl; }

int iBar() {
  std::cout << __FUNCTION__ << std::endl;
  return 0;
}
