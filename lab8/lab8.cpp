#include "heap.h"
#include <iostream>
using namespace std;

int main(){
	int key, choice;
	Heap myHeap;
	while (choice != 5){
		cout << "1. Insert element into the heap" << endl;
		cout << "2. Maximum Value" << endl;
		cout << "3. Extract maximum element from the heap" << endl;
		cout << "4. Print heap" << endl;
		cout << "5. Heap Sort, print sorted results and exit" << endl;
		cin >> choice;
		while (choice < 1 || choice > 5){
                        cout << "Invalid choice." << endl;
                        cin >> choice;
                }
		switch (choice){
			case 1:
				cout << "Enter integer value to insert" << endl;
				cin >> key;
				myHeap.insert(key);
				break;
			case 2:
				myHeap.maximum();
				break;
			case 3:
				myHeap.extractMax();
				break;
			case 4:
				myHeap.printHeap();
				break;
			case 5: 
				myHeap.heapSort();
				myHeap.printHeap();
				return 0;
		}
		choice = 0;
	}
}
