#pragma once
class Deck {
private:
	
	int _card[97];//�S�̂̃J�[�h
	int _cardNum;//�����Ƃ������̋L�^
	
public:
	Deck();
	~Deck();
	void shuffle();//�V���b�t��
	void getCard();//�����L�^�̕ϐ��C���N�������g
	int takeCard();//�J�[�h������
};