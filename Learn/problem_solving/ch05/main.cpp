#include <iostream>

// Removes all the assert statements
// #define NDEBUG
#include <cassert>

using namespace std;

void add10(int & num);

int main()
{
    cout << "Hello world!" << endl;

    // Using references &
    int i = 0;
    cout << "Previous Value " << i << endl;
    add10(i);
    cout << "Current Value " << i << endl;

    // Using assert for debugging
    assert(1 == 2); // Program crashes
    assert(1 == 1); // Must be true

    return 0;
}

void add10(int & num) {
  num = num + 10;
}
