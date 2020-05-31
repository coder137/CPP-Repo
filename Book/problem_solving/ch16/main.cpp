#include <iostream>

#include <string>

using namespace std;

class Vector2D {
  int x, y;

public:
  Vector2D() : x(0), y(0) {}
  Vector2D(int x, int y) : x(x), y(y) {}

  string getInfo() {
    string buffer;
    buffer = to_string(x);
    buffer += ":";
    buffer += to_string(y);
    return buffer;
  }
};

int main()
{
    cout << "Hello world!" << endl;

    /// 1. Normal try - throw - catch functionality
    try {
      int denominator = 0;

      if (denominator <= 0)
        throw -1; // Error Int is run

      if (denominator <= 0)
        throw "Denominator is Zero!"; // Error String is run

      double val = 10/denominator;
    } catch (const char * e) {
      cout << "Error String: " << e << endl;
    } catch (int e) {
      cout << "Error Int: " << e << endl;
    }

    /// 2. Try-catch with classes
    try {
      int z = 1;

      if (z == 1)
        throw 1; // Random Error is run

      if (z == 1)
        throw Vector2D(2, 2); // Vector2D Error is run

    } catch (Vector2D e) {
      cout << "Vector2D Error-> " << e.getInfo() << endl;
    } catch (...) {
      cout << "Random Error" << endl;
    }

    /// TODO, Throwing exception inside a function

    return 0;
}
