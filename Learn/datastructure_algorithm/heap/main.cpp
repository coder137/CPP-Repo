/**
 * DS Malik (2nd Edition): Page 568
 */
#include <iostream>
#include <vector>

using namespace std;

void max_heapify(vector<int> &vect, int position);
void build_max_heap(vector<int> &vect);
void printvector(vector<int> &vect);

int main()
{
  vector<int> data = {1, 50, 3, 65, 23, 16, 48, 40, 97, 62};
  vector<int> tdata = {15, 60, 72, 70, 56, 32, 62, 92, 45, 30, 65};
  printvector(tdata);

  vector<int> test_heap1 = {1, 53, 99};
  vector<int> test_heap2 = {2, 1};
  vector<int> test_heap3 = {10};

  max_heapify(test_heap3, 0);
  printvector(test_heap3);

  build_max_heap(tdata);
  printvector(tdata);

  return 0;
}

/**
 * Build max heap
 */
void build_max_heap(vector<int> &vect)
{
  int length = vect.size(); // 3 -> 2
  for (int i = length / 2 - 1; i >= 0; i--)
  {
    max_heapify(vect, i);
  }
}

/**
 * 1. Check if Children exist and find the maximum
 * 2. Swap with Parent if parent is smaller than the maximum
 * 3. If swap, check if index has children to correct any anomaly
 */
void max_heapify(vector<int> &vect, int position)
{
  int length = vect.size();

  int pos = position + 1;
  int child = 2 * pos;

  if (length < child)
    return;

  int max;
  int index;
  if (length < child + 1)
  {
    // check with child1 only
    max = vect[child - 1];
    index = child - 1;
  }
  else
  {
    // find max between child1 and child2
    if (vect[child - 1] > vect[child])
    {
      max = vect[child - 1];
      index = child - 1;
    }
    else
    {
      max = vect[child];
      index = child;
    }
  }

  if (vect[pos - 1] < max)
  {
    // DONE, Swap
    int temp = vect[pos - 1];
    vect[pos - 1] = max;
    vect[index] = temp;

    // DONE, check if index has more children
    max_heapify(vect, index);
  }
}

/**
 * Utility function to print vector<int>
 */
void printvector(vector<int> &vect)
{
  for (int i = 0; i < vect.size(); i++)
  {
    cout << vect[i] << " ";
  }
  cout << endl;
}
