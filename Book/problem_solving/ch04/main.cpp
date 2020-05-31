#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    cout << "Hello world!" << endl;

    // Cast types (Verbose method)
    int i1 = 100;
    int i2 = 11;
    int integer = i1 / i2;                     // 9
    double fpu = static_cast<double>(i1) / i2; // 9.0x
    cout << integer << endl;
    cout << fpu << endl;

    // Overloading function names


    // Recursive function
    int fVal = factorial(10);
    cout << fVal << endl;

    return 0;
}

int factorial(int n) {
  if (n == 1) return 1;
  return factorial(n-1) * n;
}
