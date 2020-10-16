#include <iostream>
#include <format>

// Not supported by any compiler :(
// https://en.cppreference.com/w/cpp/20v

int main() {
  std::string message = std::format("The answer is {}.", 42);
  std::cout << message << std::endl;


  // What is std::ostream_iterator?
  // What is std::back_inserter?
  std::format_to(
      std::ostream_iterator<double>(std::cout, " "), 
      "The answer is {}.", 42);
  return 0;
}
