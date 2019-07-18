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
 * This function will remove a name from the stack
 * _______________________________________________________________________
 * PRE-CONDITIONS :
 * 		head: The stack
 * POST_CONDITIONS :
 * 		This function will return the new stack
 ************************************************************************/
PersonNode *Pop(PersonNode *head)
{
	const int COL_WIDTH = 8; // The length of the setw
	PersonNode *tempPtr;     // The pointer used to traverse the list

	// Sets tempPtr equal to the head of the stack
	tempPtr = head;

	// Outputs the info to be removed if the list is full, else a message
	if (!(IsEmpty(head)))
	{
		cout << endl << "POPPING";

		cout << endl << setw(COL_WIDTH) << "Name: " << tempPtr->name;

		cout << endl << setw(COL_WIDTH) << "Gender: " << tempPtr->gender;

		cout << endl << setw(COL_WIDTH) << "Age: " << tempPtr->age;

		cout << endl;

		head = head->next;
		delete tempPtr;
		tempPtr = NULL;
	}
	else
	{
		cout << endl << "Can't POP from an empty stack!\n";
	}

	return head;

}
