#include <iostream>
#include "Card.h"

using namespace std;

aCard Card::nextCard(aCard [] Cards){
	return Cards[key+1];	
}

Card::Card(aCard [] Cards){
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
