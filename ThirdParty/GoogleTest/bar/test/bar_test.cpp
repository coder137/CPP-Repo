#include <gtest/gtest.h>

#include "bar.h"

TEST(BarTest, failcondition) { FAIL(); }

TEST(BarTest, passcondition) { SUCCEED(); }

// ASSERT stops the test at the first failure condition
TEST(BarTest, intassert) {
  example::Bar b;
  ASSERT_EQ(b.getInt(10), 100);
  ASSERT_EQ(b.getInt(12), 110); // Will terminate before hitting this line
}

// EXPECT doesnt stop the test at a failure condition (continue)
TEST(BarTest, intexpect) {
  example::Bar b;
  EXPECT_EQ(b.getInt(15), 150);
  EXPECT_EQ(b.getInt(10), 100);

  // Custom Messages
  EXPECT_EQ(b.getInt(12), 12) << "Values mismatched";
}
