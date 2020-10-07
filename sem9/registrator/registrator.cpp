#include "registrator.h"

#include <iostream>

Registrator::Registrator(std::string name) {
  std::cout << "Call registrator constructor" << std::endl;
  registred_values.emplace_back(std::move(name));
}
