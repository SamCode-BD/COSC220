#include <iostream>
#include <iomanip>
#include "link.h"

using namespace std; 

int main(){
	Node *list = nullptr; 
	int choice = 0, key, n; 
	while (choice != 5){
	cout << "1. Insert a node" << endl;
	cout << "2. Delete a node" << endl;
	cout << "3. Print List" << endl;
	cout << "4. Search a node and print student information" << endl;
	cout << "5. Quit the program" << endl;
		cin >> choice; 
		while (choice < 1 || choice > 5){
			cout << "Invalid choice." << endl;  
			cin >> choice;
		}
		switch (choice){
			case 1: 
			list = insertNode(list);
			break; 
			case 2:
			cout << "Enter the ID number of the student you would like to delete." << endl;
			cin >> n; 
			list = deleteNode(list, n);
			break;
			case 3:
			printList(list);
			break; 
			case 4:
			cout << "Enter the ID number you would like to search for." << endl;
			cin >> key;
			searchNode(list, key); 
			break;
			case 5:
			return 0;  
		}
	choice = 0; 
	}
}

