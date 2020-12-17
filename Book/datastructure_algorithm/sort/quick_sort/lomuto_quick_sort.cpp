#include "lomuto_quick_sort.h"

namespace lomuto {

int partition(std::vector<int> &unsorted_arr, int low, int high) {
  int partition_value = unsorted_arr[high];
  int slow_index = low;
  for (int i = low; i <= high; i++) {
    if (unsorted_arr[i] < partition_value) {
      std::swap(unsorted_arr[slow_index], unsorted_arr[i]);
      slow_index++;
    }
  }

  std::swap(unsorted_arr[slow_index], unsorted_arr[high]);
  return slow_index;
}

void quick_sort(std::vector<int> &unsorted_arr, int low, int high) {
  if (low < high) {
    int partition_index = partition(unsorted_arr, low, high);

    quick_sort(unsorted_arr, low, partition_index - 1);
    quick_sort(unsorted_arr, partition_index + 1, high);
  }
}

}; // namespace lomuto
