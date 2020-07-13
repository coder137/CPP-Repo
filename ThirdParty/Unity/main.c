#include <stdio.h>

#include "foo.h"

int main() {
  printf("Hello World\r\n");

  int square_10 = foo_square(10);
  printf("square_10: %d\r\n", square_10);
}
