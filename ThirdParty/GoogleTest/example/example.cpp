#include "example.h"

#include <iostream>

void example_hello(void) { std::cout << __FUNCTION__ << " hello\n"; }

int example_return10(void) { return 10; }
float example_return10_1(void) { return 10.1; }
