#include "stdafx.h"
#include <iostream>
#include "functionloader.h"


int fightmenu()
{
	
	using namespace std;
	
	cout << "1: Fight\n";
	cout << "2: Magic (3 MP)\n";
	cout << endl;
	cout << "Command? ";
	int menuCmd;
	cin >> menuCmd;
	return menuCmd;
}