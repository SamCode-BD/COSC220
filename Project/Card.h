#ifndef CARD_H
#define CARD_H

struct aCard{
                int num;
                char pic[4];
        };

        const char spade[4] = "\xe2\x99\xa0";
        const char club[4] = "\xe2\x99\xa3";
        const char heart[4] = "\xe2\x99\xa5";
        const char diamond[4] = "\xe2\x99\xa6";

class Card{
private:
	aCard Cards[52];
	int nextCard;
public:
	Card();
	void shuffleCard();
	aCard getCard();
	void displayCard(aCard, int);
	void displayAce(int, aCard);
	void displayTwo(int, aCard);
	void displayThree(int, aCard);
	void displayFour(int, aCard);
	void displayFive(int, aCard);
	void displaySix(int, aCard);
	void displaySeven(int, aCard);
	void displayEight(int, aCard);
	void displayNine(int, aCard);
	void displayTen(int, aCard);
	void displayJack(int, aCard);
	void displayQueen(int, aCard);
	void displayKing(int, aCard);
};

#endif
