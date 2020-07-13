#include "foo.h"
#include "unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_square_10(void) { TEST_ASSERT_EQUAL_INT32(foo_square(10), 100); }

void test_square_1(void) { TEST_ASSERT_EQUAL_INT32(foo_square(1), 1); }

void test_square_27(void) { TEST_ASSERT_EQUAL_INT32(foo_square(27), 729); }

int main() {
  UNITY_BEGIN();

  // Add Tests here
  RUN_TEST(test_square_1);
  RUN_TEST(test_square_10);
  RUN_TEST(test_square_27);

  return UNITY_END();
}
