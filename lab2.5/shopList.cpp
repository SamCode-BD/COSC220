#include <iostream>
#include <fstream>
#include "shop.h"

using namespace std;

int main(){
	Node *list = nullptr;
	int choice = 0, n; 
	while (choice != 4){
	cout << "1. Insert an item into the list" << endl;
	cout << "2. Print the currently selected item" << endl;
	cout << "3. Delete an item from the list" << endl;
	cout << "4. Create a receipt in an output file and stop" << endl; 
	cin >> choice;
	while (choice < 1 || choice > 4){
		cout << "Invalid choice, please try again." << endl;
		cin >> choice; 
	}	
	switch (choice){
		case 1: 
		list = insertItem(list);
		break;
		case 2: 
		//call print function
		print(list);
		break;
		case 3:
		cout << "Enter the number of the item you would like to delete." << endl;
		cin >> n;
		deleteItem(list, n);
		//ask for item to delete, take in number,  call delete function
		break;
		case 4:
		//call output function
		outputFile(list);
		return 0;
		}
	choice = 0;  
	}
}

