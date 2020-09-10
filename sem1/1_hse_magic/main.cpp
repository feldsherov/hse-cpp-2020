#include <iostream>

bool has_special_symbols(const std::string_view s) {
  static const std::string special_symbols = "#$%^{}[]№@()";
  // https://en.cppreference.com/w/cpp/string/basic_string/find_first_of
  return s.find_first_of(special_symbols) != std::string::npos;
}

void foo(std::string& s) {
  s[0] = 'l';
  std::cout << s << std::endl;
}

void baz(std::string& s) {
  std::cout << s << std::endl;
}

int main() {
  char* cs = "kek";
  // https://en.cppreference.com/w/cpp/string/basic_string/basic_string 
  // basic_string( const CharT* s,
  //          const Allocator& alloc = Allocator() );
  // constructor works
  foo(cs);
  baz(cs);
  std::cout << has_special_symbols("факультет компьютерных наук") << std::endl;
  return 0;
}
