#ifndef HERO
#define HERO
#include "stdafx.h"
#include <string>
#include <time.h>
using std::string;

class hero
{
public:
	string heroName;
	int playerHealth;
	int strength;
	int intellect;
	int playerMana;
	int playerDamage;
	bool isGoodChoice;

	void pDamage()
	{
		playerDamage = rand() % strength + 1;
	}
	void mDamage()
	{
		playerDamage = rand() % intellect + 6;
	}
	int chanceToHit()
	{
		int calcChance;
		signed srand(time(0));
		calcChance = rand() % 100 + 1;

		if (calcChance > 30)
		{
			return 1;
		}
		else if (calcChance <= 30)
		{
			return 2;
		}
	}
};

#endif 

