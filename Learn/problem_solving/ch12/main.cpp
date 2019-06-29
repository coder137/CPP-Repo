#include <iostream>
#include "vector2d.h"

using namespace std;

// Creating a namespace
namespace test {
  void printHello(ostream& out) {
    out << "Hello from namespace \"test\"" << endl;
  }
}

namespace newTest {
  void printHello(ostream& out) {
    out << "Hello from namespace \"newTest\"" << endl;
  }
}

// Rather than using the entire namespace
// Use by function
using test::printHello; // Makes sure only this is in global


int main()
{
    cout << "Hello world!" << endl;

    // Defining a class / struct in a different file (.h)
    Vector2D vec1(1, 2);
    vec1.info(cout);

    Vector2D vec2(2, 3);
    vec2.info(cout);

    Vector2D vec3(1, 2);

    bool isEqualv12 = vec1 == vec2;
    bool isEqualv13 = vec1 == vec3;
    cout << "vec1 == vec2 is " << isEqualv12 << endl;
    cout << "vec1 == vec3 is " << isEqualv13 << endl;

    Vector2D vec4 = vec1 + vec2;
    vec4.info(cout);

    // namespaces
    test::printHello(cout);
    newTest::printHello(cout);

    // the using declarative
    // NOTE, This is why the using declarative is "dangerous"
    using namespace test;
    printHello(cout);

    using namespace newTest;
    // printHello(cout); ambiguous, will throw an error

    // Unnamed Namespaces (Pg 765)
    // Global Namespace != Unnamed namespace
    // Unnamed Namespace is local to the file and included file
    // Global Namespace is valid throughout the entire program

    return 0;
}
