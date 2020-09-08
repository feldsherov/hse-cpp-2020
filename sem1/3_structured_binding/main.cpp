#include <iostream>

int main() {
  auto [firstname, lastname] = std::pair<std::string, std::string>("Svyatolav", "Feldsherov");
  std::cout << firstname << " " << lastname << std::endl;
  return 0;
}
