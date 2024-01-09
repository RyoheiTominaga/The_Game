#include"CardPuts.h"
#include<iostream>
using namespace std;
Player player;
void CardPuts::showCard() {
	cout << "\n=======1→99=======" << endl;
	for (int i = 0;i < 2;++i) {
		cout << "No,"<<i+1<<"  " << _upCard[i] << endl;
	}
	cout << "====================" << endl;
	cout << "========100→2========" << endl;
	for (int i = 0;i < 2;++i) {
		cout <<"No,"<<i+3<<"  " << _downCard[i] << endl;
	}
	cout << "=====================" << endl;
}
CardPuts::CardPuts() {
	for (int i = 0;i < 2;++i) {
		_upCard[i] = 1;
		_downCard[i] = 100;
	}
	/*for (int i = 0;i < 98;++i) {
		_finishCard[i] = 0;
	}*/
	_finishCount = 0;
	_selectNo = 0;
}
void CardPuts::cardPutUp(Player &player) {
	int a = _selectNo - 1;
	
	//cout <<"選択したもの"<<a;
	if (_finishCount < 97) {
		if (_upCard[a] < player.SetCard() || player.SetCard() == _upCard[a] - 10) {
			cout << "置ける" << endl;
			_finishCount++;
			_upCard[a] = player.SetCard();
			system("cls");
		}
		else {

			cout << "置けません" << endl;
			notPuts(player);
		}
	}
	cout << "_Card::" << _upCard[a] << endl;

	showCard();
}
void CardPuts::cardPutDown(Player& player) {
	int a = _selectNo - 3;
	//cout<<"選択したもの"<<a;
	if (_finishCount < 97) {
		if (_downCard[a] > player.SetCard() || player.SetCard() == _downCard[a] + 10) {
			_downCard[a] = player.SetCard();
			_finishCount++;
			system("cls");

		}
		else {
			cout << "置けません" << endl;
			notPuts(player);
		}
	}
	showCard();
}
void CardPuts::selectMove(Player &player) {
	while (player.PlayGame()&&!player.GameOver()) {
		int a = 0;
		showCard();
		while (a <= 0 || a >= 5) {
			printf("どこにカードを置きますか？\n");
			cin >> a;
			_selectNo = a;
		}
		switch (a) {
		case 1:cardPutUp(player);break;
		case 2:cardPutUp(player);break;
		case 3:cardPutDown(player);break;
		case 4:cardPutDown(player);break;
		}
	}
	player.preparationCard();
}
int CardPuts::getFinishCard() {
	return _finishCount;
}
void CardPuts::notPuts(Player& player) {
	player.notPuts();
}
