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
 * FUNCTION  GetInt
 *________________________________________________________________________
 * This prompts the integer and then error checks the input
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This returns an error checked menu value
 ************************************************************************/

int GetInt()
{
	int menuChoice; // IN - user inputs menu choice
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

	// IN & PROC - user inputs menu option from prompt, loops until valid
	// input is entered
	do{
		cout << setw(12) << "Sheep Age: ";
		// PROC & OUT - if user input is other than an integer, user is
		// prompted with error message and invalid becomes true
		if(!(cin >> menuChoice))
		{
			cout << "\n**** Please input a NUMBER between 1 and 9 "
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
			cout << "**** Please input a number between 1 and 9 ****\n\n";
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


	return menuChoice;
}
