#ifndef SHOP_H
#define SHOP_H

struct Node{
	int itemNum;
	char itemName[40];
	double unit; //for pound or number of unit
	double tax;
	double subtotal;
	Node *next; 
};

Node *createItem(); 
Node *insertItem(Node*);
Node *deleteItem(Node*, int);
void print(Node*); 
void outputFile(Node*);
#endif
