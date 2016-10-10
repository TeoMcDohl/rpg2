#include "stdafx.h"
#include "mob2.h"
//We don't need to include <string>, it is included in mob.h
using namespace Monsters;

//This is the definition of our constructor
//Use an initializer list for complext types (classes, structs, etc)
//Otherwise, the compiler will create a copy of the variable and then do an assignment
//This is a major reason C++ is so much faster - there are great tricks to reduce overhead
//Initialize member variables in the order they are declared in your header file
Mob::Mob(MobType mobType) :
	mobName(GetMobName(mobType)) //Initializer list - string constructor is called only once
	
{

	switch(mobType)
	{
		case MobType::Imp:
			mobHealth = 100;
			mobMana = 6;
		break;
		case MobType::Goblin:
			mobHealth = 120;
			mobMana = 11;
		break;
		case MobType::HobGoblin:
			mobHealth = 152;
			mobMana = 17;
		break;
		//Lets make it an imp by default
		default:
			mobHealth = 100;
			mobMana = 6;
			//If we failed to get proper enumerator, we didn't get name either
			//This is more expensive than the initializer list
			//If you want to know more, look at copy constructors and assignment operators for classes
			mobName = "Imp";
		break;

	}
}