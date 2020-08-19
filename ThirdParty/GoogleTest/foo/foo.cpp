#include "foo.h"

#include <iostream>

namespace example {

int Foo::getInteger(int i) {
  int value = b_->getInt(i * 10);
  std::cout << value << std::endl;
  return value;
}

float Foo::getFloat(float f) { return f * 12.34; }

} // namespace example
