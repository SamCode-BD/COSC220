#include <iostream>
#include "Stack.h"
#include "Students.h"

template <class DataType>
Stack<DataType>::Stack(int x){
	maxSize = x; 
	numNodes = 0; 
	top = nullptr;
}

template <class DataType>
Stack<DataType>::~Stack(){
	while (!isEmpty())
		pop();
}
template <class DataType>
void Stack<DataType>::push(DataType data){
	//first call the is full function to see and if it full then say u cant add anymore and return
//	if (isFull()){
//		cout << "Stack is full, cannot push" << endl; 
//	}
//	else {
	// Students* student = new Students();
	StackNode<DataType> *newNode = new StackNode<DataType>;  
	newNode->data = data;	
	newNode->next = NULL; 
	if (isEmpty()) 
		top = newNode;
	else{
		newNode->next = top;
		top = newNode;
	}
	if (numNodes < maxSize)
		numNodes++;
//	}	
}

template <class DataType>
void Stack<DataType>::pop(){
	if (isEmpty()){
		cout << "Stack is empty, cannot pop" << endl;
	}
	else {
		StackNode<DataType> *tmp = top;
		top = top->next; 
		delete tmp; 
	}
	if (numNodes > 0)
		numNodes--;	
}

template <class DataType>
DataType Stack<DataType>::topStack() const{
	if (!isEmpty())
			return top->data;
}

template <class DataType>
bool Stack<DataType>::isFull() const{
	if (numNodes == maxSize)
		return true;
	else 
		return false;
}

template <class DataType>
bool Stack<DataType>::isEmpty() const{
	if (numNodes == 0)
		return true;
	else 
		return false;
}
