#include "tnode.h"
#include "bst.h"
#include <iostream>

using namespace std;

tNode::tNode(){
	parent = NULL;
	left = NULL;
	right = NULL;
	cout << "Enter the integer data for the node" << endl;
	cin >> data;
}

void tNode::printNode(){
	cout << data << endl;
}
