#include "stdafx.h"
#include <iostream>
#include "functionloader.h"
#include <string>
using std::string;

string intro()
{
	string heroname = "Hero";
	using namespace std;
	cout << "RPG Fight Sim v.011!" << std::endl;
	cout << "NAME YOUR HERO:  ";
	getline(cin, heroname);
	cout << std::endl;
	return heroname;
}
