#include "GenericPlayer.h"
#include "Player.h"

GenericPlayer::GenericPlayer(const std::string& name) : m_Name(name) {}
GenericPlayer::~GenericPlayer() {}
bool GenericPlayer::IsBusted() const
{
	return(GetTotal() > 21);
}
void GenericPlayer::GetWinStats()
{
	win = ++win;
	std::cout <<  m_Name <<" победил. Статистика,  побед : " << win << "\t поражений: " << loss << "\t ничьи: " << draw << std::endl;
}
void GenericPlayer::GetLossStats()
{
	loss = ++loss;
	std::cout << m_Name << " проиграл. Cтатистика,  побед : " << win << "\t поражений: " << loss << "\t ничьи: " << draw << std::endl;
}
void GenericPlayer::GetDrawStats()
{
	draw = ++draw;
	std::cout <<m_Name<< " сыграл в ничью. Cтатистика,  побед : " << win << "\t поражений: " << loss << "\t ничьи: " << draw << std::endl;
}

