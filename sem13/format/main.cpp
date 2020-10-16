#include <iostream>
#include <format>

int main() {
  std::string message = std::format("The answer is {}.", 42);
  std::cout << message << std::endl;


  std::format_to(
      std::ostream_iterator<double>(std::cout, " "), 
      "The answer is {}.", 42);
  return 0;
}
