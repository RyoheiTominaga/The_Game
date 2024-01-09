#pragma once
#include"Player.h"

class CardPuts {
private:
	int _upCard[2];//1から大きくなっていくエリアの最終カード
	int _downCard[2];//100から小さくなっていくエリアの最終カード
	//int _finishCard[98];//出し終えたカード
	int _finishCount;//何枚置いたかをカウントするやつ
	int _selectNo;//選択した番号

public:
	void showCard();
	void cardPutUp(Player &player);
	void cardPutDown(Player& player);
	void selectMove(Player &player);
	void notPuts(Player& player);//置けなかった時
	int getFinishCard();
	CardPuts();
};
