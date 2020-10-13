/**
 *
 * - Creating a custom concept using requires
 * - Using a concept in a templated function
 * - Using a concept in a templated class
 * - Using a concept for compile time polymorphism
 *
 */
#include <concepts>
#include <iostream>

#include <unistd.h>

// Constant declaration
template <typename T> concept GPIO = requires(T t) {
  t.init();
  t.set();
  t.reset();

  t.get();
};

namespace stm32 {

class gpio {
public:
  void init() { std::cout << __FUNCTION__ << std::endl; }

  void set() { std::cout << __FUNCTION__ << std::endl; }
  void reset() { std::cout << __FUNCTION__ << std::endl; }

  bool get() {
    std::cout << __FUNCTION__ << std::endl;
    return false;
  }
};

} // namespace stm32

// * This is a template
// * Compile time polymorphism with Concepts
void blink(GPIO auto &gpio) {
  gpio.init();

  while (1) {
    gpio.reset();
    sleep(1);
    gpio.set();
    sleep(1);
  }
}

// * Compile time polymorphism with Concepts
template <GPIO Gpio> class Button {
public:
  Button(Gpio &gpio) : gpio_(gpio) {}

  bool is_pressed() { return gpio_.get(); }

private:
  Gpio &gpio_;
};

int main(int, char **) {
  std::cout << "Hello, world!\n";

  stm32::gpio gp;

  // Class based example
  Button b(gp);
  if (!b.is_pressed()) {
    std::cout << "Button is not pressed" << std::endl;
  }

  // Function based example
  blink(gp);

  return 0;
}
