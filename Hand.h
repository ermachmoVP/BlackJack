#pragma once
#include "Card.h"
#include <vector>

class Hand 
{
public:
	Hand();
	virtual ~Hand();
	void Add(Card* pCard); //Добавить карту в руку
	void Clear(); //Очищить руку от карт
	int GetTotal() const; //Получить сумму карт в руке, присваивая тузу значение 11
protected:
	std::vector<Card*>m_Cards;

};
