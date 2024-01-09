#pragma once
class Deck {
private:
	
	int _card[97];//全体のカード
	int _cardNum;//何枚とったかの記録
	
public:
	Deck();
	~Deck();
	void shuffle();//シャッフル
	void getCard();//枚数記録の変数インクリメント
	int takeCard();//カードを引く
};