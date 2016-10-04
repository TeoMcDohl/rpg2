// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "character.h"
#include "monster.h"
#include "functionloader.h"


int main()
{
	using std::cout;
	int mobChoice = rand() % 100 + 1;
	mob currentMob = makeOurMob(mobChoice);
	string heroname = intro();
	cout << "Your hero's name is " << heroname << std::endl;
	cout << std::endl;
	cout << currentMob.mobName << " appears!" << std::endl;
	currentMob=fightengine(heroname,currentMob);
	endCondition(heroname,currentMob);
}

