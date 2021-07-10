#pragma once
#include "Deck.h"
#include "House.h"
#include "Player.h"
#include <vector>
#include <string>


class Game
{
public:
	Game(const std::vector < std::string>& names);
	~Game();
	void Play(); //начинает игру 
private:
	Deck m_Deck;
	House m_House;
	std::vector<Player> m_Players;
};