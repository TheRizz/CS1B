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

//Global Constants

//The assignment or lab number
const int asNum = 8;

// The title of the lab or assignment
const string asName = "Implement a stack";

// The type of work, Assignment or Lab
char asType = 'L';
int main()
{
	/*************************************************************************
	 * Implement a stack
	 *________________________________________________________________________
	 * This program will take in user input to create a Linked List. It will
	 * give the users several options to do with this linked list.
	 ************************************************************************/

	/*********************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------
	 * USED FOR THE CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------------------------
	 * PROGRAMMER  : Drew Umlang & Ryan Martinez
	 * CLASS       : CS1B
	 * SECTION     : MWF 8:00am
	 * LAB_NUM     : 9
	 * LAB_NAME    : Implement a stack
	 *-------------------------------------------------------------------
	 * CONSTANT FOR PROGRAM
	 * -------------------------------------------------------------------
	 *********************************************************************/

	int menu;          // Menu option the user chose
	PersonNode *head;  // The head of the linked list
	bool invalid;      // Controls the do while loop

	// Initializes head to NULL
	head = NULL;

	cout << PrintHeader(asName, asType, asNum);

	// Gets and checks the uses input for validity
	do
	{
		invalid = false;
		cout << left << "STACK MENU:\n"
				"1 – Add a person (PUSH)\n"
				"2 – Remove a person (POP)\n"
				"3 – Is the stack empty? (ISEMPTY)\n"
				"4 – Who is on top? (PEEK)\n"
				"5 – How many people are there? (SIZE)\n"
				"0 – to Exit\n"
				"Enter a command? ";

		if(!(cin >> menu))
		{
			cout << endl << "**** Please input a number between 0 and 5****"
					"\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(menu < 0 || menu > 5)
		{
			cout << endl << endl << "****The number "<< menu << " is an invalid"
					" entry****";
			cout << endl << "**** Please input a number between 0 and 5****"
					"\n\n";
			invalid = true;
		}
	} while (invalid);

	// Clears the buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Decrements the menu
	menu--;

	// Loops the program until the user is done
	while (menu != -1)
	{
		switch (Menu(menu))
		{
			// Adds a node to the list
		case PUSH:
			head = Push(head);
			break;
			// Removes a node
		case POP:
			head = Pop(head);
			break;
			// Checks to see if the list is empty
		case ISEMPTY:
			if ((IsEmpty(head)))

			{
				cout << endl << "Yes, the stack is empty.\n";
			}
			else
			{
				cout << endl << "The stack is NOT empty.\n";
			}
			break;
			// Outputs the top node of the list
		case PEEK:
			Peek(head);
			break;
			// Outputs the size of the list
		case SIZE:
			if(Size(head) > 1)
			{
				cout << endl << endl << "There are " << Size(head) <<
						" people on the stack." << endl << endl;
			}
			else if (Size(head) == 1)
			{
			cout << endl << "There is one person in the stack.\n";
			}
			else
			{
				cout << endl << "Nobody is on the stack!\n";
			}
			break;
		}

		// Gets and checks the uses input for validity
		do
		{
			invalid = false;
			cout << left << "\nSTACK MENU:\n"
					"1 – Add a person (PUSH)\n"
					"2 – Remove a person (POP)\n"
					"3 – Is the stack empty? (ISEMPTY)\n"
					"4 – Who is on top? (PEEK)\n"
					"5 – How many people are there? (SIZE)\n"
					"0 – to Exit\n"
					"Enter a command? ";

			if (!(cin >> menu))
			{
				cout << endl
						<< "**** Please input a number between 0 and 5****\n\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}
			else if (menu < 0 || menu > 5)
			{
				cout << endl << endl << "****The number " << menu
						<< " is an invalid entry****";
				cout << endl
						<< "**** Please input a number between 0 and 5****\n\n";
				invalid = true;
			}
		} while (invalid);
		// Clears the buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		// Decrements the menu
		menu--;
	}

	return 0;
}
