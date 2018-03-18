all: test

test: build2
	./prog2

build1: libdy.so main.o
	g++  -Wl,-rpath=/home/olya/Documents/practice/cs-training/hashing-test -L  main.o -o prog1  -ldy

build2:  libdy.so main.o
	g++ -I. -L. main.cpp -o prog2 -ldy
	sudo mv libdy.so /usr/lib
	sudo chmod 755 /usr/lib/libdy.so

libdy.so: SHA_256_hak.o
	g++ -shared SHA_256_hak.o -o libdy.so


SHA_256_hak.o: SHA_256_hak.cpp
	g++ -c -fPIC SHA_256_hak.cpp

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm -rf *o prog* log.txt
