#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(){
	LinkedList myList;
	int choice = 0, id;
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
                        myList.insertNode();
                        break;
                        case 2:
                        cout << "Enter the ID number of the student you would like to delete." << endl;
                        cin >> id;
                        myList.deleteNode(id);
                        break;
                        case 3:
                        myList.printList();
                        break;
                        case 4:
                        myList.searchNode();
                        break;
                        case 5:
			myList.~LinkedList();
                        return 0;
                }
        choice = 0;
        }
	
}
