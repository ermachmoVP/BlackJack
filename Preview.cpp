#include "Preview.h"
#include "windows.h"
#include <iostream>
#include <thread>


void Loading() 
{
	std::cout << "\t\t POWERED BY CD PROJECT RED AND DISE...";
	Sleep(3500);
	system("cls");
	std::cout << "\t\t \t \t RED engine";
	Sleep(3000);
	system("cls");
	std::cout << "\t\ \t \t\  ОСТОРОЖНО! АЗАРТНЫЕ ИГРЫ!" << std::endl << std::endl;
	std::cout << "Карточная игра – явное обнаружение умственного банкротства. Не будучи в состоянии обмениваться мыслями, люди перебрасываются картами…" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \tАртур Шопенгауэр ";
	Sleep(7000);
	system("cls");
	int a = 0; 
	while (a < 3)
	{
		
		std::cout << "\t \t \t \t Загрузка";
		std::cout << "."; Sleep(800); 
		std::cout << "."; Sleep(800);
		std::cout << "."; Sleep(800);
		system("cls");
		++a;
	}

}

void MainMenu()
{

}