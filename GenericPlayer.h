#pragma once
#include "Hand.h"
#include <string>


class GenericPlayer : public Hand 
{	
friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
public:
	GenericPlayer(const std::string& name = "");
	virtual ~GenericPlayer();
	virtual bool IsHitting() const = 0; //����������, ����� �� ����� ���������� ����� �����
	bool IsBusted() const; //���������� �������� ���� ����� ����� ������� (����� ����� ������ 21)
	int win = 0;
	int loss = 0;
	int draw = 0;
	void GetWinStats(); //�������� ������ �����������
	void GetLossStats(); //��������� ������ �����������
	void GetDrawStats(); // ��������� �����
protected:
	std::string m_Name; 
};
