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
 * This function will check the size of the stack
 * _______________________________________________________________________
 * PRE-CONDITIONS :
 * 		head: The stack
 * POST_CONDITIONS :
 * 		This function will return the size of the stack
 ************************************************************************/
int Size(PersonNode *head)
{
	int count;           // Counter of the number of nodes
	PersonNode *perPtr;  // Pointer used to traverse the list

	// Initializes count to 0
	count = 0;

	// Sets perPtr equal to head
	perPtr = head;
	// Counts the number of nodes
	while (perPtr != NULL)
	{
		count++;
		perPtr = perPtr->next;
	}

	return count;
}
