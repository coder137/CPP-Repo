#include <iostream>

#include "merge_sort.h"

static void print_vector(std::vector<int> &vect);

int main() {
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  merge_sort(array);
  print_vector(array);
}

void print_vector(std::vector<int> &vect) {

  for (int v : vect) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}
