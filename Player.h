#pragma once
//#include"CardPuts.h"
class Player
{
private:
	int _card[8];//手札
	int _count;//1ターンに何枚出したかを確かめるための変数
	int _ollCount;//累計何枚出したかを確認する変数
	int _cardNum;//何番目のカードを使うのか
	int _selectCard;//選択したカード
	bool _countinue;//続けるか否か
	int _gameOverGage;//１ターン内で3回ミスるとゲームオーバー
	bool _Game;
public:
	void showCard();
	Player();
	int chooseCard();//カードを使う
	void pullOnACard();//ターン
	int SetCard();
	void useCardAfter();//使い終わった後に並び替える
	bool PlayGame();//ゲームの流れ
	bool Countinue();//ターンを続けるか終わるかの選択
	void notPuts();//カードが置けなかった時に使う
	void preparationCard();//次のターンの準備
	bool GameOver();
};