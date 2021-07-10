#include "Game.h"
#include "Windows.h"

Game::Game(const std::vector<std::string>& names) //создает вектор игроков из вектора с именами
{
	std::vector<std::string>::const_iterator pName;
	for (pName = names.begin(); pName != names.end(); ++pName)
	{
		m_Players.push_back(Player(*pName));
	}
	srand(static_cast<size_t> (time(0))); //генератор рандомных чисел
	m_Deck.Populate();
	m_Deck.Shuffle();
}
Game::~Game() {}
void Game::Play()
{
	std::vector<Player>::iterator pPlayer; //раздает каждому по две стартовые карты
	for (int i = 0; i < 2; ++i)
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			m_Deck.Deal(*pPlayer);
		}
		m_Deck.Deal(m_House);
	}
	m_House.FlipFirstCard(); //прячет первую карту дилера
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) //открывает руки всех игроков
	{
		std::cout << *pPlayer << std::endl;
	}
	std::cout << m_House << std::endl;
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) //раздает игрокам дополнительные карты
	{
		m_Deck.AdditionalCards(*pPlayer);
	}
	m_House.FlipFirstCard(); //показывает первую карту дилера
	std::cout << std::endl << m_House;
	m_Deck.AdditionalCards(m_House); //раздает дилеру дополнительные карты 
	std::cout << std::endl;
	if (m_House.IsBusted()) //если у дилера перебор
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) 
		{
			if (pPlayer->IsBusted())
			{
				pPlayer->GetDrawStats(); //если у игроков и дилера перебор - будет ничья
			}
			else //если перебор у одного диллера, то игроки побеждают
			{
				pPlayer->GetWinStats();
			}
		}
	}
	else
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) //если у дилера не перебор, то сравнивается кол-во очков у игроков с очками дилера 
		{

			if (!(pPlayer->IsBusted()))
			{
				if (pPlayer->GetTotal() > m_House.GetTotal())
				{
					pPlayer->GetWinStats();
				}
				else if (pPlayer->GetTotal() < m_House.GetTotal())
				{
					pPlayer->GetLossStats();
				}
				else 
				{
					pPlayer->GetDrawStats();
				}
			}
			else
			{
				pPlayer->GetLossStats();
			}
		}
	}
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) //после раунда руки всех игроков очищаются
	{
		pPlayer->Clear();
	}
	m_House.Clear();  //очищается рука дилера
}