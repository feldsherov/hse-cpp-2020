#include <iostream>

class Counter {
  public:
    int32_t inc() {
      return cnt++;
    }
  
  private:
    int32_t cnt = 0;
};

template<typename T>
T& Singleton() {
  static T value;
  return value;
}

int main() {
  auto& counter1 = Singleton<Counter>();
  std::cout << counter1.inc() << std::endl;
  auto& counter2 = Singleton<Counter>();
  std::cout << counter2.inc() << std::endl;
  return 0;
}
