#include "Card.h"

Card::Card(rank r, suit s, bool ifu) : m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {}
int Card::GetValue() const
{
	int value = 0; //Если карта перевёрнут лицом вниз, то её значени равно 0
	if (m_IsFaceUp)
	{
		value = m_Rank; //значение равно 10 для открытых карт
		if (value > 10)
		{
			value = 10;
		}
	}
	return value;
	}
void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}
