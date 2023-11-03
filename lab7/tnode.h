#ifndef TNODE_H
#define TNODE_H

class tNode{
	private:
		tNode *parent;	//point to the parent node
		tNode *left;	//point to the left child
		tNode *right;	//point to the right child
		int data;	//store integer data for node(This space will be used for template data next lab)
	public:
		tNode(); 	//constructor that initiates all pointers to null;
		void printNode(); //member function to print node information
		friend class BST;
	// need to define class BST as a friend class of tNode;
};

#endif
