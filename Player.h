#pragma once
//#include"CardPuts.h"
class Player
{
private:
	int _card[8];//��D
	int _count;//1�^�[���ɉ����o���������m���߂邽�߂̕ϐ�
	int _ollCount;//�݌v�����o���������m�F����ϐ�
	int _cardNum;//���Ԗڂ̃J�[�h���g���̂�
	int _selectCard;//�I�������J�[�h
	bool _countinue;//�����邩�ۂ�
	int _gameOverGage;//�P�^�[������3��~�X��ƃQ�[���I�[�o�[
	bool _Game;
public:
	void showCard();
	Player();
	int chooseCard();//�J�[�h���g��
	void pullOnACard();//�^�[��
	int SetCard();
	void useCardAfter();//�g���I�������ɕ��ёւ���
	bool PlayGame();//�Q�[���̗���
	bool Countinue();//�^�[���𑱂��邩�I��邩�̑I��
	void notPuts();//�J�[�h���u���Ȃ��������Ɏg��
	void preparationCard();//���̃^�[���̏���
	bool GameOver();
};