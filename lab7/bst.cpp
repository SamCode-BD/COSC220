#include <iostream>
#include "bst.h"
#include "tnode.h"

using namespace std;

BST::BST(){
	root = NULL;
}

BST::~BST(){
	cout << "Binary Search Tree is destroyed" << endl;
}
tNode* BST::createNode(){
	tNode *newNode = new tNode();
	return newNode;
}

void BST::inOrder(tNode *root){
	if (root != NULL){
		inOrder(root->left);
		root->printNode();
		inOrder(root->right);
	}
}

void BST::preOrder(tNode *root){
	if (root != NULL){
		root->printNode();
		preOrder(root->left);
		preOrder(root->right);
	}
}

void BST::postOrder(tNode *root){
	if (root != NULL){	
		postOrder(root->left);   
		postOrder(root->right);
		root->printNode();
	}
}

void BST::bstInsert(){
	tNode *z = createNode(); //set z as new node you created
	tNode *y = NULL; //create tmp node y
	tNode *x = root; //create tmp node x and set it to root
	while (x != NULL){ //while root is not null
		y = x; //set y = to the tmp value that points to root, so y points to x points to root
		if (z->data < x->data) // if the data of newNode is less than the data of X, then set x equal to x left child
			x = x->left;
		else if	(z->data > x->data)		// else if data of newNode is (equal or) greater than the data of x, set x equal to x right child
			x = x->right;  
		else
			cout << "Duplicate value" << endl;
			delete z;
			return;
	}
	z->parent = y; //set the parent of newNode to the tmp pointer that points to x, which is now pointing to correct location from previous while loop
	if (y == NULL) //if there is a node in the binary search tree
		root = z; //newNode becomes root
	else if (z->data < y->data)
		y->left = z; //insert new node
	else
		y->right = z; //insert new node
}

void BST::bstDelete(){
	int key = 0;
	cout << "Enter the value of the node you would like to delete" << endl;
	cin >> key;
	tNode *z = treeSearch(key); //newNode z is the location of node you would like to delete, uses treeSearch function and local key variable to find it
	tNode *y, *x; //tmp node pointer for assignment
	if (z->left == NULL || z->right == NULL)
		y = z;
	else
		y = treeSuccessor(z);
	if (y->left != NULL)
		x = y->left;
	else
		x = y->right;
	if (x != NULL)
		x->parent = y->parent;
	if (y->parent == NULL)
		root = x;
	else if (y == y->parent->left)
		y->parent->left = x;
	else
		y->parent->right = x;
	if (y!=z)
		z->data = y->data;
	delete y;
}

void BST::inOrder(){
	inOrder(root); //public recursive call of function
}

void BST::preOrder(){
	preOrder(root); //public recursive call of function
}

void BST::postOrder(){
	postOrder(root); //public recursive call of function
}

tNode* BST::treeSearch(int data){
	tNode* y = root; //tmp variable to not modify root
	while (y != NULL && data != y->data){
		if (data < y->data)
			y = y->left;
		else
			y = y->right;
	}
	return y; //return tmp variable which gives location
}

tNode* BST::treeMin(tNode* root){
	tNode* y = root;
	while (y->left != NULL)
		y = y->left;
	return y;
}

tNode* BST::treeMax(tNode* root){
	tNode* y = root;
	while (y->right != NULL)
		y = y->right;
	return y;
}

tNode* BST::treeSuccessor(tNode* x){
	if (root->right != NULL)
		return treeMin(root->right);
	else{
		tNode* y = root->parent;
		while (y != NULL && root == y->right){
			root = y;
			y = y->parent;
		}
		return y;
	}
}
