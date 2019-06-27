#include <iostream>

using namespace std;

class Vector2D {

  int x;
  int y;

public:
  Vector2D(int x, int y) : x(x), y(y) {}
  Vector2D(int x) : x(x), y(0) {}
  Vector2D() : x(0), y(0) {}

  Vector2D operator +(const Vector2D& v2) {
    return Vector2D(x+v2.x, y+v2.y);
  }

  // v1 - v2;
  friend Vector2D operator -(const Vector2D& v1, const Vector2D& v2);

  // Overloading << (output)
  friend ostream& operator <<(ostream& out, const Vector2D& v) {
    out << " x: " << v.x << " y: " << v.y;
    return out;
  }

  // Overloading >> (input)
  friend istream& operator >>(istream& in, Vector2D& v) {
    cout << "Get x" << endl;
    in >> v.x;
    cout << "Get y" << endl;
    in >> v.y;

    return in;
  }

  void info(string descriptor) {
    cout << descriptor << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "----------" << endl;
  }
};

// friend keyword used for operator overloading
Vector2D operator -(const Vector2D& v1, const Vector2D& v2) {
  return Vector2D(v1.x - v2.x, v1.y - v2.y);
}

int main()
{
    cout << "Hello world!" << endl;

    // Operator overloading
    // Can be used with friend keyword too
    Vector2D v1(5, 2);
    Vector2D v2(2, 3);

    Vector2D v3 = v1 + v2;
    Vector2D v4 = v1 - v2;
    v3.info("v3 = v1 + v2");
    v4.info("v4 = v1 - v2");

    // Automatic type conversion
    // The 5 is converted to Vector(5) // NOTE, Check the Constructors
    Vector2D v5 = v1 + 5;
    v1.info("v1");
    v5.info("v5 = v1 + 5");

    // Overloading << >> for input and output
    cout << "v1" << v1 << endl;
    Vector2D vin;
    cin >> vin;
    cout << "vin" << vin << endl;

    return 0;
}
