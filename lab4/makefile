all: Prog

Prog: Node.o LinkedList.o lab4.o
	g++ Node.o LinkedList.o lab4.o -o Prog

Node.o: Node.cpp
	g++ -c Node.cpp

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp

lab4.o: lab4.cpp
	g++ -c lab4.cpp

clean:
	rm -rf *o Prog
