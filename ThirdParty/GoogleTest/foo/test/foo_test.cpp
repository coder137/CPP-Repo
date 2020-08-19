#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "bar.h"
#include "foo.h"

namespace example {

using ::testing::Return;

class MockBar : public VBar {
public:
  MOCK_METHOD(int, getInt, (int i), (override));
  MOCK_METHOD(float, getFloat, (float f), (override));
};

TEST(FooTest, MockTest) {
  Foo f;

  MockBar b;
  f.setBar(&b);

  EXPECT_CALL(b, getInt(100)).Times(1).WillOnce(Return(1000));
  ASSERT_EQ(f.getInteger(10), 1000);
}

} // namespace example
