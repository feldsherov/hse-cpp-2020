#include <iostream>
#include <algorithm>

// https://en.cppreference.com/w/cpp/string/byte/isdigit
// Which is NOT OK item here?
inline bool isdigit(char symbol) {
  constexpr std::string_view kDigits{"0123456789"};
  return (std::find(kDigits.begin(), kDigits.end(), symbol) != kDigits.end());
}

int main() {
  char symbol;
  std::cin >> symbol;
  std::cout << isdigit(symbol) << std::endl;
  return 0;
}
