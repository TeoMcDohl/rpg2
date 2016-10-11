#include "stdafx.h"
#include "functionloader.h"
#include "hero.h"
#include <iostream>

void lobby(hero& player1, mob& currentMob)
{
	using namespace std;
	cout << endl;
	cout << "Welcome to the lobby! Before you is a caged " << currentMob.mobName << ".\n";
	cout << "You may choose to unleash the " << currentMob.mobName << ", check your stats, or choose a new weapon.\n";
	cout << "Once you unleash the " << currentMob.mobName << " you won't have a chance to do anything except fight.\n";
	cout << "What would you like to do?\n";
	cout << endl;
	
}

void lobbyMenu(hero& player1, mob& currentMob)
{
	using namespace std;
	cout << "1. Check stats\n";
	cout << "2. Fight the " << currentMob.mobName << endl;
	cout << "3. Inspect the " << currentMob.mobName << endl;
	cout << "4. Choose a new weapon (not functional)" << endl;
	cout << "5. Quit" << endl;
	cout << endl;

	string lobbyChoice;
	int lobbyChoiceInt;
	getline(cin, lobbyChoice);
	stringstream lobbyStream(lobbyChoice);
	if (lobbyStream >> lobbyChoiceInt)
	{
		if (lobbyChoiceInt == 1)
		{
			player1.displayStats();
			cout << endl;
			lobbyMenu(player1, currentMob);
		}
		else if (lobbyChoiceInt == 2)
		{
			return;
		}
		else if (lobbyChoiceInt == 3)
		{
			currentMob.displayStats();
			cout << endl;
			lobbyMenu(player1, currentMob);
		}
		else if (lobbyChoiceInt == 4)
		{
			cout << "Eventually, you'll select a weapon that will change your base stats! OOOH." << endl;
			cout << endl;
			lobbyMenu(player1, currentMob);

		}
		else if (lobbyChoiceInt == 5)
		{
			exit(0);

		}
		else if (lobbyChoiceInt != 1 && lobbyChoiceInt != 2 && lobbyChoiceInt != 3 && lobbyChoiceInt != 4 && lobbyChoiceInt != 5)
		{
			cout << "*Invalid option*" << endl;
			lobbyMenu(player1, currentMob);
		}
	}
	
	else
	{
		cout << "*Invalid option*" << endl;
		lobbyMenu(player1, currentMob);
	}

}