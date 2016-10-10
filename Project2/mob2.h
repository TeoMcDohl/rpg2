//Pragma once is FINE, I'm showing you this methodology because it is accepted by all compilers
#ifndef MOB_H
#define MOB_H
#include <string>
#include <map>

//You should be able to just use the std namespace
using std;
//Lets make a namespace for your monsters!
namespace Monsters
{
	//Enums are GREAT for "types"
	enum MobType
	{
		None = 0,
		Imp,
		Goblin,
		HobGoblin
	}
	//Static - one "version" of this variable across your application
	//Const - it cannot change at runtime
	//Maps are a sweeeet extension of a basic hash that are enumerable
	static const map <MobType, string> MobNameMap = { {MobType::None, "none"},
													{MobType::Imp, "Imp"},
													{MobType::Goblin, "Goblin"},
													{MobType::HobGoblin, "HobGoblin"}

	}

	//A nice helper function to get the mob name from a mom type
	//For info on what const, & etc etc is, read below
	static const string& GetMobName(const MobType type)
	{
		auto name = MobNameMap.find(type));
		if(name != MobNameMap.end())
		{
			//Find returns an iterator type.  You have to dereference it to get the value (we are not allocating memory)
			return *name;
		}
		else
		{
			return "none";
		}
	}

	//Lets make this a class, mobs will likely eventually do some complicated stuff.
	//In C++ the only difference between a struct and a class is that class members are private by default
	//Opposite for structs
	class Mob
	{
	public:
		//These are DECLARATIONS of functions
		//Constructor, this method is called everytime an object of type mob is created
		Mob();
		//Destructor, this method is called everyrtime an object falls off the stack (goes out of scope)
		~Mob();

		//Getters, setters
		//This is a getter, a method that returns your mobName to something that queries for it.
		//The & ensures you are sending a reference, which kind of a read-only pointer.
		//Sending a reference increases performance drastically unless it's a good old data type like an int
		//the first const here tells the compiler that the string returned cannot be modified by the caller
		//the second const here tells the compiler that the Mob class that is being queried cannot be modified 
		const string& MobName() const {return mobName;}
		//This is a getter
		//Using const allows the compiler to make optimizations knowing that the "value" variable will not be changed
		//Again, we've used a reference to increase performance
		void MobName(const string& value) 
		{
			//Change the name of the mob to the value that has been passed
			mobName = value;
		}

		//Camel your cases - this is usually dependent on the coding standards of your org though
		int MobHealth() const {return mobHealth;}
		int MobMana() const {return mobMana;}

		MobType Type() const {return mobType;}

		//You'll notice that all of the logic for these getters and setters are in the header file
		//This is called "implicit inlining" which tells the compiler to replace the memory address of the
		//function with the logic of the function itself - it is good practice for functions with a small amount
		//of logic that will be called often in runtime.
	private:
		//Encapsulate your members.  This ensures that you won't have to worry about other classes
		//and functions screwing with your members in ways you did not intend
		string mobName;
		int mobHealth;
		int mobMana;
		MobType mobType;
	};
}
#endif