all: List

List: linkFun.o linkedList.o
	g++ linkFun.o linkedList.o -o List

linkFun.o: linkFun.cpp
	g++ -c linkFun.cpp

linkedList.o: linkedList.cpp
	g++ -c linkedList.cpp

clean: 
	rm -rf *o List
