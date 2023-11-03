#include <iostream>
#include <fstream>
#include "shop.h"

using namespace std;

Node *createItem(){
	Node* newNode = new Node; 
	newNode->next = NULL;
	ifstream itemList; //create input object
        itemList.open("item.txt"); //open input file stream
        if (!itemList){ // check open file error
                cout << "File cannot be opened at this time!" << endl;
                exit(1); //exit(1) shows abnormal termination of program, exit(0) shows successful end
        }
	/*
	item num needs to be gathered from user, then checked against the item numbers to see if theyre in the list,
	if item number is in the list then store the rest of this stuff, if not try again,
	item name -- store newNode->itemName
	unit number -- newNode->unit
	tax newNode-- newNode->tax
	subtotal -- newNode->subtotal
	*/
	char taxability, sellType; 
	double price; 
	int yourItem;
	bool find = false; 
	while (!find){
		cout << "Enter the number of the item you want to add to your list." << endl;
		cin >> yourItem; 
		while (!itemList.eof() && (yourItem != newNode->itemNum)) {
        		itemList >> newNode->itemNum >> newNode->itemName >> taxability >> sellType >> price;
                	//at each line, check if the item number is equal to the user's item number. If it is, print out the item name and run subsequent statements
               		if (newNode->itemNum == yourItem){
				cout << "You chose " << newNode->itemName << endl;
                                        if (sellType == 'n'){
                                        	cout << "How many " << newNode->itemName << " would you like to purchase?" << endl;
                                                cin >> newNode->unit;
                                                newNode->subtotal = newNode->unit*price;
                                        }
                                        else if (sellType == 'p'){
                                                cout << "How many pounds of " << newNode->itemName << " would you like to purchase?" << endl;
                                                cin >> newNode->unit;
                                                newNode->subtotal = newNode->unit*price;
                                        }
                                        else if (sellType == 's'){
						newNode->unit = 1;
                                        	newNode->subtotal = price;
						}
                                        if (taxability == 't'){
						newNode->tax = newNode->subtotal*.06; 
                                                newNode->subtotal = newNode->subtotal + newNode->tax;
                                        }
					else 
						newNode->tax = 0; 
                                //set boolean find value to true to signify that a valid item number was found from the user's input
                                        find = true;
                                }
                        }
        // if the user's item number is never found then the boolean value find remains false, so output a message saying invalid item number.
                if (!find)
                        cout << "Invalid item number." << endl;
        // clear the input file and send back to the top of the file so the while loop can start from the beginning to find new items
                itemList.clear();
                itemList.seekg(0);
        }
	return newNode; 
}

Node *insertItem(Node* list){
	Node* newNode = createItem();
	if (list == nullptr){
		list = newNode;
		return list;
	}
	Node* tmp = list;
        if (newNode->itemNum < tmp->itemNum){
                list = newNode;
                newNode->next = tmp;
                return list;
        }
	while (tmp->next != NULL && tmp->next->itemNum < newNode->itemNum)
		tmp = tmp->next;
	if (tmp->itemNum == newNode->itemNum){
                list->unit += newNode->unit;
		list->tax += newNode->tax;
		list->subtotal += newNode->subtotal;
		delete newNode;
                return list;
        }
        if (tmp->next == NULL){
                tmp->next = newNode;
                return list;
        }
        if (tmp->next->itemNum > newNode->itemNum){
                newNode->next = tmp->next;
                tmp->next = newNode;
                return list;
        }
        if (tmp->next->itemNum == newNode->itemNum){
                list->next->unit += newNode->unit;
                list->next->tax += newNode->tax;
                list->next->subtotal += newNode->subtotal;
		delete newNode;
        }
        return list;
}

Node *deleteItem(Node* list, int n){
	Node *tmp, *tmp1;
        if (list->itemNum == n) //if first element in the list equals desired element then remove it from the list
                {
                tmp = list;
                list = tmp->next;
                delete tmp;
                return list;
                }
        tmp = list;
        while ((tmp->next != NULL) && (tmp->next->itemNum < n)) //search
                tmp = tmp->next;
        if ((tmp->next == nullptr) || (tmp->next->itemNum > n)){
                cout << "The item number is not in list." << endl;
        }
        else{
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

void print(Node* list){
	if (list == nullptr){
        	cout << "Empty list" << endl;
                return;
      	}
	while (list != nullptr){
		cout << "Item Number: " << list->itemNum << endl; 
		cout << "Item Name: " << list->itemName << endl;
		cout << "Amount: " << list->unit << endl; 
		cout << "Tax: " << list->tax << endl;
		cout << "Subtotal: " << list->subtotal << endl;
		list = list->next; 
	}
}

void outputFile(Node* list){
	double total = 0;
	ofstream output; 
	output.open("receipt.txt");	
	output << "Your Grocery List: " << endl;
        output << "------------------" << endl;
        output << "Item Number: " << setw(13) << "Item Name: " << setw(28) << "Amount: " << setw(10) << "Tax: " << setw(10) << "Subtotal: " << endl;
        output << "------------" << setw(13) << "----------" << setw(28) << "--------" << setw(10) << "--------" << setw(10)<< "-------" << endl;
	while (list != nullptr){
		output << right << setw(3) << list->itemNum << setw(40) << list->itemName << setw(10) <<  list->unit << setw(10) << fixed << setprecision(2) << list->tax << setw(10) << setprecision(2) << list->subtotal << endl;
		total += list->subtotal;
		list = list->next; 
	}
	output << "Total: " << fixed << setprecision(2) << right << total << endl;
}
