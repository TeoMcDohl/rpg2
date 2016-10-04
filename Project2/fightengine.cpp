#include "stdafx.h"
#include <iostream>
#include "character.h"
#include "monster.h"
#include "functionloader.h"

mob fightengine(string heroname, mob currentMob)

{
	int mobDamage;
	using namespace std;
	while (currentMob.mobHealth >= 1 && playerHealth >= 1)
	{


		int choice = fightmenu();
		cout << std::endl;
		mobDamage = rand() % 10 + 1;
		if (choice == 1 && playerHealth >= 1)
		{
			playerDamage = rand() % 10 + 1;
			currentMob.mobHealth = currentMob.mobHealth - playerDamage;
			cout << "You hit the mob for " << playerDamage << " damage!" << "\n";
			cout << "\n";

			playerHealth = playerHealth - mobDamage;
			cout << currentMob.mobName << " slaps you for " << mobDamage << " damage!" << "\n";
			cout << "\n";

		}
		else if (choice == 2 && playerHealth >= 1 && playerMana > 3)
		{
			playerDamage = rand() % 15 + 1;
			currentMob.mobHealth = currentMob.mobHealth - playerDamage;
			cout << "You cast magic missile for " << playerDamage << " damage!" << "\n";
			cout << "\n";
			playerMana = playerMana - 3;
			playerHealth = playerHealth - mobDamage;
			cout << currentMob.mobName << " slaps you for " << mobDamage << " damage!" << "\n";
			cout << "\n";
		}

		else if (choice == 2 && playerHealth >= 1 && playerMana < 3)
		{
			cout << "Insufficient mana!\n" << "\n";
		}
		else if (choice >= 3 && playerHealth >= 1)
		{
			cout << "Invalid option.  :|" << "\n" << "\n";
		}

		cout << heroname << "'s health is " << playerHealth << "\n";
		cout << heroname << "'s mana is " << playerMana << "\n";
		cout << currentMob.mobName << "'s health is " << currentMob.mobHealth << "\n"; 
		cout << currentMob.mobMana << "'s mana is " << currentMob.mobMana << "\n";
		cout << "\n";
	}
	
	return currentMob;
}