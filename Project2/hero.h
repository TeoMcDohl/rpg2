#ifndef HERO
#define HERO
#include "stdafx.h"
#include <string>
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
};

#endif 

