#include <iostream>
#include "Card.h"

using namespace std;

int main(){
	Card myDeck; 
	char choice;
	char pic[4];
	cout << "Enter the suit of card you would like" << endl;
	cout << "s for spades, h for hearts, c for clubs, d for diamonds." << endl;
	cin >> choice;
	//myDeck.printSuit(choice);
	/*if (choice == 's')
		for (int i = 0; i < 4; i++){
			pic[i] = spade[i];
		}
	*/
	for (int i = 0; i < 12; i++){
		//myDeck.displayAce(i, choice);
		myDeck.displayTwo(i, choice);
		cout << endl;
	} 
}
