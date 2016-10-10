#include "stdafx.h"
#include <string>
#include "monster.h"
using std::string;

mob makeOurMob(int mobChoice)
{
	if (mobChoice > 66)
	{
		mob imp = { "Imp", 100, 6, 1,10,1 };
		return imp;
	}
	else if (mobChoice < 66 && mobChoice > 33)
	{
		mob goblin = { "Goblin", 120, 11, 1,10,2 };
		return goblin;
	}
	else if (mobChoice < 33)
	{
		mob hobgoblin = { "HobGoblin", 152, 17, 1,12,3 };
		return hobgoblin;
	}
	
	mob imp = { "Imp", 100, 6, 1 };
	return imp;
}
