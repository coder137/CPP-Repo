#include <iostream>

using namespace std;

int pow(int num, int exponent);

// returns index
// TODO, Later
int binarySearch(int arr[], int length);

int main()
{
    cout << "Hello world!" << endl;

    int val = pow(2, 10);
    cout << val << endl;

    // Thinking Recursively (Pg 846)

    // Binary Search Case study
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // binarySearch(arr, 7);

    return 0;
}

// Recursive function to get a power of a number
int pow(int num, int exponent) {

  if (exponent < 0) {
    return -1;
  }
  else if (exponent > 0) {
    return num * pow(num, exponent - 1);
  } else {
    // Exponent is 0
    return 1;
  }
}
