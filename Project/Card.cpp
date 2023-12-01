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

Card::Card(){
	int nextCard = 0;
	for (int i=0; i < 13; i++){
		Cards[i].num = i+1;
		for (int j = 0; j < 4; j++)
			Cards[i].pic[j] = spade[j];
	}
	for (int i = 13; i < 26; i++){
		Cards[i].num = i-12;
		for (int j = 0; j < 4; j++)
			Cards[i].pic[j] = club[j];
	}
	for (int i = 26; i < 39; i++){
		Cards[i].num = i-25;
		for (int j = 0; j < 4; j++)
			Cards[i].pic[j] = heart[j];
	}
	for (int i = 39; i < 52; i++){
		Cards[i].num = i-38;
		for (int j = 0; j < 4; j++)
			Cards[i].pic[j] = diamond[j];
	}
}

void Card::displayCard(aCard test, int i){
	if (test.num == 1){
			displayAce(i, test); 
	}
	else if (test.num == 2){
			displayTwo(i, test);
	}
	else if (test.num == 3){
			displayThree(i, test);
        }
	else if (test.num == 4){
			displayFour(i, test);
        }
	else if (test.num == 5){
			displayFive(i, test);
        }
	else if (test.num == 6){
			displaySix(i, test);
        }
	else if (test.num == 7){
			displaySeven(i, test);
        }
	else if (test.num == 8){
			displayEight(i, test);
        }
	else if (test.num == 9){
			displayNine(i, test);
        }
	else if (test.num == 10){
			displayTen(i, test);
        }
	else if (test.num == 11){
			displayJack(i, test);
        }
	else if (test.num == 12){
			displayQueen(i, test);
        }
	else if (test.num == 13){
			displayKing(i, test);

        }
}
void Card::displayAce(int row, aCard card){
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
	if (row == 6){
		cout << "|   " << card.pic << "   |";
	}
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
void Card::displayTwo(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|2      |";
	if (row == 3)
                cout << "|       |";
	if (row == 4){
		cout << "|   " << card.pic << "   |";
	}
	if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
	if (row == 8){
		cout << "|   " << card.pic << "   |";
	}
	if (row == 9)
                cout << "|       |";
        if (row == 10)
                cout << "|      2|";
	if (row == 11)
                cout << "---------";
}
void Card::displayThree(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|3      |";
	if (row == 3){
		cout << "|   " << card.pic << "   |";
	}
	if (row == 4)
		cout << "|       |";
	if (row == 5)
		cout << "|       |";
	if (row == 6){
                cout << "|   "<< card.pic << "   |";
	}
	if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9){
                cout << "|   " << card.pic << "   |";
	}
	if (row == 10)
                cout << "|      3|";
	if (row == 11)
                cout << "---------";
}
void Card::displayFour(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|4      |";
	if (row == 3){
                cout << "| "<< card.pic << "   " << card.pic <<" |";
        }
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
		cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 10)
                cout << "|      4|";
	if (row == 11)
                cout << "---------";
}
void Card::displayFive(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|5      |";
        if (row == 3)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
	if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|   " << card.pic << "   |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
	if (row == 10)
                cout << "|      5|";
	if (row == 11)
                cout << "---------";
}
void Card::displaySix(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|6      |";
	if (row == 3)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 10)
                cout << "|      6|";
	if (row == 11)
                cout << "---------";
}
void Card::displaySeven(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|7      |";
	if (row == 3)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 4)
                cout << "|   " << card.pic << "   |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 10)
                cout << "|      7|";
	if (row == 11)
                cout << "---------";
}
void Card::displayEight(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|8      |";
        if (row == 3)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 4)
                cout << "|   " << card.pic << "   |";
        if (row == 5)
                cout << "|       |";
        if (row == 6)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|   " << card.pic << "   |";
        if (row == 9)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 10)
                cout << "|      8|";
	if (row == 11)
                cout << "---------";
}
void Card::displayNine(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|9      |";
        if (row == 3)
		cout << "| "<< card.pic << "   " << card.pic <<" |";
        if (row == 4)
                cout << "|   " << card.pic << "   |";
	if (row == 5)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 6)
		cout << "|       |";
	if (row == 7)
		cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 8)
                cout << "|       |";
        if (row == 9)
		cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 10)
                cout << "|      9|";
	if (row == 11)
                cout << "---------";
}
void Card::displayTen(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|10     |";
	if (row == 3)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
        if (row == 4)
                cout << "|   " << card.pic << "   |";
        if (row == 5)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
        if (row == 6)
                cout << "|       |";
        if (row == 7)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
        if (row == 8)
                cout << "|   " << card.pic << "   |";
        if (row == 9)
        	cout << "| "<< card.pic << "   " << card.pic <<" |"; 
	if (row == 10)
                cout << "|     10|";
	if (row == 11)
                cout << "---------";
}
void Card::displayJack(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|" << card.pic << " J    |";
	}
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
	if (row == 10){
                cout << "|     J" << card.pic << "|";
	}
	if (row == 11)
                cout << "---------";
}
void Card::displayQueen(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|" << card.pic << " Q    |";
	}
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
        if (row == 10){
                cout << "|     Q" << card.pic << "|";
	}
	if (row == 11)
                cout << "---------";
}
void Card::displayKing(int row, aCard card){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|" << card.pic << " K    |";
	}
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
        if (row == 10){
                cout << "|     K" << card.pic << "|";
	}
	if (row == 11)
                cout << "---------";
}

