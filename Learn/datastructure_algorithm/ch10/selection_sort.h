#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class SelectionSort
{
public:
  SelectionSort(vector<T> &unorderedList) : list(unorderedList) {}
  void sort();

  // ? debugging
  void printVectorInfo();

private:
  void swap(T currentIndex, T replaceIndex);
  T findSmallest(T startIndex);

private:
  vector<T> list;
};

/// Returns the smallest Number index that it finds
template <class T>
T SelectionSort<T>::findSmallest(T startIndex)
{
  T min = list[startIndex];
  T replaceIndex = startIndex;
  for (T j = startIndex; j < list.size(); j++)
  {
    if (list[j] < min)
    {
      min = list[j];
      replaceIndex = j;
    }
  }

  return replaceIndex;
}

// Swaps the two numbers with the given indexes
template <class T>
void SelectionSort<T>::swap(T currentIndex, T swapIndex)
{
  if (currentIndex == swapIndex)
    return;

  T temp = list[currentIndex];
  list[currentIndex] = list[swapIndex];
  list[swapIndex] = temp;
}

template <class T>
void SelectionSort<T>::printVectorInfo()
{
  cout << "[";
  for (T v : list)
  {
    cout << v << ",";
  }
  cout << "]" << endl;
}

template <class T>
void SelectionSort<T>::sort()
{
  for (int i = 0; i < list.size(); i++)
  {
    T min = list[i];
    T replaceIndex = findSmallest(i);
    swap(i, replaceIndex);
  }
}

#endif
