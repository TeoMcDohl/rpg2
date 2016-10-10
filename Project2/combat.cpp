// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "hero.h"
#include "monster.h"
#include "functionloader.h"
#include <time.h>


int main()
{
	using std::cout;
	srand (time(0));
	int mobChoice = rand() % 100 + 1;
	string heroname = intro();
	mob currentMob = makeOurMob(mobChoice);
	hero player1 = chooseHero();
	while (player1.isGoodChoice == false)
	{
		player1 = chooseHero();
	}
	player1.heroName = heroname;
	cout << player1.heroName << "'s health is " << player1.playerHealth << "\n";
	cout << player1.heroName << "'s mana is " << player1.playerMana << "\n";
	cout << currentMob.mobName << "'s health is " << currentMob.mobHealth << "\n";
	cout << currentMob.mobName << "'s mana is " << currentMob.mobMana << "\n";
	cout << std::endl;
	cout << currentMob.mobName << " appears!" << std::endl;
	fightengine(player1,currentMob);
	endCondition(player1,currentMob);
}

