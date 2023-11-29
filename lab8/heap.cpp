#include "heap.h"
#include <iostream>

using namespace std;

Heap::Heap(){
	heapSize = 10;
	//int B[] = {4,12,3,19,23,5,32,11,2,24};
	//for (int i = 0; i <heapSize; i++){
//		A[i] = B[i]; 
//	}
	A[0] = 4;
	A[1] = 12;
	A[2] = 3;
	A[3] = 19;
	A[4] = 23;
	A[5] = 5;
	A[6] = 32;
	A[7] = 11;
	A[8] = 2;
	A[9] = 24;
	buildHeap(); cout << "calling" << endl;
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
	if (L < heapSize && A[L] > A[i]) //if index left less than heap size and value of left index greater than value of passed index
		largest = L; //set largest equal to Left child index
	else
		largest = i; //set largest equal to passed 
	if (R < heapSize && A[R] > A[largest]) // if right less than or euqla to heap size and right value greater than largest value set largest = to r
		largest = R; 
	if (largest != i){ //if largest not equal to index swap and heapify
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		heapify(largest);
	}
}

void Heap::buildHeap(){
	int i;
	for (i =((heapSize/2) -1); i > 0; i--){ //might need to be i = 0 not sure if this for loop written correctly 
		heapify(i); //call heapify with modified i value
		cout << endl; cout << endl;
		printHeap();
	}
}

void Heap::insert(int key){
	heapSize = heapSize + 1; //add one to the heap size because you are inserting an element
	int i = heapSize - 1; // set i value to heap size before insert
	while (i>0 && A[parent(i)] < key){ //while i is greater than 0 and the value of the parent indexx is less than the key
		A[i] = A[parent(i)]; // set the value of the array at index i to the value of the array at the index of the parent
		i = parent(i); //set the i value to the value of parent index
	}
	A[i] = key; //set the value of the array at index i to the value of what is being inserted
}

void Heap::heapSort(){
	int tmp; //create tmp for swap later
	int tmpSize = heapSize; //create tmp size so heapsize doesn't have to change
	//buildHeap();
	for (int i = tmpSize-1; i >= 1; i--){ // might need i-- again 	
		tmp = A[0];   ///swap
		A[0] = A[i];
		A[i] = tmp;
		heapify(0); //call heapify with value 0
		}
}

int Heap::extractMax(){
	if (heapSize < 1) //if heap size less than one throw error
		cout << "error heap underflow" << endl;
	else {
		int max = A[0];		//create an int max and set it to the value of the array at index 0
		A[0] = A[heapSize-1];	// set the value of the array at index 0 to the value of the array at the index of heapsize minus one
		heapSize = heapSize -1;	// decrease heap size by one
		heapify(0);		//call heapify with value 0
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
		cout << A[i] << endl;
}
