#include <iostream>

#include "lomuto_quick_sort.h"
#include "naive_quick_sort.h"

#include "insertion_sort.h"
#include "merge_sort.h"

static void print_vector(std::vector<int> &vect);

void merge_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  merge_sort(array);
  print_vector(array);
}

void naive_partition_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  int partition_index = naive::partition(array, 0, array.size() - 1);
  std::cout << "partition_index: " << partition_index << std::endl;
  print_vector(array);
}

void naive_quick_sort_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  naive::quick_sort(array, 0, array.size() - 1);
  print_vector(array);
}

void lomuto_partition_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  int partition_index = lomuto::partition(array, 0, array.size() - 1);
  std::cout << "partition_index: " << partition_index << std::endl;
  print_vector(array);
}

void lomuto_quick_sort_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  lomuto::quick_sort(array, 0, array.size() - 1);
  print_vector(array);
}

void insertion_sort_example() {
  std::cout << __FUNCTION__ << std::endl;
  std::vector<int> array = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  insertion_sort(array);
  print_vector(array);
}

int main() {
  merge_example();
  naive_partition_example();
  naive_quick_sort_example();
  lomuto_partition_example();
  lomuto_quick_sort_example();
  insertion_sort_example();

  return 0;
}

void print_vector(std::vector<int> &vect) {

  for (int v : vect) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}
