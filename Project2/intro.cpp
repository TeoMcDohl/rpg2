#include "stdafx.h"
#include <iostream>
#include "character.h"
#include "functionloader.h"
#include <string>
using std::string;

string intro()
{
	string heroname = "Hero";
	using namespace std;
	cout << "RPG Fight Sim v.011!" << std::endl;
	cout << "NAME YOUR HERO:  ";
	std::getline(std::cin, heroname);
	cout << std::endl;
	return heroname;
}
