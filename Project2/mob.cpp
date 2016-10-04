#include "stdafx.h"
#include <string>
#include "monster.h"
using std::string;

mob makeOurMob(int mobChoice)
{
	if (mobChoice > 66)
	{
		mob imp = { "Imp", 100, 6 };
		return imp;
	}
	else if (mobChoice < 66 && mobChoice > 33)
	{
		mob goblin = { "Goblin", 120, 11 };
		return goblin;
	}
	else if (mobChoice < 33)
	{
		mob hobgoblin = { "HobGoblin", 152, 17 };
		return hobgoblin;
	}
	
}