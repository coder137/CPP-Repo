#ifndef VECTOR2D_H
#define VECTOR2D_H

// OR

// C++ Method
// #pragma once

#include <iostream>

using namespace std;

// Basic definition of a Vector2D class
class Vector2D {

private:
  int x, y;

public:
  Vector2D(int x, int y) : x(x), y(y) {}

  void info(ostream& out);
  void setX(int x);
  void setY(int y);

  int getX();
  int getY();

  bool operator ==(Vector2D& v);
  friend Vector2D operator +(Vector2D& v1, Vector2D& v2);
};

#endif // VECTOR2D_H
