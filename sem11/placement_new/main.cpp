#include <iostream>

class NonCopiable {
  public:
  NonCopiable() {
    std::cout << "constructor called" << std::endl;
  }
  ~NonCopiable() {
    std::cout << "destructor called" << std::endl;
  }

  NonCopiable(NonCopiable&& other) = default;
  NonCopiable(const NonCopiable& other) = delete;

  int id = 179;
};

int main() {
  char buf[100];
  new(buf) NonCopiable[2];
  return 0;
}
