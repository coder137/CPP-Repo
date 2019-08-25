#include <iostream>
#include <vector>

#include "selection_sort.h"

using namespace std;

int main()
{

  vector<int> unorderedList = {24, 64, 31, 6, 89, 13};
  SelectionSort<int> i(unorderedList);
  i.sort();
  i.printVectorInfo();

  vector<float> unorderedFloatList{2.2, 6.8, 4.2, 123.5, 531.1, 32.2, 11.4, 5.2};
  SelectionSort<float> f(unorderedFloatList);
  f.sort();
  f.printVectorInfo();

  return 0;
}
