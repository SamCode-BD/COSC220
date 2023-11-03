#include "Queue.h"
#include "Students.h"
#include <iostream>

using namespace std;

int main(){
        Queue <Students*> studentQueue;
        Queue <int> intQueue;
	int choice = 0, choice1 = 0;
	cout << "Welcome to Queue Program" << endl;
	cout << "Which kind of Queue would you like to make?" << endl;
	cout << "1: Queue of Students" << endl;
	cout << "2: Queue of Integers" << endl;
	while (choice1 < 1 || choice1 > 2){
        	cin >> choice1;
	if (choice1 != 1 && choice1 != 2)
                cout << "Invalid choice! Try again!";
        }
	if (choice1 == 1)
		Queue <Students*> studentQueue;
	else
		Queue <int> intQueue;
	while (choice != 4){
		cout << "What would you like to do?" << endl;
		cout << "1. enQueue(); add an element to the queue" << endl;
		cout << "2. deQueue(); remove an element from the queue" << endl;
		cout << "3. topQueue(); display the top element in the queue" << endl;
		cout << "4. Quit the program" << endl;
		cin >> choice;
                while (choice < 1 || choice > 4){
                        cout << "Invalid choice." << endl;
                        cin >> choice;
                }
		if (choice1 == 1){
			Students *student, *tmp; 
			switch (choice){
				case 1:
					if (studentQueue.isFull())
						cout << "Queue is full, cannot enQueue"<< endl;
					else{
						student = new Students();
						studentQueue.enQueue(student);
					}
					break;
				case 2:
					studentQueue.deQueue();
					break;
				case 3:
					if (studentQueue.isEmpty())
						cout << "Queue is empty, no top to show" << endl;
					else{
						tmp = studentQueue.topQueue(); 
						tmp->printStudent();
					}
					break;
				case 4:
					studentQueue.~Queue();
					exit(0);
					
			}
		}
		else{
			int data = 0; 
			switch (choice){
				case 1:
					if (intQueue.isFull())
						cout << "Queue is full, cannot enQueue" << endl;
					else {
						cout << "Enter the integer you want to add to the stack" << endl;
						cin >> data;
						intQueue.enQueue(data);
					}
					break;
				case 2:
					intQueue.deQueue();
					break;
				case 3:
					if (intQueue.isEmpty())
						cout << "Queue is empty, no top to show" << endl;
					else{
						cout << endl;
						cout << intQueue.topQueue() << endl;
					}
					break;
				case 4: 
					intQueue.~Queue();
					exit(0);
			}
		}		 
	}
	choice = 0;	
}

