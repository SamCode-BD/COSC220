all: shopLL

shopLL: shopFun.o shopList.o
	g++ shopFun.o shopList.o -o shopLL

shopFun.o: shopFun.cpp
	g++ -c shopFun.cpp

shopList.o: shopList.cpp
	g++ -c shopList.cpp

clean:
	rm -rf *o shopLL
