#include <iostream>
#include "card.h"

using namespace std;

int main(){
	Card myDeck; 
	char choice;
	cout << "Enter the suit of card you would like" << endl;
	cout << "s for spades, h for hearts, c for clubs, d for diamonds." << endl;
	cin >> choice;
	if (choice == 's')
		pic = spade;
	if (choice == 'h')
		pic = heart;
	if (choice == 'c')
		pic = club;
	if (choice == 'd')
		pic = diamond;
	for (int i = 0; i = 11; i++){
		displayAce(i, pic);
	} 
}
