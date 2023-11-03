#include <iostream>
#include "Students.h"
#include "Stack.h"

using namespace std;

Students::Students(){
	cout << "Enter student last name: " << endl;
	cin >> lastName;
	cout << "Enter student first name: " << endl;
	cin >> firstName;
	cout << "Enter student ID number: " << endl;
	cin >> id;
}

void Students::printStudent(){
	cout << "ID# " << id << " - " << lastName << ", " << firstName << endl;
}
