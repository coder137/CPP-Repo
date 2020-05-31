#include <iostream>

#include "shape.h"
#include "derived.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    cout << "Shape" << endl;
    Shape s;
    // Virtual function is empty
    s.info();
    cout << "-----------------" << endl;

    cout << "Circle" << endl;
    Circle c(5);
    c.info();
    cout << "-----------------" << endl;

    // Slicing problem
    Shape ns = c; // Allowed, loses the circle fields
    // Circle nc = s; // NOT Allowed
    // ns.radius // NOT Allowed

    // Solving the slicing problem
    // Only data members are lost, virtual functions remain
    Shape *ps;
    Circle *pc;
    pc = new Circle(21);
    pc->moveCenter();
    ps = pc;
    cout << "Pointer Shape INFO (from Circle)" << endl;
    ps->info(); // We get the radius information here

    // Making destructors virtual when other virtual functions are present (IMPORTANT) (Pg 909)

    return 0;
}
