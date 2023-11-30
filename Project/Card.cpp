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

void Card::printSuit(char suit){	
	if (suit == 's')
                        cout << spade; 
	else if (suit == 'h')
                        cout << heart;
	else if (suit == 'c')
                        cout << club;
	else if (suit == 'd')
                        cout << diamond;
}

char Card::assignSuit(aCard test){    //function takes in the card you got from get card and then prints the suit of it.
	char choice;
	for (int i = 0; i < 4; i++){
		if (test.pic[i] == spade[i])                          //might want to be returning instead of printing here
                	choice = 's';	
        	else if (test.pic[i] == heart[i])
                	choice = 'h';
        	else if (test.pic[i] == club[i])
                	choice = 'c';
        	else if (test.pic[i] == diamond[i])
        		choice = 'd';
	}
        return choice;
}

void Card::displayCard(aCard test, int i, char choice){
	if (test.num == 1){
			displayAce(i, choice); 
	}
	else if (test.num == 2){
			displayTwo(i, choice);
	}
	else if (test.num == 3){
			displayThree(i, choice);
        }
	else if (test.num == 4){
			displayFour(i, choice);
        }
	else if (test.num == 5){
			displayFive(i, choice);
        }
	else if (test.num == 6){
			displaySix(i, choice);
        }
	else if (test.num == 7){
			displaySeven(i, choice);
        }
	else if (test.num == 8){
			displayEight(i, choice);
        }
	else if (test.num == 9){
			displayNine(i, choice);
        }
	else if (test.num == 10){
			displayTen(i, choice);
        }
	else if (test.num == 11){
			displayJack(i, choice);
        }
	else if (test.num == 12){
			displayQueen(i, choice);
        }
	else if (test.num == 13){
			displayKing(i, choice);

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
	if (row == 6){
		cout << "|   "; printSuit(pic); cout << "   |";
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
void Card::displayTwo(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|2      |";
	if (row == 3)
                cout << "|       |";
	if (row == 4){
		cout << "|   "; printSuit(pic); cout << "   |";
	}
	if (row == 5)
                cout << "|       |";
        if (row == 6)
                cout << "|       |";
        if (row == 7)
                cout << "|       |";
	if (row == 8){
		cout << "|   "; printSuit(pic); cout << "   |";
	}
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
	if (row == 3){
		cout << "|   "; printSuit(pic); cout << "   |";
	}
	if (row == 4)
		cout << "|       |";
	if (row == 5)
		cout << "|       |";
	if (row == 6){
                cout << "|   "; printSuit(pic); cout << "   |";
	}
	if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9){
                cout << "|   "; printSuit(pic); cout << "   |";
	}
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
	if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
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
	if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
	}
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
        if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
	if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
	if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
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
	if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 4)
                cout << "|       |";
        if (row == 5)
                cout << "|       |";
        if (row == 6){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
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
	if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 4){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 5)
                cout << "|       |";
        if (row == 6){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 7)
                cout << "|       |";
        if (row == 8)
                cout << "|       |";
        if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
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
        if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 4){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 5)
                cout << "|       |";
        if (row == 6){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 7)
                cout << "|       |";
        if (row == 8){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
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
        if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 4){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
	if (row == 5){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
	if (row == 6)
		cout << "|       |";
	if (row == 7){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
	if (row == 8)
                cout << "|       |";
        if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
	if (row == 10)
                cout << "|      9|";
	if (row == 11)
                cout << "---------";
}
void Card::displayTen(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2)
                cout << "|10     |";
	if (row == 3){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 4){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 5){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 6)
                cout << "|       |";
        if (row == 7){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 8){
                cout << "|   "; printSuit(pic); cout << "   |";
        }
        if (row == 9){
                cout << "| "; printSuit(pic); cout << "   "; printSuit(pic); cout <<" |";
        }
        if (row == 10)
                cout << "|     10|";
	if (row == 11)
                cout << "---------";
}
void Card::displayJack(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|"; printSuit(pic); cout << " J    |";
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
                cout << "|     J"; printSuit(pic); cout << "|";
	}
	if (row == 11)
                cout << "---------";
}
void Card::displayQueen(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|"; printSuit(pic); cout << " Q    |";
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
                cout << "|     Q"; printSuit(pic); cout << "|";
	}
	if (row == 11)
                cout << "---------";
}
void Card::displayKing(int row, char pic){
        if (row == 1)
                cout << "---------";
	if (row == 2){
                cout << "|"; printSuit(pic); cout << " K    |";
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
                cout << "|     K"; printSuit(pic); cout << "|";
	}
	if (row == 11)
                cout << "---------";
}

