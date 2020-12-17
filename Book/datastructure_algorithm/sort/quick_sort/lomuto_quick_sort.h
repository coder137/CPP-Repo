#ifndef LOMUTO_QUICK_SORT_H_
#define LOMUTO_QUICK_SORT_H_

#include <vector>

namespace lomuto {

int partition(std::vector<int> &unsorted_arr, int low, int high);
void quick_sort(std::vector<int> &unsorted_arr, int low, int high);

}; // namespace lomuto

#endif
