#include <iostream>
#include "Students.h"
#include "Stack.h"

using namespace std;

int main(){
	Stack <int> intStack;
	Stack<Students*> studentStack;
	int choice = 0, choice1 = 0;
	cout << "Welcome to Stack Program" << endl;
	cout << "Would you like to create a stack using integers or student data?" << endl;
	cout << "1: Integer Stack" << endl;
	cout << "2: Student Stack" << endl;
	while (choice1 < 1 || choice1 > 2){
		cin >> choice1; 
		if (choice1 != 1 && choice1 != 2)
			cout << "Invalid choice! Try again!";
	}
/*
	if (choice1 == 1)
		Stack <int> intStack;
	else
		Stack <Students*> studentStack;
*/
	while (choice != 4){
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. topStack(): display data from top of the stack" << endl;
        cout << "4. Quit the program" << endl;
                cin >> choice;
                while (choice < 1 || choice > 4){
                        cout << "Invalid choice." << endl;
                        cin >> choice;
                }
		if (choice1 == 1){
			int data = 0;
                	switch (choice){
                        	case 1: if (intStack.isFull())
						cout << "Stack is full, cannot push" << endl;
					else{
						cout << "Enter the integer you want to add to the stack" << endl;
						cin >> data; 
						intStack.push(data);
                        		}
					break;
                        	case 2:
					intStack.pop();	
                        		break;
                        	case 3:
					if (intStack.isEmpty())
						cout << "Stack is empty, no top to show" << endl;
					else
						cout << endl; 
                        			cout << intStack.topStack() << endl;
					break;
                        	case 4:
					//might need destructors
                        		intStack.~Stack();
					exit(0);
                	}
		}
		else{
			Students *student, *tmp;
			switch (choice){
                                case 1:
					if (studentStack.isFull())
						cout << "Stack is full, cannot push" << endl;
					else{
						student = new Students();
                                        	studentStack.push(student);
                                        }
					break;
                                case 2:
                                        studentStack.pop();
                                        break;
                                case 3:
					if (studentStack.isEmpty())
                                                cout << "Stack is empty, no top to show" << endl;
					else {
                                        	tmp = studentStack.topStack();
						tmp->printStudent();
                                       	}
					break;
                                case 4:
                                      	studentStack.~Stack();  //might need destructors
                                       	exit(0);
			}
        	}
	}
	choice = 0;
}
