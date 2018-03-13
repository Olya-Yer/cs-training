all: build

build1: libdy.so main.o
	g++ -o prog1 main.o mining.h -L -ldy -Wl,-rpath=/home/olya/Documents/practice/cs-training/hashing-test

build2:  libdy.so main.o
	g++ main.o mining.h -L -ldy -o prog2

libdy.so: SHA_256_hak.o
	g++ -shared SHA_256_hak.o -o libdy.so


SHA_256_hak.o: SHA_256_hak.cpp
	g++ -c -fPIC SHA_256_hak.cpp

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm -rf *o prog
