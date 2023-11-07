#ifndef CARD_H
#define CARD_H

class Card{
private:
	struct aCard{
		int num;
		char pic[4];
	};
	aCard Cards[52];
	
	const char spade[4] = "\xe2\x99\xa3";
	const char club[4] = "\xe2\x99\xa3";
	const char heart[4] = "\xe2\x99\xa5";
	const char diamond[4] = "\xe2\x99\xa6";
	int nextCard;
public:
	Card(aCard []);
	void shuffleCard();
	aCard getCard();
	void displayAce();
	void displayTwo();
	void displayThree();
	void displayFour();
	void displayFive();
	void displaySix();
	void displaySeven();
	void displayEight();
	void displayNine();
	void displayTen();
	void displayJack();
	void displayQueen();
	void displayKing();
};

#endif
