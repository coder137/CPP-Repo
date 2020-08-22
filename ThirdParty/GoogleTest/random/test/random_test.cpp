#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "random.h"

namespace example {

using ::testing::Return;

// NOTE, This can be shifted to the mock folder similar to the BAR folder
// structure
class MockFoo {
public:
  MOCK_METHOD(int, getInteger, (int i), ());
};

TEST(RandomTest, MockFooTest) {
  MockFoo f;
  Random<MockFoo> r(&f);

  EXPECT_CALL(f, getInteger(10)).WillOnce(Return(1000));
  EXPECT_EQ(r.testFoo(10), 1000);
}

}; // namespace example
