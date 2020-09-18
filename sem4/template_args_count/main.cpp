#include <iostream>

template<typename T, typename... Args>
int get_args_cnt(T t, Args... args) {
	return 1 + get_args_cnt(args...);
}

template<typename T>
int get_args_cnt(T t) {
	return 1;
}

int main() {
	std::cout << get_args_cnt(1, "Hello World!", 3.1415, [&]() { return 42; }) << '\n';
}
