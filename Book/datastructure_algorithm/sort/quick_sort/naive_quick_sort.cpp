#include "naive_quick_sort.h"

#include <iostream>

namespace naive {

int partition(std::vector<int> &unsorted_arr, int low, int high) {
  std::vector<int> v(high - low + 1);
  int partition_value = unsorted_arr[high];

  int index = 0;
  for (int i = low; i <= high; i++) {
    if (unsorted_arr[i] <= partition_value) {
      v[index] = unsorted_arr[i];
      index++;
    }
  }

  int partition_index = index - 1;

  for (int i = low; i <= high; i++) {
    if (unsorted_arr[i] > partition_value) {
      v[index] = unsorted_arr[i];
      index++;
    }
  }

  index = 0;
  for (int i = low; i <= high; i++) {
    unsorted_arr[i] = v[index];
    index++;
  }

  return partition_index;
}

void quick_sort(std::vector<int> &unsorted_arr, int low, int high) {
  if (low < high) {
    int partition_index = partition(unsorted_arr, low, high);
    quick_sort(unsorted_arr, low, partition_index - 1);
    quick_sort(unsorted_arr, partition_index + 1, high);
  }
}

}; // namespace naive
