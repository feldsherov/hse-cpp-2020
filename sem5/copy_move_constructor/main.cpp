#include <utility>
#include <iostream>

class kek_t {
public:
  kek_t() = default;
  kek_t(const kek_t& r) {
    std::cout << "copy constructor call" << std::endl;
  }

  kek_t(kek_t&& r) {
    std::cout << "move constructor call" << std::endl;
  }

  kek_t& operator=(const kek_t& r) {
    std::cout << "copy operator= call" << std::endl;
    return *this;
  }

  kek_t& operator=(kek_t&& r) {
    std::cout << "move operator= call" << std::endl;
    return *this;
  }
};

kek_t foo() {
  return {};
}

int32_t main() {  
  kek_t k;
  auto k1 = k;
  auto k2(k);

  k2 = k1 = k;

  kek_t k3 = std::move(k);
  kek_t k4;

  k4 = std::move(k3);
}
