#include <type_traits>
#include <iostream>


class NonCopiable {
  public:
  NonCopiable() = default;
  NonCopiable(NonCopiable&& other) = default;
  NonCopiable(const NonCopiable& other) = delete;

  int id = 179;
};

template <class T>
void swap(T& a, T& b)
{
    static_assert(std::is_copy_constructible<T>::value,
                  "Swap requires copying");
    static_assert(std::is_nothrow_copy_constructible<T>::value
               && std::is_nothrow_copy_assignable<T>::value,
                  "Swap requires nothrow copy/assign");
    auto c = b;
    b = a;
    a = c;
}

int main() {
  NonCopiable first;
  NonCopiable second;

  swap(first, second);
  return 0;
}
