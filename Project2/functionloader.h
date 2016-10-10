#pragma once
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