#include <iostream>

struct foo_t {
  foo_t(int32_t a, int32_t b) : a(a), b(b) {}
  int32_t a;
  int32_t b;
};

// https://en.cppreference.com/w/cpp/language/parameter_pack
template <typename T, typename... Args>
T creator(Args&&... args) {
  return T(args...);
}

// https://en.cppreference.com/w/cpp/container/vector/emplace_back
int32_t main() {
  creator<foo_t, int32_t, int32_t>(1, 2);
}
