#include "tnode.h"
#include "bst.h"
#include <iostream>

using namespace std;

tNode::tNode(){
	parent = NULL;
	left = NULL;
	right = NULL;
}

void tNode::printNode(){
	cout << tNode->data << endl;
}
