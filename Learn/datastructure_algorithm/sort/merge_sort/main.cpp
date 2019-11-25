/**
 * Date: 21.11.2019
 * 
 * Merge Sort with Psuedocode
 * https://www.youtube.com/watch?v=TzeBrDU-JaY
 */
#include <iostream>
#include <vector>

using namespace std;

void mergesort(vector<int> &unsorted_arr);
void mergeTwoSortedArr(const vector<int> &vect1, const vector<int> &vect2, vector<int> &final_vect);
void printvector(vector<int> &vect);

int main()
{
  vector<int> unsorted = {43, 12, 32, 75, 212, 63, 123, 74, 98};
  mergesort(unsorted);
  printvector(unsorted);
}

void mergesort(vector<int> &unsorted_arr)
{
  // Create a new vector that is half od the unsorted_arr
  int len = unsorted_arr.size();
  if (len < 2)
  {
    return;
  }
  else
  {
    // 7 -> 3
    int mid = len / 2;

    // 3
    vector<int> left(mid);
    for (int i = 0; i < mid; i++)
    {
      left[i] = unsorted_arr[i];
    }

    // 7-3 -> 4
    vector<int> right(len - mid);
    for (int i = mid; i < len; i++)
    {
      right[i - mid] = unsorted_arr[i];
    }

    // Recursive calls
    mergesort(left);
    mergesort(right);
    mergeTwoSortedArr(left, right, unsorted_arr);
  }
}

void mergeTwoSortedArr(const vector<int> &vect1, const vector<int> &vect2, vector<int> &final_vect)
{
  int p1, p2, f;
  p1 = p2 = f = 0;

  while (p1 < vect1.size() && p2 < vect2.size())
  {
    if (vect1[p1] < vect2[p2])
    {
      final_vect[f] = vect1[p1];
      p1++;
    }
    else
    {
      final_vect[f] = vect2[p2];
      p2++;
    }

    f++;
  }

  /**
   * For the remaining values that werent added earlier
   */

  while (p1 < vect1.size())
  {
    final_vect[f] = vect1[p1];
    f++;
    p1++;
  }

  while (p2 < vect2.size())
  {
    final_vect[f] = vect2[p2];
    f++;
    p2++;
  }
}

void printvector(vector<int> &vect)
{
  for (int i = 0; i < vect.size(); i++)
  {
    cout << vect[i] << " ";
  }
  cout << endl;
}
