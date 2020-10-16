#include <iostream>

template<typename T>
concept has_foo = requires(T a) {
    { a.foo() };
 };

template<typename T>
concept has_baz = requires(T a) {
    { a.baz() };
};

template<has_foo T>
void f(T t) {
  std::cout << t.foo() << std::endl;
} // constrained C++20 function template

template<has_baz T>
void f(T t) {
  std::cout << "Hi I am new!" << std::endl;
} // constrained C++20 function template

class type_with_foo {
public:
  bool foo() {return true;};
};

class type_without_foo {
public:
  bool baz() {return true;};
};

int main() {
  f(type_with_foo());
  f(type_without_foo());
}
