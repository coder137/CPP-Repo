#include <bitset>
#include <iostream>

static void printBitsetStats();

int main(int, char **) {
  std::cout << "Hello, world!\n";

  // 32bit and 64bit are optimal
  printBitsetStats();

  // Constructor
  std::bitset<32> bu32{0x87654321};
  std::cout << bu32 << std::endl;

  // Set, Reset and Flip
  bu32.set(1, true); // sets the bit
  std::cout << bu32 << std::endl;

  bu32.set(1, false); // similar to reset
  std::cout << bu32 << std::endl;

  bu32.reset(0); // resets at bit position 0
  std::cout << bu32 << std::endl;

  bu32.set(); // set the entire mask
  std::cout << bu32 << std::endl;

  bu32.reset(); // reset the entire mask
  std::cout << bu32 << std::endl;

  bu32.flip(0);
  std::cout << bu32 << std::endl;

  // Element Access and Information
  bu32.set(0, true);
  std::cout << "Element Access at pos 0 via []: " << bu32[0] << std::endl;
  std::cout << "Element Access at pos 0 via test: " << bu32.test(0) << std::endl;

  try {
      uint8_t value = bu32.test(32);
      std::cout << "Element at position 32: " << value << std::endl;
  } catch (std::out_of_range) {
      std::cout << "Element at position 32 does not exist (out_of_range)\n";
  }

  bool all_bits_are_set = bu32.all();
  bool any_bits_are_set = bu32.any();
  bool no_bits_are_set = bu32.none();

  bu32.set(1, true);
  std::cout << "Number of ones: " << bu32.count() << std::endl;
  std::cout << "Size of bits held: " << bu32.size() << std::endl;

  std::cout << "Size in STRING: " << bu32.to_string() << std::endl;
  std::cout << "Size in UINT32: " << bu32.to_ulong() << std::endl;
  std::cout << "Size in UINT64: " << bu32.to_ullong() << std::endl;

  // Logical Operators
  std::cout << bu32 << std::endl;
  std::cout << ~bu32 << std::endl; 

  // &, | and ^ allowed with other bitsets
  // &=, |= and ^= allowed with numbers and other bitsets
  bu32 &= 0x01;
  std::cout << bu32 << std::endl;

  bu32 |= 0x11;
  std::cout << bu32 << std::endl;

  bu32 ^= 0x01;
  std::cout << bu32 << std::endl;

  // <<, >> allowed
  // <<=, >>= allowed
  bu32.set(0);
  std::cout << (bu32 << 1) << std::endl;
  std::cout << (bu32 >> 1) << std::endl;

  return 0;
}

static void printBitsetStats() {
  std::bitset<8> bu8;
  std::cout << "Sizeof 8 bits via bitset: " << sizeof(bu8) << "\n";
  std::cout << "Sizeof 8 bits as uint8_t: " << sizeof(uint8_t) << "\n";
  std::cout << "-------\n";

  std::bitset<16> bu16;
  std::cout << "Sizeof 16 bits via bitset: " << sizeof(bu16) << "\n";
  std::cout << "Sizeof 16 bits as uint16_t: " << sizeof(uint16_t) << "\n";
  std::cout << "-------\n";

  std::bitset<32> bu32;
  std::cout << "Sizeof 32 bits via bitset: " << sizeof(bu32) << "\n";
  std::cout << "Sizeof 32 bits as uint32_t: " << sizeof(uint32_t) << "\n";
  std::cout << "-------\n";

  std::bitset<64> bu64;
  std::cout << "Sizeof 64 bits via bitset: " << sizeof(bu64) << "\n";
  std::cout << "Sizeof 64 bits via uint64_t: " << sizeof(uint64_t) << "\n";
  std::cout << "-------\n";

  std::cout << "Sizeof unsigned long: " << sizeof(unsigned long) << "\n";
  std::cout << "Sizeof unsigned long long: " << sizeof(unsigned long long) << "\n";
  std::cout << "-------\n";
}
