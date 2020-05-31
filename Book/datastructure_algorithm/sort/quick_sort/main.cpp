/**
 * Date: 10.12.2019
 * 
 * Quicksort with psuedocode
 * https://www.youtube.com/watch?v=COk73cpQbFQ
 */
#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int> &v, int startIndex, int endIndex);
int partition(vector<int> &v, int startIndex, int endIndex);

void printVector(const vector<int> &v);

int main()
{
  cout << "Hello World" << endl;
  // vector<int> v = {7, 6, 5, 4, 3, 2, 1, 0};
  vector<int> v = {7, 2, 1, 6, 8, 5, 3, 4};

  printVector(v);
  quicksort(v, 0, v.size() - 1);

  cout << "Done Sorting: " << endl;
  printVector(v);

  return 0;
}

void quicksort(vector<int> &v, int startIndex, int endIndex)
{
  if (startIndex < endIndex)
  {
    int partitionIndex = partition(v, startIndex, endIndex);
    cout << "PartitionIndex: " << partitionIndex << endl;
    printVector(v);
    quicksort(v, startIndex, partitionIndex - 1);
    quicksort(v, partitionIndex + 1, endIndex);
  }
}

int partition(vector<int> &v, int startIndex, int endIndex)
{
  int pivot = v[endIndex];
  int pIndex = startIndex;

  cout << "Chosen pivot: " << pivot << endl;

  for (int i = startIndex; i < endIndex; i++)
  {
    if (v[i] <= pivot)
    {
      // swap
      // cout << "Swapping: " << v[i] << " and " << v[pIndex] << endl;
      swap(v[i], v[pIndex]);
      pIndex++;
    }
  }

  swap(v[endIndex], v[pIndex]);
  return pIndex;
}

void printVector(const vector<int> &v)
{
  cout << "[";
  for (int d : v)
  {
    cout << d << ", ";
  }
  cout << "]" << endl;
}
