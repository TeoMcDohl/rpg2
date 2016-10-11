#include "stdafx.h"
#include <iostream>
#include "hero.h"
#include "monster.h"
#include "functionloader.h"

void fightengine(hero& player1, mob& currentMob)

{
	using namespace std;
	cout << currentMob.mobName << " is released from its cage!\n" << std::endl;
	while (currentMob.mobHealth >= 1 && player1.playerHealth >= 1)
	{
		
		int choice = fightmenu();
		cout << std::endl;
		if (choice == 1 && player1.playerHealth >= 1)
		{
			int heroChanceToHit;
			heroChanceToHit = player1.chanceToHit();
			if (heroChanceToHit == 1)
			{
				player1.pDamage();
				currentMob.mobHealth = currentMob.mobHealth - player1.playerDamage;
				cout << "You hit the mob for " << player1.playerDamage << " damage!" << "\n";
				cout << "\n";
			}
			else if (heroChanceToHit == 2)
			{
				cout << player1.heroName << " Misses!\n\n";
			}
			int mobChanceToHit;
			mobChanceToHit = currentMob.chanceToHit();
			if (mobChanceToHit == 1)
			{
				currentMob.monsterDamage();
				player1.playerHealth = player1.playerHealth - currentMob.mobDamage;
				cout << currentMob.mobName << " slaps you for " << currentMob.mobDamage << " damage!" << "\n";
				cout << "\n";
			}
			else if (mobChanceToHit == 2)
			{
				cout << currentMob.mobName << " Misses!\n\n";
			}

		}
		else if (choice == 2 && player1.playerHealth >= 1 && player1.playerMana > 3)
		{
			player1.mDamage();
			currentMob.mobHealth = currentMob.mobHealth - player1.playerDamage;
			cout << "You cast magic missile for " << player1.playerDamage << " damage!" << "\n";
			cout << "\n";
			player1.playerMana = player1.playerMana - 3;
			currentMob.monsterDamage();
			player1.playerHealth = player1.playerHealth - currentMob.mobDamage;
			cout << currentMob.mobName << " slaps you for " << currentMob.mobDamage << " damage!" << "\n";
			cout << "\n";
		}

		else if (choice == 2 && player1.playerHealth >= 1 && player1.playerMana < 3)
		{
			cout << "Insufficient mana!\n" << "\n";
		}
		else if (choice != 1 && choice != 2)
		{
			cout << "Invalid option.  :|" << "\n" << "\n";
		}

		player1.displayStats();
		currentMob.displayStats();
		cout << "\n";
	}
	
	
}