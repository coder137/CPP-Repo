#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

namespace actual {
  void call_foo_within() {
    mock().actualCall("foo::floatingPoint");
  }
};

TEST_GROUP(FooBarMock) {  
  void teardown(){
    mock().clear();
  }
};

TEST(FooBarMock, SimpleCallFooWithin) {
  mock().expectOneCall("foo::floatingPoint");
  actual::call_foo_within();
  mock().checkExpectations();
}

int main(int ac, char **av) {
  return CommandLineTestRunner::RunAllTests(ac, av);
}
