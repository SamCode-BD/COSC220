#ifndef NODE_H
#define NODE_H
class Node{
public:
	char lastName[20];
	char firstName[20];
	int id;
	Node *next; 
	Node(); 
	~Node();
	void printNode(); 
};

#endif
