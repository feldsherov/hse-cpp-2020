#include <iostream>

std::string_view some_view;
std::string some_string;

void function() {
  std::string test_string("magic of string_view");
  some_view = test_string;
  some_string = test_string;
}

int main() {
  function();

  std::cout << "some_string: " << some_string << std::endl;
  std::cout << "some_view: " << some_view << std::endl;
  return 0;
}
