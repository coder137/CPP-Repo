#ifndef BAR_BAR_H_
#define BAR_BAR_H_

namespace example {

class VBar {
public:
  virtual int getInt(int i) = 0;
  virtual float getFloat(float f) = 0;
};

class Bar : public VBar {
public:
  int getInt(int i) override;
  float getFloat(float f) override;
};

} // namespace example

#endif
