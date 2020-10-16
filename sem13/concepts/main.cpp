#include <iostream>

// Declaration of the concept "Hashable", which is satisfied by
// any type 'T' such that for values 'a' of type 'T',
// the expression std::hash<T>{}(a) compiles and its result is convertible to std::size_t
template<typename T>
concept has_foo = requires(T a) {
    { a.foo() };
};

template<has_foo T>
void f(T t) {
  std::cout << t.foo() << std::endl;
} // constrained C++20 function template

// Alternative ways to apply the same constraint:
// template<typename T>
//    requires Hashable<T>
// void f(T);
//
// template<typename T>
// void f(T) requires Hashable<T>;

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
