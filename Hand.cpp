#include "Hand.h"
#include <vector>

Hand::Hand()
{
	m_Cards.reserve(7);
}
Hand::~Hand()
{
	Clear();
}
void Hand::Add(Card* pCard)
{
	m_Cards.push_back(pCard);
}
void Hand::Clear() //итерируемся по вектору и освобождаем память
	{
	std::vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{
		delete* iter; 
		*iter = 0;
	}
	m_Cards.clear(); //очищаем вектор указателей
}
int Hand::GetTotal() const
{
	if (m_Cards.empty())  //если карта в руке, возвращаем значение 0
	{
		return 0;
	}
	if (m_Cards[0]->GetValue() == 0) //если первая карта имеет значение 0, то она лежит рубашкой вверх(вернуть значение 0)
	{
		return 0;
	}
	int total = 0; 
	std::vector<Card*>::const_iterator iter; //находит сумму очков всех карт(если выпадает туз, то за него начислятся 11 баллов)
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{
		if (!((*iter)->GetValue() == Card::ACE))
		{
			total += (*iter)->GetValue();
		}
		else
		{
			total += 11;
		}
	}	
	return total; 
}
