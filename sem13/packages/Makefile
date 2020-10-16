build_and_run: build_debug run

run:
	./a.out

build_debug:
	clang++-10 -std=c++20 -fmodules-ts --precompile math.cppm -o math.pcm
	clang++-10 -std=c++20 -fmodules-ts -c math.pcm -o math.o
	clang++-10 -std=c++20 -fmodules-ts -fprebuilt-module-path=. math.o main.cpp
