#ifndef BST_H
#define BST_H
#include "tnode.h"
class BST{
	private:
		tNode *root; //points to the root node of a binary search tree
		//define utility functions such as maximum, minimum, successor, createNode
		tNode* treeMin(tNode *); //find the minimum value in the binary search tree by finding leftmost child
		tNode* treeMax(tNode *); //find the maxiumum value in the BST by finding rightmost child
		tNode* treeSuccessor(tNode *);	//find successor which is the node with the smallest key greater than x->key (key of node x)
		tNode* createNode(); 
		void inOrder(tNode *root); //write this function using recursion 
		void preOrder(tNode *root);
		void postOrder(tNode *root);
	public:
		BST(); //initiate root as NULL 
		~BST(); //clean--get rid of--all notes in the binary search tree
		void inOrder();	  //call private recursive function	
		void preOrder();  //call private recursive function 		(use utility function printNode)
		void postOrder(); //call private recursive function
		void bstInsert(*tNode root, *tNode z); //pass in the root and the node you want to insert 
		void bstDelete(*tNode root, *tNode z); //pass in the root and the node you want to delete
		tNode* treeSearch(tNode *, int data); //search for a node in the binary tree, pass root pointer and int key, and then   
}

#endif
