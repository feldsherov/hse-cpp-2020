CXX = clang++
CXXFLAGS = -O2 -std=c++17

all: main_lib main_pure

main_lib: main.o registrator.o lib.o
	$(CXX) main.o lib.o registrator.o -o main_lib

main_pure: main.o registrator.o
	$(CXX) main.o registrator.o -o main_pure

registrator.o:
	$(CXX) registrator.cpp -c $(CXXFLAGS) -o registrator.o

lib.o:
	$(CXX) lib.cpp -c $(CXXFLAGS) -o lib.o

main.o:
	$(CXX) main.cpp -c $(CXXFLAGS) -o main.o

clean:
	rm -rf *.o main_*
