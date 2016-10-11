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
	lobby(player1, currentMob);
	lobbyMenu(player1, currentMob);
	fightengine(player1, currentMob);
    endCondition(player1, currentMob);
	return 0;
}

