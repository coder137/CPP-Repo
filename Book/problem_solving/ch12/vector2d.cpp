#include "vector2d.h"

void Vector2D::info(ostream& out) {
  out << "X: " << this->x << endl;
  out << "Y: " << this->y << endl;
}

void Vector2D::setX(int x) {
  this->x = x;
}
void Vector2D::setY(int y) {
  this->y = y;
}

int Vector2D::getX() {
  return this->x;
}

int Vector2D::getY() {
  return this->y;
}

bool Vector2D::operator ==(Vector2D& v) {
  return this->x == v.x && this->y == v.y;
}

Vector2D operator +(Vector2D& v1, Vector2D& v2) {
  return Vector2D(v1.x + v2.x, v1.y + v2.y);
}
