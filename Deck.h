#pragma once
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	Deck();
	virtual ~Deck();
	void Populate(); //������� ������ �� 52 ����
	void Shuffle(); //������ ������
	void Deal(Hand& aHand); //������� ���� ����� � ����
	void AdditionalCards(GenericPlayer& aGenericPlayer); //��� �������������� ����� ������
};