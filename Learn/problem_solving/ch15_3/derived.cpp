#include "derived.h"

#include <iostream>

using namespace std;

void Circle::info() {
  cout << "Center: " << getCenter() << endl;
  cout << "Radius: " << this->radius << endl;
}
