#include "stdafx.h"
#include <string>
#include "hero.h"
#include <iostream>
#include <sstream>
using std::string;

hero chooseHero()
{
	using namespace std;
	cout << "Choose your class: \n";
	cout << "1: Warrior (more strength, no mana)\n";
	cout << "2: Wizard (more intellect and mana, less strength and health)\n";
	string heroChoice;
	getline(cin, heroChoice);
	int heroChoiceint;
	stringstream myStream(heroChoice);
	if (myStream >> heroChoiceint)
	{
		if (heroChoiceint == 1)
		{
			hero warrior = { "Warrior",150,15,1,0,1,true };
			return warrior;
		}

		else if (heroChoiceint == 2)
		{
			hero wizard = { "Wizard",100,9,16,25,1,true };
			return wizard;
		}
	}
	
	cout << "**Invalid option**\n\n";
	hero badChoice = { "Bad Choice",0,0,0,0,0,false };
	return badChoice;
}

