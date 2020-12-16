/**
 * Date: 21.11.2019
 *
 * Merge Sort with Psuedocode
 * https://www.youtube.com/watch?v=TzeBrDU-JaY
 */
#include "merge_sort.h"

void merge_two_sorted_arr(const std::vector<int> &vect1,
                          const std::vector<int> &vect2,
                          std::vector<int> &final_vect);

void merge_sort(std::vector<int> &unsorted_arr) {
  // Create a new vector that is half od the unsorted_arr
  int len = unsorted_arr.size();
  if (len < 2) {
    return;
  }

  // 7 -> 3
  int mid = len / 2;

  // 3
  std::vector<int> left(mid);
  for (int i = 0; i < mid; i++) {
    left[i] = unsorted_arr[i];
  }

  // 7-3 -> 4
  std::vector<int> right(len - mid);
  for (int i = mid; i < len; i++) {
    right[i - mid] = unsorted_arr[i];
  }

  // Recursive calls
  merge_sort(left);
  merge_sort(right);
  merge_two_sorted_arr(left, right, unsorted_arr);
}

void merge_two_sorted_arr(const std::vector<int> &vect1,
                          const std::vector<int> &vect2,
                          std::vector<int> &final_vect) {
  int p1, p2, f;
  p1 = p2 = f = 0;

  while (p1 < vect1.size() && p2 < vect2.size()) {
    if (vect1[p1] < vect2[p2]) {
      final_vect[f] = vect1[p1];
      p1++;
    } else {
      final_vect[f] = vect2[p2];
      p2++;
    }

    f++;
  }

  /**
   * For the remaining values that werent added earlier
   */

  while (p1 < vect1.size()) {
    final_vect[f] = vect1[p1];
    f++;
    p1++;
  }

  while (p2 < vect2.size()) {
    final_vect[f] = vect2[p2];
    f++;
    p2++;
  }
}
