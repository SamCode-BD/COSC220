#include <iostream>
#include "Card.h"
#include <ctime>
#include <cstlib>

using namespace std;

aCard Card::getCard(){
	return Cards[nextCard++];	
}

void Card::shuffleCard(){
	int rnum;
	aCard tmp;
	srand(time(0));
	srand( (unsigned)time( NULL ));
	for (int i = 0; i < 52; i++{
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
