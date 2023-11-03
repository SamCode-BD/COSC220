#ifndef LINK_H
#define LINK_H

struct Node{
	char lastName[20]; //student's last name
	char firstName[20]; //student's first name
	int idNumber; //Student's ID number
	Node *next; //pointer to the next node
};

Node *createNode();
Node *insertNode(Node *);
Node *searchNode (Node*, int);
Node *deleteNode(Node*, int);
void printList(Node*);

#endif
