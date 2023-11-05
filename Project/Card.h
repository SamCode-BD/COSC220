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
	aCard nextCard(aCard []);
public:
	Card(aCard []);
	void shuffleCard();
	aCard getCard();

};

#endif
