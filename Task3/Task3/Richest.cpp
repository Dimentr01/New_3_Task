#include <iostream>
#include "Robber.h"
#include "Helper.h"

void Richest(robbers Robber[], int &lifes)
{
	int k = 0;
	int proverka = 0;
	int richest = Robber[0].wealth;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth > richest) and (Robber[i].life == 1))
		{
			richest = Robber[i].wealth;
			k = i;
		}
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth == richest) and (Robber[i].life == 1))
		{
			PrintRobber(Robber[i]);
			proverka++;
		}
			
	if (proverka==1)
	std::cout << "Богач найден" << std::endl << std::endl;
	else std::cout << "Богачи найден" << std::endl << std::endl;
}
