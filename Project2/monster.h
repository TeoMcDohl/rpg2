#ifndef MONSTER
#define MONSTER
#include "stdafx.h"
#include <string>
using std::string;

class mob
{
public:
	string mobName;
	int mobHealth;
	int mobMana;
	int mobDamage;
	int strength;
	int mobID;
	void monsterDamage()
	{
		if (mobID == 1) 
		{
			mobDamage = rand() % strength + 1;
		}
		else if (mobID == 2)
		{
			mobDamage = rand() % strength + 4;
		}
		else if (mobID == 3)
		{
			mobDamage = rand() % strength + 6;
		}
	}
};
#endif