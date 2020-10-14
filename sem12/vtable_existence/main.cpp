#include <iostream>

class A {
  public:
  void foo() {
    std::cout << a_ << "non virtual";
  }
  int a_ = 179;
};

class E {
  virtual void foo() = 0;
  virtual void kek() = 0;
};

class B {
  public:
  virtual void foo() = 0;
};

void lol() noexcept {
  std::cout << "i am noexcept" << std::endl;
}

class C final : public B {
  public:
  void foo() override {
    std::cout << a_;
  }

  int a_ = 179;
};

class D : public B {
  public:
  void foo() override {
    std::cout << a_ + 10;
  }

  int a_ = 179;
};

struct T {
  char c;
  int* p;
  char k;
};

int main() {
  A a;
  C c;
  D d;
  std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
  std::cout << "sizeof(A) = " << sizeof(A) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "sizeof(B) = " << sizeof(B) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "sizeof(c) = " << sizeof(c) << std::endl;
  std::cout << "sizeof(C) = " << sizeof(C) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "sizeof(d) = " << sizeof(d) << std::endl;
  std::cout << "sizeof(D) = " << sizeof(D) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "sizeof(E) = " << sizeof(E) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "sizeof(E) = " << sizeof(T) << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << reinterpret_cast<void*>(lol )<< std::endl;
  std::cout << reinterpret_cast<void*>(lol )<< std::endl;
}
