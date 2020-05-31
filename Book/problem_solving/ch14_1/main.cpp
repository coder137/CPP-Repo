#include <iostream>
#include <vector>

using namespace std;

/// [printVector]
void printVector(const vector<int> &list)
{
  cout << "[";
  for (int v : list)
  {
    cout << v << ",";
  }
  cout << "]" << endl;
}

/// Without passing mid, low OR high values
/// index if found
/// -1 if not found
int binarySearch(const vector<int> &list, int value, int offset = 0)
{
  int first = 0;
  int last = list.size() - 1;

  // Vector is empty
  if (last < 0)
    return -1;

  int mid = first + last / 2;
  int check = list[mid];

  cout << mid << endl;

  if (value == check)
    return offset + mid;

  if (value > check)
    first = mid + 1;
  else
    last = mid - 1;

  // Make a new vector
  vector<int> v;
  for (int i = first; i <= last; i++)
  {
    v.push_back(list[i]);
  }

  // ? debugging (print vector)
  printVector(v);

  return binarySearch(v, value, first + offset);
}

int main()
{
  vector<int> orderedList = {0, 3, 5, 9, 24, 45, 59, 123, 569, 123545};

  int binaryIndex = binarySearch(orderedList, 45);
  cout << "Index: " << binaryIndex << endl;
}
