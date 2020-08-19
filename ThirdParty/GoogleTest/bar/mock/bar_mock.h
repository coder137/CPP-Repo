#ifndef BAR_MOCK_BAR_MOCK_H_
#define BAR_MOCK_BAR_MOCK_H_

#include <gmock/gmock.h>

#include "bar.h"

namespace example {

class MockBar : public VBar {
public:
  MOCK_METHOD(int, getInt, (int i), (override));
  MOCK_METHOD(float, getFloat, (float f), (override));
};

} // namespace example

#endif
