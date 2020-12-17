#ifndef NAIVE_QUICK_SORT_H_
#define NAIVE_QUICK_SORT_H_

#include <vector>

namespace naive {

int partition(std::vector<int> &unsorted_arr, int low, int high);
void quick_sort(std::vector<int> &unsorted_arr, int low, int high);

}; // namespace naive

#endif
