#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdint>

using i32 = int32_t;


template<typename T>
T GCD(T a, T b);


template<typename T>
class Polynomial {
private:
    std::vector<T> data_;

public:
    T one = T{1};
    T minus_one = T{-1};
    T zero = T{0};

    using Iterator = typename std::vector<T>::iterator;
    using ConstIterator = typename std::vector<T>::const_iterator;

    Polynomial() = default;

    Polynomial(const std::vector<T> &v);  // NOLINT(google-explicit-constructor)

    template<typename K>
    Polynomial(const K &x);  // NOLINT(google-explicit-constructor)

    template<typename It>
    Polynomial(It first, It last);

    Iterator begin();

    ConstIterator begin() const;

    Iterator end();

    ConstIterator end() const;


    i32 Degree() const;

    const std::vector<T> &GetData() const;

    std::vector<T> &GetData();

    Polynomial operator+() const;

    const T &operator[](size_t i) const;

    friend bool operator==(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend bool operator!=(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> &operator+=(Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> &operator-=(Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> &operator*=(Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator+(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator-(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator*(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator&(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend std::pair<Polynomial, Polynomial> Division(Polynomial<T> p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator/(const Polynomial<T> &p1, const Polynomial<T> &p2);

    friend Polynomial<T> operator%(const Polynomial<T> &p1, const Polynomial<T> &p2);

    T operator()(const T &x) const;

    friend Polynomial<T> operator,(const Polynomial<T> &p1, const Polynomial<T> &p2);
};


template<typename T>
std::ostream &operator<<(std::ostream &out, const Polynomial<T> &p);

// int main() {
//    Polynomial<double> p1({1, 2, 3});
//    Polynomial<double> p2(5);
//    Polynomial<double> p3(0);
//    Polynomial<double> p4({1, 0, 0, 0, 0, 0, 2, -3, 1, 0, 0, 0});
//    Polynomial<double> p5({0, 0, 0, 0, 0, 0});
//    Polynomial<double> p6({0, -2, 0, 0, 4});
//    Polynomial<double> p7({-1, -7, -2, 3, -1});
//
//    Polynomial<double> p8({-1, 0, 0, 1, 8, 0, -1, 2});
//    Polynomial<double> p9({3, -1, 0, 2});
//    Polynomial<double> p0(0);
//
//    std::vector<Polynomial<double>> polynomials = {p1, p2, p4, p6, p7, p8, p9};
//
//
//    std::cout << "+ : " << (p4 / p2) << '\n';
//
//    for (auto& x : polynomials) {
//        for (auto& y : polynomials) {
//            std::cout << "+ : " << (x / y) << '\n';
//            std::cout << "- : " << (x % y) << '\n';
//            std::cout << "- : " << (x, y) << '\n';
//            std::cout << "+ : " << (x - y) << '\n';
//            std::cout << "- : " << (x + y) << '\n';
//            std::cout << "- : " << (x & y) << '\n';
//            std::cout << "- : " << (x == y) << '\n';
//            std::cout << "- : " << (x != y) << '\n';
//        }
//        std::cout << "----\n";
//    }
// }
