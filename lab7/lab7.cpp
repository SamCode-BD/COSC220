#include <iostream>
#include "tnode.h"
#include "bst.h"

using namespace std;

int main(){
	int choice = 0;
	char choice1;
	BST myTree;
	cout << "Welcome to Binary Search Tree Program!" << endl;
	cout << "You have four options: " << endl;
	cout << endl;
	while (choice != 4){
		cout << "1. Insert element into the tree" << endl;
		cout << "2. Delete element from the tree" << endl;
		cout << "3. Check binary tree by printing" << endl;
		cout << "	a. inOrder" << endl;
		cout << "	b. postOrder" << endl;
		cout << "	c. preOrder" << endl;
		cout << "4. Quit the program" << endl;
		cin >> choice;
		while (choice < 1 || choice > 4){
			cout << "Invalid selection. Try again." << endl;
			cin >> choice;
		}
		switch (choice){
			case 1:
				myTree.bstInsert();
				break;
			case 2:
				myTree.bstDelete();
				break;
			case 3:
				cout << "Select which kind of print (a,b,c)" << endl;
				cin >> choice1;
				while ((int)choice1 < 97 || (int)choice1 > 99){
					cout << "Invalid selection. Try again." << endl;
					cin >> choice1;
				}
				if (choice1 == 'a')
					myTree.inOrder();
				else if (choice1 == 'b')
					myTree.postOrder();
				else
					myTree.preOrder();
				break;
			case 4:
				exit(0);
				break;
		}
	}
	choice = 0;
}
