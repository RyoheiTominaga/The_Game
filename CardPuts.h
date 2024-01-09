#pragma once
#include"Player.h"

class CardPuts {
private:
	int _upCard[2];//1����傫���Ȃ��Ă����G���A�̍ŏI�J�[�h
	int _downCard[2];//100���珬�����Ȃ��Ă����G���A�̍ŏI�J�[�h
	//int _finishCard[98];//�o���I�����J�[�h
	int _finishCount;//�����u���������J�E���g������
	int _selectNo;//�I�������ԍ�

public:
	void showCard();
	void cardPutUp(Player &player);
	void cardPutDown(Player& player);
	void selectMove(Player &player);
	void notPuts(Player& player);//�u���Ȃ�������
	int getFinishCard();
	CardPuts();
};
