#include "stdafx.h"
#include <iostream>
#include "hero.h"
#include "monster.h"
#include "functionloader.h"

int endCondition(hero& player1, mob& currentMob)
{
	
	using namespace std;
	if (currentMob.mobHealth > 0 && player1.playerHealth < 1)
	{
		cout << player1.heroName << " has died!\n";
		cout << currentMob.mobName << " lives!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}

	else if (currentMob.mobHealth <= 0 && player1.playerHealth >= 1)
	{
		cout << "The " << currentMob.mobName << " has been defeated!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}
	else if (currentMob.mobHealth < 1 && player1.playerHealth < 1)
	{
		cout << player1.heroName << " and " << currentMob.mobName << " have been defeated!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}
	return 0;
}