#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

Node *LinkedList::createNode(){
	Node *newNode = new Node();
	return newNode; 
}

Node *LinkedList::searchLocation(int id){
	Node *tmp = list;
	if (tmp == NULL)
		return tmp;
	else{
		while (tmp->next != NULL && tmp->next->id < id){
			tmp = tmp->next;
		}
	}
	return tmp;
}

LinkedList::LinkedList(){
	list = nullptr;
}

LinkedList::~LinkedList(){
	while (list != nullptr){
		Node *tmp = list;
		list = list->next;
		delete tmp;
	}
}

void LinkedList::insertNode(){
	//include private utility functions create node and search location
	//
	Node *newNode = createNode();
	Node *tmp = searchLocation(newNode->id);
	if (tmp == NULL)
		list = newNode;
	else if (tmp->id == newNode->id){
		cout << "Duplicate ID" << endl;
		delete newNode;
	}
	else if (newNode->id < tmp->id){
		list = newNode;
		newNode->next = tmp; 
	}
	else if (tmp->next == NULL)
		tmp->next = newNode;
	else if(tmp->next->id == newNode->id){
		cout<<"Duplicate ID"<<endl;
		delete newNode;
	}
	else{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
}
void LinkedList::deleteNode(int id){
	//use private utility function search location to search for node to delete, if there is no such student then return NULL
	//
	Node *tmp = searchLocation(id);
	Node *tmp1;
	if (tmp == NULL)
		cout << "That ID is not in the list" << endl;
	if (tmp){
		if (tmp->id == id){
			list = tmp->next;
			delete tmp; 
		}
		else if (tmp->next == NULL)
			cout << "That ID is not in the list" << endl;
		else if (tmp->next->id == id){
			tmp1 = tmp->next;
			tmp->next = tmp->next->next;
			delete tmp1;
		}
		else if (tmp->next->id > id)
			cout << "That ID is not in the list" << endl;
	}	
}

void LinkedList::printList(){
	//call the printNode function in a while loop so it prints the information for each student
	Node* tmp = list;
	while (tmp != nullptr){
		tmp->printNode();
		tmp = tmp->next; 
	}
}

void LinkedList::searchNode(){
	//Get a student ID to search and call private utility funcation "searchLocation" to decide whether a node is in the list or not, 
	//If there is a student with ID, print student information, else, searchLocation returns NULL, display a message there is no such item in the list
	int key;
	cout << "Enter the ID number of the node you would like to search for" << endl;
	cin >> key;
	Node *tmp = searchLocation(key);
	if (tmp == NULL)
		cout << "That ID is not in the list" << endl;
	if (tmp){
		if (tmp->id == key){
			cout << "Here is the information for that ID: " << endl;
			tmp->printNode();
		}
		else if (tmp->next == NULL)
			cout << "That ID is not in the list" << endl;
		else if (tmp->next->id == key){
			cout << "Here is the information for that ID: " << endl;
			tmp->next->printNode();
		}
		else if (tmp->next->id > key)
			cout << "That ID is not in the list" << endl;
	}
}
