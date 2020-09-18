#include <iostream>

template<int32_t n>
struct fib_t {
  static constexpr int32_t value = fib_t<n - 1>::value + fib_t<n - 2>::value;
};

template<>
struct fib_t<0> {
  static constexpr int32_t value = 0;
};

template<>
struct fib_t<1> {
  static constexpr int32_t value = 1;
};

int32_t main() {
  std::cout << fib_t<32>::value << std::endl;
  int x;
  std::cin >> x;
}
