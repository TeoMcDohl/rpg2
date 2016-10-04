#include "stdafx.h"
#include <iostream>
#include "character.h"
#include "monster.h"
#include "functionloader.h"

int endCondition(string heroname, mob currentMob)
{
	
	using namespace std;
	if (currentMob.mobHealth > 0 && playerHealth < 1)
	{
		cout << heroname << " has died!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}

	else if (currentMob.mobHealth <= 0 && playerHealth >= 1)
	{
		cout << "The " << currentMob.mobName << " has been defeated!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}
	else if (currentMob.mobHealth < 1 && playerHealth < 1)
	{
		cout << heroname << " and " << currentMob.mobName << " have been defeated!\n";
		cout << "Press X to continue...";
		int exit;
		std::cin >> exit;
		return 0;
	}
	return 0;
}