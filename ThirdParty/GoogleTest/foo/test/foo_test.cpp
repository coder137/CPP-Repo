#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "bar_mock.h"
#include "foo.h"

namespace example {

using ::testing::Return;

TEST(FooTest, MockTest) {
  Foo f;

  MockBar b;
  f.setBar(&b);

  EXPECT_CALL(b, getInt(100)).Times(1).WillOnce(Return(1000));
  ASSERT_EQ(f.getInteger(10), 1000);
}

} // namespace example
