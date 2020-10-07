CXX = clang++
CXXFLAGS = -O2 -std=c++17

main: main.o lib.o
	$(CXX) main.o lib.o -o main

lib.o:
	$(CXX) lib.cpp -c $(CXXFLAGS) -o lib.o

main.o:
	$(CXX) main.cpp -c $(CXXFLAGS) -o main.o

clean:
	rm -rf *.o main
