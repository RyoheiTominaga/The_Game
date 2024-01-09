#include"Player.h"
#include"Deck.h"
#include<iostream>
using namespace std;
class Deck deck;
//class CardPuts cardPuts;
void Player::showCard()
{
	cout << "======手持ちのカード=====" << endl;
	for (int i = 0;i < 8-_count;++i) {
		cout << i+1<<":"<< _card[i] << endl;
	}
	cout << "====================" << endl;
};
Player::Player() {
	for (int i = 0;i < 8;++i) {
		_card[i] =deck.takeCard();
		deck.getCard();
		//cout << _card[i] << endl;
	}
	_count = 0;
	_cardNum = 0;
	_selectCard = 0;
	_countinue = true;
	_ollCount = 98;
	_gameOverGage = 1;
	_Game = false;
}
int Player::chooseCard() {

	showCard();
	int a = 0;
	while (a <= 0 || a >= 9) {
		cout << "選択する数字を入力してください>" << endl;
		cin >> a;
	}
	cout << "選んだカード:" << _card[a - 1];
	_count++;
	_cardNum = a;
	_selectCard = _card[a - 1];
	//cout << "_card[a-1]::" << _card[a - 1] << "\n_selectCard" << _selectCard << endl;
	//_card[_cardNum - 1] = -1;
	return _selectCard;
}
void Player::pullOnACard() {
	_selectCard = chooseCard();

}
int Player::SetCard() {
	/*cout << "_selectCard:"<<_selectCard << endl;
	cout << "_cardNum" <<_cardNum<< endl;
	cout << "_card[a-1]:" << _card[_cardNum - 1] << endl;*/
	return _selectCard;
}
void Player::useCardAfter() {
	if (!_Game) {
		//cout << _cardNum;
		swap(_card[8 - _count], _card[_cardNum - 1]);
		//showCard();
	}
}
bool Player::PlayGame() {
	if (!_Game) {
		cout << "" << endl;
		int a = 0;

		if (_count >= 2) {

			cout << "0:続ける\n0以外:終わる" << endl;

			cin >> a;
			if (a == 0) {
				_countinue = true;
			}

			else {
				cout << "おわり" << endl;
				_countinue = false;

			};

		}
		if (a == 0) {
			pullOnACard();
			useCardAfter();
			return _countinue;
		}
		else {
			return _countinue;
		}
	}
}
bool Player::Countinue() {
	return _countinue;
}
void Player::notPuts() {
	_count--;
	if (_gameOverGage < 3) {
		cout << "後" << (3-_gameOverGage) << "回でゲームオーバー" << endl;
		_gameOverGage++;
	}
	else if(_gameOverGage==3){
		_Game = true;
		
	}
}
void Player::preparationCard() {
	if (!_Game) {
		cout << "次のターンに向けてカードを補充しています" << endl;

		if (_ollCount >= 0) {

			_ollCount -= _count;
			cout << "残りカード:" << _ollCount << "枚" << endl;
		}
		for (int i = (8 - _count);i < 8;++i) {
			_card[i] = deck.takeCard();
			deck.getCard();
			_count--;
		}


		//_count = 0;
		_countinue = true;
		_gameOverGage = 1;
	}
}
bool Player::GameOver(){
	return _Game;
}
