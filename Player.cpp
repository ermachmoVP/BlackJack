#include "Player.h"
#include <string>
#include <Windows.h>

Player::Player(const std::string& name):GenericPlayer(name) {}
Player::~Player() {}
bool Player::IsHitting() const
{
	std::cout << m_Name << ", ������ ����� ��� ���� �����? (�/�) ";
	char response;
	std::cin >> response;
	return (response == '�' || response == '�');
}
