#include <iostream>
#include <vector>

#include "selection_sort.h"
#include "shell_sort.h"

using namespace std;

int main()
{

  vector<int> unorderedList = {24, 64, 31, 6, 89, 13};
  SelectionSort<int> i(unorderedList);
  // i.sort();
  // i.printVectorInfo();

  vector<float> unorderedFloatList{2.2, 6.8, 4.2, 123.5, 531.1, 32.2, 11.4, 5.2, 0.5};
  SelectionSort<float> f(unorderedFloatList);
  // f.sort();
  // f.printVectorInfo();

  ShellSort<int> si(unorderedList);
  si.sort();
  si.printVector(cout);

  ShellSort<float> sf(unorderedFloatList);
  sf.sort();
  sf.printVector(cout);

  return 0;
}
