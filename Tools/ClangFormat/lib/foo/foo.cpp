#include "foo.h"

#include <iostream>

void vFoo() { std::cout << __FUNCTION__ << std::endl; }
int iFoo() {
  std::cout << __FUNCTION__ << std::endl;
  return 0;
}
