#include "Player.h"
#include <string>
#include <Windows.h>

Player::Player(const std::string& name):GenericPlayer(name) {}
Player::~Player() {}
bool Player::IsHitting() const
{
	std::cout << m_Name << ", хотите взять ещё одну карту? (Д/Н) ";
	char response;
	std::cin >> response;
	return (response == 'д' || response == 'Д');
}
