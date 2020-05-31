#ifndef SHELL_SORT_H
#define SHELL_SORT_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class ShellSort
{
public:
  ShellSort(vector<T> &unorderedList) : list(unorderedList) {}
  void sort();

  void printVector(ostream &out)
  {
    out << "[";
    for (T v : list)
    {
      out << v << ",";
    }
    out << "]" << endl;
  }

private:
  void swap(int currentIndex, int swapIndex);

private:
  vector<T> list;
};

template <class T>
void ShellSort<T>::sort()
{
  size_t length = list.size();

  size_t initialLength = length / 2;

  do
  {
    for (size_t i = 0; i < length; i++)
    {
      int vIndex = initialLength + i;
      if (vIndex < length)
      {
        swap(i, vIndex);
      }
    }
    initialLength--;
  } while (initialLength != 0);
}

template <class T>
void ShellSort<T>::swap(int currentIndex, int swapIndex)
{
  if (list[currentIndex] > list[swapIndex])
  {
    T temp = list[currentIndex];
    list[currentIndex] = list[swapIndex];
    list[swapIndex] = temp;
  }
}

#endif
