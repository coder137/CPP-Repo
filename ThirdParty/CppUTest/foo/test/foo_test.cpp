#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"

#include "foo.h"

TEST_GROUP(FirstTestGroup){
  void setup() {}

  void teardown() {}
};

TEST(FirstTestGroup, FirstTest) { FAIL("Fail me"); }

TEST(FirstTestGroup, IntegerTest) {
  CHECK_EQUAL(foo::integer(), 14);
}

TEST(FirstTestGroup, FloatTest) {
  CHECK_EQUAL(foo::floatingPoint(), 11.11);
}

int main(int ac, char **av) {
  return CommandLineTestRunner::RunAllTests(ac, av);
}
