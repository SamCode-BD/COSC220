#ifndef QUEUE_H
#define QUEUE_H

template <class DataType>
struct QNode{
	DataType data;
	QNode<DataType> *next;
};

template <class DataType>
class Queue{
private:
	QNode<DataType> *front;
	QNode<DataType> *back;
	int qSize; //size of a queue
	int qCount;// element count of queue
public:
	Queue(int = 5); //class constructor with default qSize
	~Queue();	//destructor, remove all memory spaces used by queue elements
	void enQueue(const DataType); 	//add an item to the back of the queue;
	DataType deQueue();		//remove the first item from the queue and return its value ptrname->valuename
	DataType topQueue() const;	//return the value of the first item in the queue
	bool isEmpty() const;		//returns true if no elements in the queue, else false
	bool isFull() const; 		//returns true if there is no system memory for a new queue node
};

#endif
