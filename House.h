#pragma once
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
	House(const std::string& name = "Крупье");
	virtual ~House();
	virtual bool IsHitting() const; //показывает, хочет ли крупье взять карты
	void FlipFirstCard(); //переворачивает карту
};