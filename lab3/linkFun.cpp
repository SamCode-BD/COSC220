#include <iostream>
#include "link.h"

using namespace std;

Node *createNode(){
	Node* newNode = new Node;
	newNode->next = NULL;
	cout << "Enter student's last name." << endl;
	cin >> newNode->lastName;
	cout << "Enter student's first name." << endl;
	cin >> newNode->firstName;
	cout << "Enter student's id number." << endl;
	cin >> newNode->idNumber;
	return newNode; 
}

Node *insertNode(Node *list){
	Node* newNode = createNode();
	if (list == nullptr){
		list = newNode; 
		return list;
	}
	Node* tmp = list; 
	if (newNode->idNumber < tmp->idNumber){
		list = newNode;
		newNode->next = tmp;
		return list;        	
	}
	while (tmp->next != NULL && tmp->next->idNumber < newNode->idNumber)
		tmp = tmp->next;
	if (tmp->idNumber == newNode->idNumber){
                	cout << "Duplicate ID" << endl;
			delete newNode;
			return list;
		}
	if (tmp->next == NULL){
		tmp->next = newNode;
		return list;
	}
      	if (tmp->next->idNumber > newNode->idNumber){
		newNode->next = tmp->next;  
		tmp->next = newNode;
		return list;
	}
	if (tmp->next->idNumber == newNode->idNumber){
		cout << "Duplicate ID" << endl;
		delete newNode;
	}
	return list; 
}	

Node *searchNode (Node* list, int key){
	while (list != nullptr){
		if (list->idNumber == key){
			cout << "Student Name: " << list->firstName << " " << list->lastName << endl;
		        cout << "ID: " << list->idNumber << endl;
			return list; 
			}
		list = list->next; 
		}
	cout << "The ID number is not in the list." << endl;
	return nullptr; 
	}

Node *deleteNode(Node* list, int n){
	Node *tmp, *tmp1;
	if (list->idNumber == n) //if first element in the list equals desired element then remove it from the list
		{
		tmp = list;
		list = list->next;
		delete tmp;
		return list;
		}
	tmp = list;
	while ((tmp->next != NULL) && (tmp->next->idNumber < n)) //search
		tmp = tmp->next;	 
	if ((tmp->next == nullptr) || (tmp->next->idNumber > n)){
                cout << "ID number not in list." << endl;
        }
	else 
		{
		if (tmp->next->next == NULL){
			tmp1 = tmp->next;
			tmp->next = NULL;
			delete tmp1;
			}
		else if (tmp->next->next != NULL) {
			tmp1 = tmp->next;
			tmp->next = tmp->next->next;
			delete tmp1;
			}
		}
	return list; 
}

void printList(Node *list){
	if (list == nullptr){
		cout << "Empty list" << endl; 
		return; 
		}	
		while (list != nullptr){
			cout << "Student Name: " << list->firstName << " " << list->lastName << endl; 
                        cout << "ID: " << list->idNumber << endl;	
			list = list->next; 
	}
}

