#ifndef FUNCTIONLOADER
#define FUNCTIONLOADER


#include <string>
#include "monster.h"
#include "hero.h"
#include <sstream>
#include <iostream>


using std::string;
string intro();
int fightmenu();
int endCondition(hero&,mob&);
void fightengine(hero&,mob&);
mob makeOurMob(int);
hero chooseHero();
void lobby(hero&, mob&);
void lobbyMenu(hero&, mob&);
#endif // !FUNCTIONLOADER