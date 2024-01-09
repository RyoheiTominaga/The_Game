#include"Deck.h"
#include"Common.h"
#include <iostream>; 
using namespace std;
void Deck::shuffle()
{
	int maxCard = CARD_MAXNUM;
	srand((unsigned int)time(NULL));
	for (int i = maxCard;i > 1;--i) {
		int a = i - 1;
		int num = rand() % i;
		swap(_card[a], _card[num]);
	}
	/*for (int i = 0;i< maxCard;++i) {
		
		cout<<_card[i]<<",";
	}*/
}
void Deck::getCard() {
	//cout << "インクリメント" << endl;
	int maxCard = CARD_MAXNUM;
	if(_cardNum<maxCard){
		_cardNum++;
	}
	else {

	}
}
int Deck::takeCard() {
	//cout << "カードを引いた" << endl;
	//getCard();
	return _card[_cardNum];
	
}
Deck::Deck()
{
	int maxCard = CARD_MAXNUM;
	for (int i = 0;i < maxCard;++i) {
		_card[i] = i+2 ;
	
	}
	/*for (int i = 0;i < maxCard;++i) {

		cout << _card[i] << ",";
	}*/
	cout << endl;
	shuffle();
	_cardNum = 0;
}
Deck::~Deck() {

}