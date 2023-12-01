#include <iostream>
#include "Card.h"

using namespace std;
//how many cards would you like to get, here are your cards
int main(){
	Card myDeck; 
	char choice;
	int num;
	cout << "How many cards would you like to display? (Enter 2, 3, 4, or 5)" << endl;
	cin >> num;
	while (num < 2 || num > 5){
		cout << "Invalid number of cards. Try again." << endl;
		cin >> num;
	}
	if (num == 2){
		myDeck.shuffleCard(); //shuffle deck
		aCard card = myDeck.getCard(); //create a card to get data from ; //test.num = 1;
		aCard card1 = myDeck.getCard();
		for (int i = 0; i < 12; i++){
			myDeck.displayCard(card, i); //for loop for the card you create to print 
			myDeck.displayCard(card1, i);
			cout << endl;
		}
	}
	else if (num == 3){
		myDeck.shuffleCard();
		aCard card = myDeck.getCard();
		aCard card1 = myDeck.getCard();
		aCard card2 = myDeck.getCard();
		for (int i = 0; i < 12; i++){
                        myDeck.displayCard(card, i); //for loop for the card you create to print 
                        myDeck.displayCard(card1, i);
			myDeck.displayCard(card2, i);
                        cout << endl;
                }
	}
	else if (num == 4){
		myDeck.shuffleCard();
		aCard card = myDeck.getCard();
                aCard card1 = myDeck.getCard();
                aCard card2 = myDeck.getCard();
		aCard card3 = myDeck.getCard();
                for (int i = 0; i < 12; i++){
                        myDeck.displayCard(card, i); //for loop for the card you create to print 
                        myDeck.displayCard(card1, i);
                        myDeck.displayCard(card2, i);
			myDeck.displayCard(card3, i);
                        cout << endl;
                }
	}
	else if (num == 5){
		myDeck.shuffleCard();
		aCard card = myDeck.getCard();
                aCard card1 = myDeck.getCard();
                aCard card2 = myDeck.getCard();
                aCard card3 = myDeck.getCard();
                aCard card4 = myDeck.getCard();
		for (int i = 0; i < 12; i++){
                        myDeck.displayCard(card, i); //for loop for the card you create to print 
                        myDeck.displayCard(card1, i);
                        myDeck.displayCard(card2, i);
                        myDeck.displayCard(card3, i);
			myDeck.displayCard(card4, i);
                        cout << endl;
                }
	}
}
