#include <iostream>

using namespace std;

template <class T>
void swapNum(T &var1, T &var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

template <class T>
void printNum(T &var1, T &var2)
{
    cout << var1 << " : " << var2 << endl;
}

int main()
{
    cout << "Hello world!" << endl;

    /// Templates for functions
    // Swapping ints
    int i = 0, j = 2;
    cout << "Integer" << endl;
    printNum(i, j);
    swapNum(i, j);
    printNum(i, j);
    cout << "----------" << endl;

    float x = 1.1, y = 2.2;
    cout << "Float" << endl;
    printNum(x, y);
    swapNum(x, y);
    printNum(x, y);
    cout << "----------" << endl;

    /// Templates for Data Abstraction

    return 0;
}
