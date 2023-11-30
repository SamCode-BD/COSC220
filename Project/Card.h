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
	void displayAce(int, char);
	void displayTwo(int, char);
	void displayThree(int, char);
	void displayFour(int, char);
	void displayFive(int, char);
	void displaySix(int, char);
	void displaySeven(int, char);
	void displayEight(int, char);
	void displayNine(int, char);
	void displayTen(int, char);
	void displayJack(int, char);
	void displayQueen(int, char);
	void displayKing(int, char);
};

#endif
