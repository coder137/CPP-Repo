/**
 * Author: Niket Naidu
 * Link: https://docs.microsoft.com/en-us/cpp/cpp/constexpr-cpp?view=vs-2019
 * Link: https://en.cppreference.com/w/cpp/language/constexpr
 */
#include <iostream>

using namespace std;

constexpr int product(int a, int b);

int main()
{
  cout << "Hello World" << endl;

  int arr[256];
  for (int i = 0; i <= 256; i++)
  {
    arr[i] = product(i, i); // Computed during compile time
    cout << arr[i] << endl;
  }

  return 0;
}

constexpr int product(int a, int b)
{
  return a * b;
}
