#include "insertion_sort.h"

void insertion_sort(std::vector<int> &unsorted_arr) {
  if (unsorted_arr.empty()) {
    return;
  }

  for (int i = 1; i < unsorted_arr.size(); i++) {
    int current = unsorted_arr[i];
    int j = i - 1;
    while (j >= 0 && unsorted_arr[j] > current) {
      unsorted_arr[j + 1] = unsorted_arr[j];
      j--;
    }
    unsorted_arr[j + 1] = current;
  }
}
