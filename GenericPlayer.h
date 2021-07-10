#pragma once
#include "Hand.h"
#include <string>


class GenericPlayer : public Hand 
{	
friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
public:
	GenericPlayer(const std::string& name = "");
	virtual ~GenericPlayer();
	virtual bool IsHitting() const = 0; //показывает, хочет ли игрок продолжить брать карты
	bool IsBusted() const; //возвращает значение если игрок имеет перебор (сумма очков больше 21)
	int win = 0;
	int loss = 0;
	int draw = 0;
	void GetWinStats(); //оъ€вл€ет игрока победителем
	void GetLossStats(); //объ€вл€ет игрока проигравшим
	void GetDrawStats(); // объ€вл€ет ничью
protected:
	std::string m_Name; 
};
