#ifndef FOO_FOO_H_
#define FOO_FOO_H_

#include "bar.h"

namespace example {

class Foo {
public:
  int getInteger(int i);
  float getFloat(float f);
  void setBar(VBar *b) { b_ = b; };

private:
  VBar *b_;
};

} // namespace example

#endif
