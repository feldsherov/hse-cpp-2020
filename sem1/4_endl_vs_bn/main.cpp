#include <iostream>
#include <thread>
#include <chrono>

int main() {
  std::cout << "Hi!" << std::endl;
  std::cerr << "Happy to meet you.";
  std::cout << "You  are cool! \n";
  std::this_thread::sleep_for(std::chrono::minutes(1));
  return 0;
}
