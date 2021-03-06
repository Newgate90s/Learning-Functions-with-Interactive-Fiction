//Interactive fiction
//CSC215
//Samael Newgate

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Declaring variables
int GetNumberFromUser(string prompt);
string GetTextFromUser(string prompt);

int main()
{
	//The story
	cout << "Welcome to the world of Mana\n";
	cout << "Sam has recruited a group of adveturers to explore this new lands.";
	cout << "\nMana recently appeared over the Pacific Ocean and has yet to be explored.\n";
	cout << "When the crew finally gets to Mana they set food on the land only to walk into a wall as tall as the human eye could see and surrounding all of the land ";
	cout << "\n At the center of the wall there is 5 gates.\n";
	cout << "\nWhat gate should they go through?: \n";

	//Start of the loop
	bool IsProgramRunning = true;
	while (IsProgramRunning)
	{
		//Different options the user gets to interact with by their input
		int index = GetNumberFromUser("\nEnter a gate number: \n");
		switch (index)
		{
		case 1:
			cout << "Gate 1 takes them into a beatiful field of unknown flowers.\n";
			break;
		case 2:
			cout << "Gate 2 takes them into a chamber full of treasure.\n";
			break;
		case 3:
			cout << "Gate 3 takes them into a cave full of unknown minerals.\n";
			break;
		case 4:
			cout << "Gate 4 takes them into a land filled with unknown species of animals.\n";
			break;
		case 5:
			cout << "Gate 5 takes you into a dark room. You walk endlessly for days and never find an exit. Game Over! \n";
			IsProgramRunning = false;
			break;

		}
	}

	//Pauses the code and stops it from automatically closing after finishing
	system("pause");

	return 0;
}

//Recalling functions
int GetNumberFromUser(string prompt)
{
	cout << prompt;
	int var = 0;
	cin >> var;
	return var;
}
string GetTextFromUser(string prompt)
{
	cout << prompt;
	string var = "";
	cin >> var;
	return var;
}