#include <iostream>

void print_example() {
  std::cout << "printExample" << std::endl;
  auto printFunc = [](auto t) {
    std::cout << t << std::endl;
  };

  printFunc(10);
  printFunc("str");
}

class NonCopiable {
  public:
  NonCopiable() = default;
  NonCopiable(NonCopiable&& other) = default;
  NonCopiable(const NonCopiable& other) = delete;

  int id = 179;
};

void noncopiable_example(){
  NonCopiable ncp;

  auto testFunc = [ncp=std::move(ncp)]() {
    std::cout << ncp.id << std::endl;
  };

  testFunc();
}

int main() {
  print_example();
  noncopiable_example();
  return 0;
}
