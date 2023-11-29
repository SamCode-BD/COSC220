all: Prog
	
Prog: lab8.o heap.o
	g++ lab8.cpp heap.cpp -o Prog
lab8.o: lab8.cpp
	g++ -c lab8.cpp
heap.o: heap.cpp
	g++ -c heap.cpp
clean:
	rm rf *o Prog                                                                                                                                                                                                              
