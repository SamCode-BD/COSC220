#ifndef STACK_H
#define STACK_H

template <class DataType>
struct StackNode {
	DataType data;		//data can be of any type
	StackNode<DataType> *next; //pointer to the next node
};

template <class DataType>
class Stack{
	private:
		StackNode<DataType> *top; //pointer to the top of the node in the stack
		int maxSize;	//maximum size of the stack
		int numNodes;	//number of nodes in the stack
	public:
		Stack (int = 5);		// constructor, create a stack with default size 10
		~Stack();			//destructor
		bool isEmpty() const;		//check if stack is empty
		bool isFull() const;		//check if stack is full
		void push(const DataType);	//push a node onto the top of the stack
		void pop();			//pop a node from the top of the stack
		DataType topStack() const;	//return data from the top of the stack
};

#endif
