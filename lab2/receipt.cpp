#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std; 

int main(){
	ifstream itemList; //create input object
	itemList.open("item.txt", ios::in); //open input file stream
	if (!itemList){ // check open file error
		cout << "File cannot be opened at this time!" << endl;
		exit(1); //exit(1) shows abnormal termination of program, exit(0) shows successful end
	}
	ofstream output; //create output object
	output.open("dickerson_sam.txt", ios::out); //open output file stream
	//define important elements
	int itemNumber, yourItem, units, choice = 0;
	char itemName[40];
	char taxability, sellType; 
	float price = 0, subtotal = 0, pounds = 0, itemTax = 0, total = 0;
	bool find; 
	const float tax = .06; 
	//print opening header
	cout << "Welcome to the Best Grocery System TM" << endl;
	cout << "-------------------------------------" << endl;
	//print output file header
	output << "Your Grocery List: " << endl;
	output << "------------------" << endl;
	output << "Item Number: " << setw(13) << "Item Name: " << setw(28) << "Amount: " << setw(10) << "Price: " << setw(10) << "Tax: " << setw(10) << "Subtotal: " << endl;
	output << "------------" << setw(13) << "----------" << setw(28) << "--------" << setw(10) << "--------" << setw(10) << "--------" << setw(10)<< "-------" << endl;
	//outside while loop
	while (true) {
		//set boolean find value to false at start of every program iteration
		find = false; 
		cout << "Enter 1 to add an item to your shopping list." << endl;
		cout << "Enter 2 to exit the program." << endl; 
		cin >> choice;
		//check for a valid choice
		while (choice != 1 && choice != 2){
			cout << "Sorry, that is not a choice you can make! Try again!" << endl;
			cin >> choice;
		}
		//if choice equals 1 then take in user item number
		if (choice == 1){
			cout << "Please enter the number of the item you want to add to your list." << endl;
			cin >> yourItem; 
		}
		//if choice equals 2 then leave the outside while loop so the program can run final statements and end
		if (choice == 2){
			break; 
		}
		//while not at the end of the file, take in each line of the file and store data into its respective variables
			while (!itemList.eof()) {
				itemList >> itemNumber >> itemName >> taxability >> sellType >> price;
		//at each line, check if the item number is equal to the user's item number. If it is, print out the item name and run subsequent statements 
				if (itemNumber == yourItem){
					cout << "You chose " << itemName << endl; 
			//if sell type is equal to units then ask how many and take in value as int. Set subtotal equal to the product of units value and price 
					if (sellType == 'n'){
						cout << "How many " << itemName << " would you like to purchase?" << endl;
						cin >> units;
						subtotal = units*price;  
					}
			//if sell type is equal to pounds ask how many and take in value as float. Calculate the subtotal using the price and the pounds value
					else if (sellType == 'p'){
						cout << "How many pounds of " << itemName << " would you like to purchase?" << endl;
						cin >> pounds; 
						subtotal = pounds*price; 
					}
			//if sell type is single then set the subtotal to the price
					else if (sellType == 's')
					subtotal = price; 
			//if the item is taxable then calculate the item tax and redefine subtotal by adding the item tax to it.
					if (taxability == 't'){
						itemTax = (tax*subtotal); 
						subtotal = subtotal + itemTax;  
					}
			//if sell type is units then output number, name, units, price, tax, and subtotal to the file
    					if (sellType == 'n'){
                       				 output << right << setw(3) << itemNumber << setw(40) << itemName << setw(10) << units << setw(10) << fixed << setprecision(2) << price << setw(10) << setprecision(2) << itemTax << setw(10) << setprecision(2) << subtotal << endl;
               				}
			//if sell type is pounds then output number, name, units, price, tax, and subtotal to the file
                			else if (sellType == 'p'){
                        			output << right << setw(3) << itemNumber << setw(40) << itemName << setw(10) << pounds << setw(10) << fixed << setprecision(2) << price << setw(10) << setprecision(2) << itemTax << setw(10) << setprecision(2) << subtotal << endl;
               				}
			//if sell type is 
                			else if (sellType == 's'){
                        			output << right << setw(3) << itemNumber << setw(40) << itemName << setw(10) <<  "1" << setw(10) << fixed <<  setprecision(2) <<  price << setw(10) << setprecision(2) << itemTax << setw(10) << setprecision(2) <<  subtotal << endl;
                			}
				//add the subtotal for each item to the overall total
					total += subtotal; 
				//set boolean find value to true to signify that a valid item number was found from the user's input
					find = true; 
				}
			}
	// if the user's item number is never found then the boolean value find remains false, so output a message saying invalid item number. 
		if (!find){
                	cout << "Invalid item number." << endl;
                	}
	// clear the input file and send back to the top of the file so the while loop can start from the beginning to find new items
		itemList.clear();
                itemList.seekg(0);
	}
	//output the total price of all the items to the file
	output << "Total: " << fixed << setprecision(2) << right << total << endl;

	cout << "Thank you for using Best Grocery System TM!" << endl;
	//close the input and output files
	itemList.close();
	output.close();

}
