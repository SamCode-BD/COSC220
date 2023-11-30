#include <iostream>
#include "Card.h"

using namespace std;
//how many cards would you like to get, here are your cards
int main(){
	Card myDeck; 
	char choice;
	int num;
	/*
	myDeck.getCard();
	myDeck.shuffleCard();
	*/
	cout << "How many cards would you like to display? (Enter 2, 3, 4, or 5)" << endl;
	cin >> num;
	while (num < 2 && num > 5){
		cout << "Invalid number of cards. Try again.";
		cin >> num;
	}
	if (num == 2){
		myDeck.shuffleCard();
		aCard test = myDeck.getCard();
		//cout << test.pic; cout << endl; cout << test.num;
		choice = myDeck.assignSuit(test);		//call function to assign the suit of the card to the choice variable that will be passed the display card function;
		myDeck.printSuit(choice);
		//aCard test1 = myDeck.getCard();
		//char choice1 = myDeck.assignSuit(test1);
		//myDeck.printSuit(choice);
		
	//	for (int i = 0; i < 12; i++){
          //              myDeck.displayCard(test, i, choice);
                        //myDeck.displayCard(test1, i, choice1);
            //            cout << endl;
              //  }
		
	}
	//cout << "Enter the suit of card you would like" << endl;
	//cout << "s for spades, h for hearts, c for clubs, d for diamonds." << endl;
	//cin >> choice;
	//myDeck.printSuit(choice);
	/*if (choice == 's')
		for (int i = 0; i < 4; i++){
			pic[i] = spade[i];
		}
	*/
	/*
	for (int i = 0; i < 12; i++){
		myDeck.displayAce(i, choice);
		myDeck.displayTwo(i, choice);
		myDeck.displayThree(i, choice);
		myDeck.displayFour(i, choice);
		myDeck.displayFive(i, choice);
		myDeck.displaySix(i, choice);
		myDeck.displaySeven(i, choice);
		myDeck.displayEight(i, choice);
		myDeck.displayNine(i, choice);
		myDeck.displayTen(i, choice);
		myDeck.displayJack(i, choice);
		myDeck.displayQueen(i, choice);
		myDeck.displayKing(i, choice);
		cout << endl;
	} 
	*/
}
