#include <iostream>
#include <type_traits>

template< typename T>
struct has_kek
{
    /* Has destructor :) */
    template <typename A>
    static std::true_type test(decltype(std::declval<A>().kek()) *) {
        return std::true_type();
    }

    /* Has no destructor :( */
    template<typename A>
    static std::false_type test(...) {
        return std::false_type();
    }

    /* This will be either `std::true_type` or `std::false_type` */
    using type = decltype(test<T>(0));

    static const bool value = type::value; /* Which is it? */
};

template <typename container, typename std::enable_if<!has_kek<container>::value, void>::type>
void print_size(container c) {
  std::cout << c.size() << std::endl;
}

template <typename keker, typename std::enable_if<has_kek<keker>::value, void>::type>
void print_size(keker_t keker_obj) {
  std::cout << keker_obj.kek() << std::endl;
}

struct keker_t {
  void kek() {
    std::cout << "kek" << std::endl;
  }
};

int32_t main() {
  print_size(keker_t())
}
