#include <iostream>
#include "Node.h" 

using namespace std;

Node::Node(){
	cout << "Enter last name" << endl;
	cin >> lastName;
	cout << "Enter first name" << endl;
	cin >> firstName;
	cout << "Enter ID number" << endl;
	cin >> id; 
	next = nullptr; 
}

Node::~Node(){};

void Node::printNode(){
	cout << "Last Name: " << lastName << endl;
	cout << "First Name: " << firstName << endl;
	cout << "ID Number: " << id << endl;
}
