#include <iostream>
#include <vector>

#define DEBUG 0

using namespace std;

int binarySearchRecursive(const vector<int> &data, int high, int low, int value);
int binarySearchNotRecursive(const vector<int> &data, int high, int low, int value);

template <typename T>
void printDebug(T data);

int main()
{
  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = -3; i < 12; i++)
  {
    int index = binarySearchRecursive(v, v.size(), 0, i);
    cout << "Found Index Recursive: " << index << endl;

    index = binarySearchNotRecursive(v, v.size(), 0, i);
    cout << "Found Index Not Recursive: " << index << endl;
  }

  return 0;
}

int binarySearchNotRecursive(const vector<int> &data, int high, int low, int value)
{
  while (1)
  {
    int mid = (high + low) / 2;
    printDebug(mid);

    if (low > high)
      return -1;

    if (data[mid] == value)
      return mid;

    if (data[mid] > value)
    {
      printDebug("Going Lower");
      high = mid - 1;
    }
    else
    {
      printDebug("Going Higher");
      low = mid + 1;
    }
  }
}

int binarySearchRecursive(const vector<int> &data, int high, int low, int value)
{
  // 6 - 10
  int mid = (high + low) / 2;
  printDebug(mid);
  printDebug(high);
  printDebug(low);

  if (low > high)
  {
    return -1;
  }

  if (data[mid] == value)
  {
    return mid;
  }

  int upper = high;
  int lower = low;

  if (data[mid] > value)
  {
    printDebug("Going Lower");
    upper = mid - 1;
  }
  else
  {
    printDebug("Going Higher");
    lower = mid + 1;
  }

  binarySearchRecursive(data, upper, lower, value);
}

template <typename T>
void printDebug(T data)
{
#if DEBUG
  cout << "DEBUG: " << data << endl;
#endif
}
