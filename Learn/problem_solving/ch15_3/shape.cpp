#include "shape.h"

void Shape::moveCenter() {
  center = center + 1;

  // This has not been defined yet
  // We are calling the virtual function here
  info();
}

int Shape::getCenter() const {
  return center;
}
