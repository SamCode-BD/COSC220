all: Prog

Prog: bst.o tnode.o lab7.o
	g++ bst.o tnode.o lab7.o -o Prog
bst.o: bst.cpp
	g++ -c bst.cpp
tnode.o: tnode.cpp
	g++ -c tnode.cpp
lab7.o: lab7.cpp
	g++ -c lab7.cpp
clean: 
	rm rf *o Prog
	
