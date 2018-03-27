all: hello

hello: main.o List.o Phone.o Except.o
	g++ main.o List.o Phone.o Except.o -o hello

main.o: main.cpp
	g++ -c main.cpp

List.o: List.h List.cpp
	g++ -c List.h List.cpp

Phone.o: Phone.h Phone.cpp
	g++ -c Phone.h Phone.cpp

Except.o: Except.h Except.cpp
	g++ -c Except.h Except.cpp
clean:
	rm -rf *.o hello
