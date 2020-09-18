#include <iostream>

void foo() {
  static int a = 0;
  ++a;
  std::cout << a << std::endl;
}

int32_t main() {
  foo();
  foo();
}
