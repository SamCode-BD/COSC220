all: Prog

Prog: Card.o main.o
	g++ Card.cpp main.cpp -o Prog
Card.o: Card.cpp
	g++ -c Card.cpp
main.o: main.cpp
	g++ -c main.cpp
clean: 
	rm rf *o Prog
