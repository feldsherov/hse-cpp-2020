#include <iostream>
#include <vector>
#include <set>

struct Foo {
};

template<typename T> 
struct Baz {
};


template<typename Container>
void print_value_type() {
  // note this typename
  // https://stackoverflow.com/questions/7923369/when-is-the-typename-keyword-necessary
  std::cerr << typeid(typename Container::value_type).name() << std::endl;
}


int32_t main() {
  print_value_type<std::set<int>>();
  print_value_type<std::vector<Foo>>();
  print_value_type<std::vector<Baz<Foo>>>();
}
