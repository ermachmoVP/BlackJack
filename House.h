#pragma once
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
	House(const std::string& name = "������");
	virtual ~House();
	virtual bool IsHitting() const; //����������, ����� �� ������ ����� �����
	void FlipFirstCard(); //�������������� �����
};