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
 * FUNCTION IsEmpty
 * _______________________________________________________________________
 * This function will check if the stack is empty or not.
 * _______________________________________________________________________
 * PRE-CONDITIONS :
 * 		head: The stack
 * POST_CONDITIONS :
 * 		This function will return the bool is empty
 ************************************************************************/
bool IsEmpty(PersonNode *head)
{
	// Bool to be true if the list is empty
	bool isEmpty;

	// Sets is empty to false
	isEmpty = false;

	// Checks is the stack is full
	if (head == NULL)
	{
		isEmpty = true;
	}

	return isEmpty;
}
