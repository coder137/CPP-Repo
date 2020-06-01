#include <gtest/gtest.h>

#include "example.h"

TEST(exampletest, failcondition) { FAIL(); }

TEST(exampletest, passcondition) { SUCCEED(); }

// ASSERT stops the test at the first failure condition
TEST(exampletest, intassert) {
  ASSERT_EQ(example_return10(), 11);
  ASSERT_EQ(example_return10(), 10); // Will terminate before hitting this line
}

// EXPECT doesnt stop the test at a failure condition (continue)
TEST(exampletest, intexpect) {
  EXPECT_EQ(example_return10(), 15);
  EXPECT_EQ(example_return10(), 10);

  // Custom Messages
  EXPECT_EQ(example_return10(), 12) << "Should get 12, returned 10 instead";
}
