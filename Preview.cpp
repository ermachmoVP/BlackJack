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
	std::cout << "\t\ \t \t\  ���������! �������� ����!" << std::endl << std::endl;
	std::cout << "��������� ���� � ����� ����������� ����������� �����������. �� ������ � ��������� ������������ �������, ���� ��������������� �������" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t����� ���������� ";
	Sleep(7000);
	system("cls");
	int a = 0; 
	while (a < 3)
	{
		
		std::cout << "\t \t \t \t ��������";
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