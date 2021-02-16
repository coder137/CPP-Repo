#include <iostream>
#include <unordered_set>

void custom_class_unordered_set_example();

int main() {
  custom_class_unordered_set_example();
  return 0;
}

class CustomClass {
 public:
  CustomClass(const std::string& data, int value)
      : data_(data), value_(value) {}

  std::string GetData() const { return data_; }

  // * IMP, We define the == operator here
  bool operator==(const CustomClass& custom) const {
    return (data_ == custom.data_) && (value_ == custom.value_);
  }

 private:
  std::string data_;  // See CustomClassHash data_ is used as a key
  int value_;
};

// * IMP, Here we use string as our hash key
class CustomClassHash {
 public:
  size_t operator()(const CustomClass& custom) const {
    return std::hash<std::string>()(custom.GetData());
  }
};

void custom_class_unordered_set_example() {
  std::unordered_set<CustomClass, CustomClassHash> custom_unordered_set;

  custom_unordered_set.insert(CustomClass("Hello", 5));
  custom_unordered_set.insert(CustomClass("World", 5));
  custom_unordered_set.insert(CustomClass("Hello", 5));

  // Here we only get 1 Hello and 1 World
  for (const auto& it : custom_unordered_set) {
    std::cout << it.GetData() << std::endl;
  }

  // As per our == operator defined we need both string and int to match
  // * NOTE, This will return Not found
  std::cout << "Finding 'Hello:4'" << std::endl;
  auto iter = custom_unordered_set.find(CustomClass("Hello", 4));
  if (iter == custom_unordered_set.end()) {
    std::cout << "Not found" << std::endl;
  } else {
    std::cout << "Found" << std::endl;
  }

  // However, This should return Found
  std::cout << "Finding 'Hello:5'" << std::endl;
  iter = custom_unordered_set.find(CustomClass("Hello", 5));
  if (iter == custom_unordered_set.end()) {
    std::cout << "Not found" << std::endl;
  } else {
    std::cout << "Found" << std::endl;
  }

  // Deleting
  size_t num = custom_unordered_set.erase(CustomClass("Hello", 5));
  std::cout << "Deleted nums: " << num << std::endl;
  std::cout << "Current sz: " << custom_unordered_set.size() << std::endl;

  custom_unordered_set.insert(CustomClass("Hello", 3));
  std::cout << "Current sz: " << custom_unordered_set.size() << std::endl;
}
