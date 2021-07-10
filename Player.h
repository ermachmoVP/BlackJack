#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer 
{
public:
	Player(const std::string& name = "");
	virtual  ~Player();
	virtual bool IsHitting() const; //показывает, хочет ли игрок взять карты
};