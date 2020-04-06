#include <iostream>

int main() {
  std::cout << "Hello World" << std::endl;

  // ! These cause a cppcheck error
  // int i = 1 / 0;

  // int arr[10] = {0};
  // arr[10] = 12;

  return 0;
}
