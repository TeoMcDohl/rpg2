#pragma once
#include <string>
#include "monster.h"
using std::string;
string intro();
int fightmenu();
int endCondition(string,mob);
mob fightengine(string,mob);
string determineMobName(int);
int determineMobHealth(int);
int determineMobMana(int);
mob makeOurMob(int);