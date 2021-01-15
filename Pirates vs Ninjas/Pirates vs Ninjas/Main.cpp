#include <iostream>
#include "Ninja.h"
#include "Pirate.h"

//prototype functions here
void DisplayIntro();
int main()
{
	//displays intro
	DisplayIntro();

	Ninja ninjaObject;

	ninjaObject.Name = "Naruto";

	ninjaObject.ThrowStars();

	//kills main functions
	return 0;
}

//Displays the intro
void DisplayIntro()
{
	//prints intro
	std::cout << "\n\nWeclome to Pirates vs Ninjas!\n\n";
	std::cout << "Prepare for War!" << std::endl;
}

// EXTRA CREDIT: Rolls random number between 0-101
int RandomRoll()
{
	//generates a random number between 0-101
	int Num = rand() % 101;

	//returns number
	return Num;
}
