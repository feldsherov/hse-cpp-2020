#include "registrator.h"

#include <iostream>

int main() {
  std::cout << "Registred names:" << std::endl;
  for (const auto& name : registred_values) {
    std::cout << "name: " << name << std::endl;
  }
  std::cout << "EOF" << std::endl;
  return 0;
}
