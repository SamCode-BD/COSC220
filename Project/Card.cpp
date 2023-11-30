#include <iostream>
#include "Card.h"
#include <ctime>
#include <cstdlib>

using namespace std;

aCard Card::getCard(){
	return Cards[nextCard++];	
}

void Card::shuffleCard(){
	int rnum;
	aCard tmp;
	srand(time(0));
	srand( (unsigned)time( NULL ));
	for (int i = 0; i < 52; i++){
		rnum = rand()%52;
		tmp = Cards[i];
		Cards[i] = Cards[rnum];
		Cards[rnum] = tmp;	
	}
	nextCard = 0;
}

Card::Card(aCard [] Cards){
	int nextCard = 0;
	for (int i=0; i < 13; i++){
		Cards[i].num = i+1;
		Cards[i].pic = spade;
	}
	for (int i = 13; i < 26; i++){
		Cards[i].num = i-12;
		Cards[i].pic = club;
	}
	for (int i = 26; i < 39; i++){
		Cards[i].num = i-25;
		Cards[i].pic = heart;
	}
	for (int i = 39; i < 52; i++){
		Cards[i].num = i-38;
		Cards[i].pic = diamond;
	}
}

void Card::displayAce(int row, char pic){
	if (row == 1)
		cout << "---------";
	if (row == 2)
		cout << "|A      |";
	if (row == 3)
		cout << "|       |";
	if (row == 4)
	        cout << "|       |";
	if (row == 5)
	      	cout << "|       |";
	if (row == 6)
		cout << "|   "<<pic<<"   |";
	if (row == 7)
                cout << "|       |";
	if (row == 8)
                cout << "|       |";
	if (row == 9)
                cout << "|       |";
	if (row == 10)
		cout << "|      A|";
	if (row == 11)
		cout << "---------";
}
void Card::displayTwo(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|2      |";
	if (row == 3)
                cout << "|       |";
	if (row == 4)
                cout << "|   "<<pic<<"   |";
	if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
	if (row == 8)
		cout << "|   "<<pic<<"   |";
	if (row == 9)
                cout << "|       |";
        if (row == 10)
                cout << "|      2|";
	if (row == 11)
                cout << "---------";
}
void Card::displayThree(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|3      |";
	if (row == 3)
		cout << "|   "<<pic<<"   |";
	if (row == 4)
		cout << "|       |";
	if (row == 5)
		cout << "|       |";
	if (row == 6)
                cout << "|   "<<pic<<"   |";
	if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9)
                cout << "|   "<<pic<<"   |";
	if (row == 10)
                cout << "|      3|";
	if (row == 11)
                cout << "---------";
}
void Card::displayFour(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|4      |";
	if (row == 3)
		cout << "| " << pic << "   " << pic <<" |";
	if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9)
                cout << "| " << pic << "   " << pic <<" |";
	if (row == 10)
                cout << "|      4|";
	if (row == 11)
                cout << "---------";
}
void Card::displayFive(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|5      |";
        if (row == 3)
                cout << "| " << pic << "   " << pic << " |";
	if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|   "<<pic<<"   |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9)
                cout << "| " << pic << "   " << pic <<  " |";
	if (row == 10)
                cout << "|      5|";

	if (row == 11)
                cout << "---------";
}
void Card::displaySix(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|6      |";
	if (row == 3)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 10)
                cout << "|      6|";
	if (row == 11)
                cout << "---------";
}
void Card::displaySeven(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|7      |";
	if (row == 3)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 4)
                cout << "|   "<<pic<<"   |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 10)
                cout << "|      7|";
	if (row == 11)
                cout << "---------";
}
void Card::displayEight(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|8      |";
        if (row == 3)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 4)
                cout << "|   "<<pic<<"   |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|   "<<pic<<"   |";
        if (row == 9)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 10)
                cout << "|      8|";
	if (row == 11)
                cout << "---------";
}
void Card::displayNine(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|9      |";
        if (row == 3)
                cout << "| " << pic << "   " << pic << " |";
        if (row == 4)
                cout << "|   "<<pic<<"   |";
	if (row == 5)
		cout << "| " << pic << "   " << pic << " |";
	if (row == 6)
		cout << "|       |";
	if (row == 7)
		cout << "| " << pic << "   " << pic << " |";
	if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "| " << pic << "   " << pic << " |";
	if (row == 10)
                cout << "|      9|";
	if (row == 11)
                cout << "---------";
}
void Card::displayTen(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|4      |";
	if (row == 3)
                cout << "| " << pic << "   " << pic <<" |";
        if (row == 4)
                cout << "|   "<<pic<<"   |";
        if (row == 5)
                cout << "| " << pic << "   " << pic <<" |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "| " << pic << "   " << pic <<" |";
        if (row == 8)
                cout << "|   "<<pic<<"   |";
        if (row == 9)
                cout << "| " << pic << "   " << pic <<" |";
        if (row == 10)
                cout << "|      4|";
	if (row == 11)
                cout << "---------";
}
void Card::displayJack(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|" << pic << "J     |";
	if (row == 3)
                cout << "|       |";
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "|       |";
	if (row == 10)
                cout << "|      J" << pic << "|";
	if (row == 11)
                cout << "---------";
}
void Card::displayQueen(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|" << pic << "Q     |";
	if (row == 3)
                cout << "|       |";
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "|       |";
        if (row == 10)
                cout << "|      Q" << pic << "|";
	if (row == 11)
                cout << "---------";
}
void Card::displayKing(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|" << pic << "K     |";
	if (row == 3)
                cout << "|       |";
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
                cout << "|       |";
        if (row == 10)
                cout << "|      K" << pic << "|";
	if (row == 11)
                cout << "---------";
}

