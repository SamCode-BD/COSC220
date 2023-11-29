#ifndef HEAP_H
#define HEAP_H
#include <iostream>
using namespace std;
class Heap{
//might need pass array to everything idk
private: 
	int A[100]; //maximum space for heap
	int heapSize; //size of heap
	int parent(int); //return parent of index i
	int leftChild(int); //return left child of i
	int rightChild(int); // return right child of i 
	void heapify(int);
	void buildHeap();
public:
	Heap();
	void insert(int); //insert new data into heap, might need to pass array and index
	void heapSort(); 
	int extractMax(); //extract maximum data from Heap
	int maximum(); // return max value from Heap
	void printHeap();
};


#endif

