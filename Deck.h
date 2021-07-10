#pragma once
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	Deck();
	virtual ~Deck();
	void Populate(); //создает колоду из 52 карт
	void Shuffle(); //тусует колоду
	void Deal(Hand& aHand); //раздает одну карту в руку
	void AdditionalCards(GenericPlayer& aGenericPlayer); //даёт дополнительные карты игроку
};