#include <iostream>
#include "Robber.h"
#include "Helper.h"

void Richest(robbers Robber[], int& lifes)
{
	int richest;
	bool isAlive = false;
	for (int i = 0; i < lifes; i++)
	{
		if (Robber[i].life == 1)
		{
			richest = Robber[i].wealth;
			isAlive = true;
			break;
		}
	}

	if (!isAlive)
	{
		std::cout << "Нет живых" << std::endl << std::endl;
		return;
	}

	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth > richest) and (Robber[i].life == 1))
			richest = Robber[i].wealth;

	int singleRich = 0;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth == richest) and (Robber[i].life == 1))
		{
			PrintRobber(Robber[i]);
			singleRich++;
		}

	if (singleRich == 1)
		std::cout <<" Богач найден" << std::endl << std::endl;
	else
		std::cout << "Богачи найдены" << std::endl << std::endl;
}
