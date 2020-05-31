#pragma once

#include "shape.h"

class Circle : public Shape {

public:
  Circle(int radius) : radius(radius), Shape() {}

  virtual void info(); // Not needed but should be included

private:
  int radius;
};
