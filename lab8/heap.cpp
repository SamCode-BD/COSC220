#include "heap.h"
#include <iostream>

using namespace std;

Heap::Heap(){
	heapSize = 10;
	int B[] = {4,12,3,19,23,5,32,11,2,24};
	for (int i = 0; i <heapSize; i++){
		A[i] = B[i]; 
	}
}

int Heap::parent(int i){
	if (i%2 == 0)
		return ((i-1)/2);
	else
		return (i/2);	
}

int Heap::leftChild(int i){
	return (2*i)+1;
}

int Heap::rightChild(int i){
	return (2*i)+2;
}

void Heap::heapify(int i){
	int L = leftChild(i); //set variable equal to left child index
	int R = rightChild(i); //set equal to rc index
	int largest, tmp; //declare
	if (L <= heapSize && A[L] > A[i]) //if index left less than heap size and value of left index greater than value of passed index
		largest = L; //set largest equal to Left child index
	else
		largest = i; //set largest equal to passed 
	if (R <= heapSize && A[R] > A[largest]) // if right less than or euqla to heap size and right value greater than largest value set largest = to r
		largest = R; 
	if (largest != i){ //if largest not equal to index swap and heapify
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		heapify(largest);
	}
}

void Heap::buildHeap(){
	int i, A; 
	heapSize = A;
	for (i =((A/2) -1); i > 0; i--) //might need to be i = 0 not sure if this for loop written correctly 
		heapify(i);
}

void Heap::insert(int key){
	heapSize = heapSize + 1;
	int i = heapSize - 1;
	while (i>0 && A[parent(i)] < key){
		A[i] = A[parent(i)];
		i = parent(i);
	}
	A[i] = key;
}

void Heap::heapSort(){
	int tmp;
	int A = heapSize;
	buildHeap();
	for (int i = A-1; i >= 1; i--){ // might need i-- again 	
		tmp = A[0];
		A[0] = A[i];
		A[i] = tmp;
		heapify(0);
		}
}

int Heap::extractMax(){
	if (heapSize < 1)
		cout << "error heap underflow" << endl;
	else {
		int max = A[0];
		A[0] = A[heapSize-1];
		heapSize = heapSize -1;
		heapify(0);
		return max;
	}	
}

int Heap::maximum(){
	int largest = A[0];
	for (int i = 0; i < heapSize; i++){
		if (A[i] > largest){
			largest = A[i];
		}
	}
	return largest;
}

void Heap::printHeap(){
	for (int i = 0; i < heapSize; i++)
		cout << A[i];
}
