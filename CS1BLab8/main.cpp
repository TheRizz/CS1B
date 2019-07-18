/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #10        : Implementing a Queue
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 10/30/15
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
	int queueSize;			// PROC - size of queue
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
		case DISPLAY_LIST : Pop(head);
		break;
		case IS_EMPTY: isEmpty = IsEmpty(head);
	    if(!isEmpty)
	    {
	  	    cout << "\nThe queue is NOT empty.\n\n";
	    }
		break;
		case SEARCH: Peek(head);
		break;
		case REMOVE: queueSize = Size(head);
		if(queueSize == 1)
		{
			cout << "\nThere is 1 person in the queue.\n\n";
		}
		else
		{
			cout << "\n" << queueSize << " people are in the "
					"queue.\n\n";
		}
		break;
		case CLEAR_LIST: ClearQueue(head);
						  cout << endl;
		break;
		case EXIT : cout << "\nThank you for using my program!";
		}

	}while(menuChoice != EXIT);

	return 0;
}
