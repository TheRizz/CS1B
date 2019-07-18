/*************************************************************************
 * AUTHOR         : Ryan Martinez, Jake Estrada
 * STUDENT ID     : 389657
 * LAB #10        : Creating an Ordered List
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/6/15
 *************************************************************************/

#include "header.h"

/**************************************************************************
* Implementing a Queue
*-------------------------------------------------------------------------
* This program emulates queue functions and allows the user to push, pop,
* check if empty, peek, or check size of current queue of names, gender, &
* ages.
*-------------------------------------------------------------------------
* INPUTS:
* menuChoice : user inputs menu choice (converted from int to enum type)
*
* PROC:
* queueSize  : size of current queue
* isEmpty    : bool assigned from IsEmpty function
*
* IN & OUT:
* head 		 : head of linked list used to track person data
**************************************************************************/

int main()
{
	Menu menuChoice;		// IN - user input choice converted to enum
	bool isEmpty;			// PROC - bool variable to be assigned from
							// IsEmpty function

	PersonNode *head;		// IN & OUT - head of linked list used to track
							// person data

	// PROC - initializing head to empty for empty list
	head = NULL;

	// OUT - print header function
	PrintHeader(cout, "Creating an Ordered List", 'L', 11);

	// PROC - do while loop for menu prompt until user inputs exit key
	do{
		menuChoice = MenuPrompt();

		// IN & OUT - switch statement for menu choice and execution of
		// related functions
		switch(menuChoice)
		{
		case CREATE_LIST : CreateList(head);
		break;
		case DISPLAY_LIST : if(!IsEmpty(head))
		{
							DisplayList(head);
		}
		else
		{
			cout << "\nCan't display an empty list\n\n";
		}
		break;
		case IS_EMPTY: isEmpty = IsEmpty(head);
	    if(!isEmpty)
	    {
	  	    cout << "\nNo, the list is NOT empty.\n\n";
	    }
	    else
	    {
	    	cout << "\nYes, the list is empty.\n\n";
	    }
		break;
		case SEARCH:
		if(!IsEmpty(head))
		{
			Search(head);
		}
		else
		{
			cout << "\nCan't search an empty list\n\n";
		}
		break;
		case REMOVE:
		if(!IsEmpty(head))
		{
			Remove(head);
		}
		else
		{
			cout << "\nCan't remove from an empty list!\n\n";
		}
		break;
		case CLEAR_LIST: Clear(head);
						  cout << endl;
		break;
		case EXIT : cout << "\nThank you for using my program!";
		}

	}while(menuChoice != EXIT);

	return 0;
}
