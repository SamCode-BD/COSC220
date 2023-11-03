#include "Queue.h"
#include <iostream>
using namespace std;

template <class DataType>
Queue<DataType>::Queue(int x){
	qSize = x;
	qCount = 0;
	front = NULL;
	back = NULL;
}

template <class DataType>
Queue<DataType>::~Queue(){
	while (!isEmpty())
		deQueue();
}

template <class DataType>
void Queue<DataType>::enQueue(DataType data){
	QNode<DataType> *newNode = new QNode<DataType>;
	newNode->data = data;
	newNode->next = NULL;
	if (isEmpty()){
		front = newNode;
		back = newNode;
	}
	else{
	//	newNode->next = back;
	//	back = newNode;
		back->next = newNode;
		back = newNode;
	}			
	if (!isFull())
		qCount++; 
}

template <class DataType>
DataType Queue<DataType>::deQueue(){
	if (isEmpty())
		cout << "Queue is empty, cannot deQueue" << endl;
	else{
		QNode<DataType> *tmp = front;
		front = front->next;
		delete tmp;
	}
	if (!isEmpty())
		qCount--; 
}

template <class DataType>
DataType Queue<DataType>::topQueue() const{
	if (!isEmpty())
		return front->data;	
}

template <class DataType>
bool Queue<DataType>::isEmpty() const{
	if (qCount == 0)
		return true;
	else
		return false;
}

template <class DataType>
bool Queue<DataType>::isFull() const{
	if (qCount == qSize)
		return true;
	else 
		return false;
}
