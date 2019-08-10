#include <iostream>

#include "class_abs.h"

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

    /// Templates for Class Abstraction (Without forward declaration)
    /// i.e cannot be used in .cpp file
    Vector2D<int> intVector(2, 3);
    Vector2D<float> floatVector(1.5, 2.7);

    cout << "IntVector: " << intVector.getInfo() << endl;
    cout << "FloatVector: " << floatVector.getInfo() << endl;

    /// Templates for Class Abstraction (With forward declaration) Pg 981
    /// i.e can be used to declare a seperate .cpp file

    return 0;
}
