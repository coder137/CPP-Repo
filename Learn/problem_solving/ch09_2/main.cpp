#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // Array and Pointers
    int a[10];
    int *p;
    p = a; // int * is similar to int[]
    // a = p; // ILLEGAL (Cannot change a)

    // Dynamic Array
    int * y;
    y = new int[10]; // Dynamic
    // Array Pointer arithmetic
    for (int i=0;i<10;i++) {
      cout << "Pointer : " << *(y + i) << endl;
      cout << "Array : " <<  y[i] << endl;
    }
    delete [] y; // Delete dynamic array

    // Multi dimensional Array Pointer (3*4 array)

    // Create
    int **m = new int*[3];
    for (int i = 0;i<3;i++) {
      m[i] = new int[4];
    }

    // Delete
    for (int i = 0;i<3;i++) {
      delete [] m[i];
    }
    delete [] m;



    return 0;
}
