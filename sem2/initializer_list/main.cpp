#include <iostream>
#include <vector>

int main() {
  std::vector<int32_t> v1;
  std::cout << "v1: v1.size() = " << v1.size() << std::endl;

  std::vector<int32_t> v2();

  std::vector<int32_t> v3(5);
  std::cout << "v3(5): v3.size() = " << v3.size() << std::endl;

  std::vector<int32_t> v4(5, 0);
  std::cout << "v4(5, 0): v4.size() = " << v4.size() << std::endl;

  std::vector<int32_t> v5{};
  std::cout << "v5{}: v5.size() = " << v5.size() << std::endl;
  
  std::vector<int32_t> v6{5};
  std::cout << "v6{5}: v6.size() = " << v6.size() << std::endl;

  std::vector<int32_t> v7({5});
  std::cout << "v7({5}): v7.size() = " << v7.size() << std::endl;

  std::vector<int32_t> v8{5, 0};
  std::cout << "v8{5, 0}: v8.size() = " << v8.size() << std::endl;

  std::initializer_list<int32_t> example{1, 2, 3};
  for (const auto& value: example) {
    std::cout << value << " ";
  }
  return 0;
}
