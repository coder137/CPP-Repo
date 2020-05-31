#pragma once

class Shape {

public:
  Shape() : center(0) {}
  ~Shape() {}

  int getCenter() const;
  void moveCenter();

  // NOTE, Throws an error if not defined
  // `undefined reference to vtable for <classname>`
  virtual void info() {}

private:
  int center;

};
