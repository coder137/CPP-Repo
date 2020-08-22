#ifndef RANDOM_RANDOM_H_
#define RANDOM_RANDOM_H_

#include "foo.h"

namespace example {

template <typename F = Foo> class Random {
public:
  Random(F *foo) : foo_(*foo) {}
  int testFoo(int i) { return foo_.getInteger(i); }

private:
  F &foo_;
};

} // namespace example

#endif
