/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  MenuPrompt
 *________________________________________________________________________
 * This prompts the menu and will error check the inputs until a useable
*   value is returned by the function
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This returns an error checked menu value
 ************************************************************************/

Menu MenuPrompt()
{
	Menu validInput;
	int menuChoice; // IN - user inputs menu choice
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

	// IN & PROC - user inputs menu option from prompt, loops until valid
	// input is entered
	do{
		cout << "\nSheep List Manager\n";
		cout << "1 - Add Sheep\n";
		cout << "2 - Output 1st Sheep\n";
		cout << "3 - Find Sheep\n";
		cout << "4 - List Size\n";
		cout << "5 - Output List\n";
		cout << "6 - Clear List\n";
		cout << "0 - Exit\n";
		cout << "Enter command: ";

		// PROC & OUT - if user input is other than an integer, user is
		// prompted with error message and invalid becomes true
		if(!(cin >> menuChoice))
		{
			cout << "\n**** Please input a NUMBER between 0 and 6 "
					"****\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		// PROC & OUT - if user input is an out of bounds number, user is
		// prompted with error message and invalid becomes true
		else if(menuChoice < 0 || menuChoice > 6)
		{
			ErrorAlignSmall(menuChoice);
			cout << "**** Please input a number between 0 and 6 ****\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		// PROC - if user input is valid, buffer cleared, loop exited
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = false;
		}
	}while(invalid);

	// PROC - switch statement to convert from int to enum type Menu
	switch(menuChoice)
	{
	case 0 : validInput = EXIT;
	break;
	case 1 : validInput = ADD_SHEEP;
	break;
	case 2 : validInput = OUTPUT_FIRST;
	break;
	case 3 : validInput = FIND;
	break;
	case 4 : validInput = SIZE;
	break;
	case 5 : validInput = OUTPUT_LIST;
	break;
	case 6 : validInput = CLEAR;
	}

	return validInput;
}
