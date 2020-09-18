#include <iostream>

int32_t main() {
  int c;
  int *a = new int;
  int *b = new int;
  std::cout << "a = " << a 
            << " b = " << b 
            << " b - a = " << b - a << std::endl;
  std::cout << "c = " << &c << std::endl;
  delete a;
  delete b;
}
