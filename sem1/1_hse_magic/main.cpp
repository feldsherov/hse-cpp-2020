#include <iostream>

bool has_special_symbols(const std::string_view s) {
  static const std::string special_symbols = "#$%^{}[]№@()";
  // https://en.cppreference.com/w/cpp/string/basic_string/find_first_of
  return s.find_first_of(special_symbols) != std::string::npos;
}

int main() {
  std::cout << has_special_symbols("факультет компьютерных наук") << std::endl;
  return 0;
}
