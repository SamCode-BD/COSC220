#ifndef BST_H
#define BST_H
#include "tnode.h"
class BST{
	private:
		tNode *root; //points to the root node of a binary search tree
		//define utility functions such as maximum, minimum, successor, createNode
		tNode* treeMin(tNode*); //find the minimum value in the binary search tree by finding leftmost child
		tNode* treeMax(tNode*); //find the maxiumum value in the BST by finding rightmost child
		tNode* treeSuccessor(tNode *);	//find successor which is the node with the smallest key greater than x->key (key of node x), utility function for delete, the tNode being passed will come from delete function
		tNode* createNode(); 
		void inOrder(tNode *); //write this function using recursion 
		void preOrder(tNode *);
		void postOrder(tNode *);
	public:
		BST(); //initiate root as NULL 
		~BST(); //clean--get rid of--all notes in the binary search tree
		void inOrder();	  //call private recursive function	
		void preOrder();  //call private recursive function 		(use utility function printNode)
		void postOrder(); //call private recursive function
		void bstInsert(); //
		void bstDelete(); //pass in the node you want to delete
		tNode* treeSearch(int); //search for a node in the binary tree, pass int key, and then   
};

#endif
