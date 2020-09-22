#include <iostream>

class A {
public:
	A() {
		std::cout << "constructor\n";
	}

	int val = 0;
};

void foo(int x) {
	std::cout << "Foo: " << x << '\n';
	static A a;
	++a.val;
	std::cout << "a.val = " << a.val << '\n';
}

void baz(int x) {
	std::cout << "Baz: " << x << '\n';
	A a;
	++a.val;
	std::cout << "a.val = " << a.val << '\n';
}

int main() {
	foo(0);
	foo(1);
	std::cout << '\n';
	baz(0);
	baz(1);
}
