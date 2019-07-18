/*************************************************************************
 *AUTHOR         : Drew Umlang
 *AUTHOR         : Ryan Martinez
 *STUDENT ID     : 390572
 *STUDENT ID     : 389657
 *LAB 9          : Implement a stack
 *CLASS          : CS1B
 *SECTION        : MWF: 8:00 - 10:30 am
 *DUE DATE       : 10/23/2015
 ************************************************************************/

#include "Testing.h"

/*************************************************************************
 * FUNCTION GatherInfo
 * _______________________________________________________________________
 * This function will add a new name to the stack
 * _______________________________________________________________________
 * PRE-CONDITIONS :
 * 		head: The stack
 * POST_CONDITIONS :
 * 		This function will return the new stack
 ************************************************************************/
PersonNode *Push(PersonNode *head)
{
	PersonNode *perPtr; // The pointer used to traverse the list
	bool invalid;       // The bool used to control the do while loops

	// Initializes perPtr to NULL
	perPtr = NULL;

	// Initializes Invalid to true
	invalid = true;

	// Creates a new node
	perPtr = new PersonNode;

	// Prompts the user to enter a name
	cout << "\nWho would you like to add?\n\n";
	cout << left << setw(14) << "Enter name: ";
	getline(cin, perPtr->name);

	// Error checks the input
	do
	{
		// Prompts the user to enter a gender
		cout << setw(14) <<  "Enter gender: ";
		cin.get(perPtr->gender);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		perPtr->gender = toupper(perPtr->gender);


		if (perPtr->gender != 'M' && perPtr->gender != 'F')
		{
			cout << endl
					<< "That is an invalid input, please enter a valid input "
							"(m/f).\n\n";
		}
		else
		{
			invalid = false;
		}
	} while (invalid);

	// Initializes Invalid to true
	invalid = true;

	// Prompts the user to enter an age
	cout << setw(14) << "Enter age: ";
	// error checks the input
	do
	{
		if (!(cin >> perPtr->age))
		{
			cout << setw(14) << "\nPlease input an integer above 0\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			invalid = false;
		}

	} while (invalid);

	// Points the node to the head
	perPtr->next = head;
	// Links the node to the list
	head = perPtr;
	// Sets perPtr to NULL
	perPtr = NULL;

	return head;
}
