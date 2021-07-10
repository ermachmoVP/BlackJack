#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <thread>
#include <windows.h>
#include "Preview.h"
#include "Card.h"
#include "GenericPlayer.h"
#include "Game.h"
#include "Deck.h"


using namespace std;

ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = { "0", "A","2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    const string SUITS[] = { "c", "d", "h", "s" };
    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }
    return os;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_Name << ": \t";
    vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_Cards.empty())
    {
       // for (pCard = aGenericPlayer.m_Cards.begin();  pCard != aGenericPlayer.m_Cards.end(); ++pCard); 
       // {
          //  os << *pCard << "\t";
       // }
        for (auto it : aGenericPlayer.m_Cards)
        {
            os << *it << "\t";
        }
        

        if (aGenericPlayer.GetTotal() != 0)
        {
            cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
    }
    else
    {
        os << "<Пусто>";
    }
    return os;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Loading(); //загрузочное меню (ну а как игра без него?)
    int numPlayers = 0;
    int count = 1;
    while (numPlayers < 1 || numPlayers > 7)
    {
        cout << "ДОБРО ПОЖАЛОВАТЬ!" << endl<< "Для начала игры выберите количество игроков(1 - 7) ";
        cin >> numPlayers;
        if (numPlayers < 1 || numPlayers > 7)
            cout << "Неверное количество игроков. Будьте внимательнее!" << endl;
            this_thread::sleep_for(1.5s);
            system("cls");
    }
    vector<string> names;
    string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "Введите имя " <<count<< "-ого игрока" << endl;
        cin >> name; 
        names.push_back(name);
        ++count;
    }
    cout << endl;
    system("cls");
    Game aGame(names);
    char again = 'д';
    while (again != 'н' && again != 'Н')
    {
        aGame.Play();
        cout << "Хотите сыграть снова? (Д/Н):  ";
        cin >> again;
        system("cls");
    }
    cout << "Спасибо за игру. Заходите ещё!" << endl; 
    return 0;
}
