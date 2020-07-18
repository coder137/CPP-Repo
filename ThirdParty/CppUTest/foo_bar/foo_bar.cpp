#include "foo_bar.h"

#include <iostream>

#include "foo.h"

namespace foo_bar {

void call_foo_within() {
  std::cout << "Hello -> " << __FUNCTION__ << "\n";
  std::cout << "foo::floatingPoint" << foo::floatingPoint() << "\n";
}

int call_foo_within_and_return_integer() {
  return foo::integer();
}

}; // namespace foo_bar
