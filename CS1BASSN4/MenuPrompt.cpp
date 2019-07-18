/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Searching Linked lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 11/13/2015
 ************************************************************************/

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
	int menuChoice; // IN - user inputs menu choice
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

	// IN & PROC - user inputs menu option from prompt, loops until valid
	// input is entered
	do{
		cout << "\n\nDVD MENU OPTIONS\n\n";
		cout << "1 - Output Entire List\n";
		cout << "2 - Title Search\n";
		cout << "3 - Genre Search\n";
		cout << "4 - Actor Search\n";
		cout << "5 - Year Search\n";
		cout << "6 - Rating Search (0-9)\n";
		cout << "0 - Exit\n";
		cout << "Enter a option (0 to exit): ";

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
	case 0 : return EXIT;
	break;
	case 1 : return OUTPUT_LIST;
	break;
	case 2 : return TSEARCH;
	break;
	case 3 : return GSEARCH;
	break;
	case 4 : return ASEARCH;
	break;
	case 5 : return YSEARCH;
	break;
	case 6 : return RSEARCH;
	}
}
