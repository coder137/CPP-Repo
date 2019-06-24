#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int y = 100;
    int *i;
    // *i = y; // Copy Value
    i = &y; // Copy address value
    cout << y << endl;
    cout << *i << endl;

    // new keyword (Allocate memory)
    int *j;
    j = new int;
    cout << "Address: " << j << endl;
    cout << "Value: " << *j << endl;

    // delete keyword (Used to free memory)
    delete j;

    // Define pointer types
    typedef int* customIntptr;
    customIntptr iptr;
    int * nptr; // Same as above declaration

    return 0;
}
