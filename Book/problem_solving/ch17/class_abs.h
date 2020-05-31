#pragma once

using namespace std;

#include <iostream>
#include <string>

template<class T>
class Vector2D {
  T x, y;

public:
  Vector2D(T x, T y) : x(x) , y(y) {}

  string getInfo();
  void setData(T x, T y);

  T getX() {
    return x;
  }
};

template <class T>
void Vector2D<T>::setData(T x, T y) {
  this->x = x;
  this->y = y;
}

template <class T>
string Vector2D<T>::getInfo() {
  string ret;
  ret = to_string(x);
  ret += ":";
  ret += to_string(y);
  return ret;
}
