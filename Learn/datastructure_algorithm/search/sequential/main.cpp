#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(const vector<int> &data, int value);

int main()
{
  cout << "Hello World" << endl;

  vector<int> searchData = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index = sequentialSearch(searchData, 5);
  cout << index << endl;
}

int sequentialSearch(const vector<int> &data, int value)
{
  for (int i = 0; i < data.size(); i++)
  {
    if (data[i] == value)
    {
      return i;
    }
  }
  return -1;
}
