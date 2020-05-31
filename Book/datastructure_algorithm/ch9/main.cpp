#include <iostream>
#include <vector>

using namespace std;

// Checks mid value
// Average case: 2log2n - 3
// Unsuccessful case: 2log2(n+1)
// Page 537
int binarySearch(int value, const vector<int> &list)
{
  int first = 0;
  int last = list.size() - 1;

  bool found = false;
  int index;

  while (first <= last & !found)
  {
    int mid = (first + last) / 2;

    int selected = list[mid];
    if (value == selected)
    {
      found = true;
      index = mid;
      break;
    }
    else if (value > selected)
      first = mid + 1;
    else
      last = mid - 1;
  }

  if (found)
    return index;
  else
    return -1;
}

// Searches by travesing one by one on every node
// returns the index if found
// returns -1 if not found
// Average case: n+1/2
// Unsuccessful case: n
int sequentialSearch(int value, const vector<int> &list)
{
  for (int i = 0; i < list.size(); i++)
  {
    if (list.at(i) == value)
      return i;
  }

  return -1;
}

int main()
{
  cout << "Hello World" << endl;

  vector<int> orderedList = {0, 2, 3, 4, 5, 6};
  int seqIndex = sequentialSearch(5, orderedList);
  int binIndex = binarySearch(5, orderedList);
  cout << seqIndex << endl;
  cout << binIndex << endl;

  return 0;
}
