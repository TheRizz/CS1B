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
 * FUNCTION Peek
 * _______________________________________________________________________
 * This function will output the first name in the stack
 * _______________________________________________________________________
 * PRE-CONDITIONS :
 * 		head: The stack
 * POST_CONDITIONS :
 * 		This function will return nothing
 ************************************************************************/
void Peek(PersonNode *perPtr)
{
	PersonNode *tempPtr;       // The pointer to be used to go through the stack
	const int COL_WIDTH = 8;   // The length of the setw

	// Outputs the info if there is a node, if not then outputs a message
	if (!(IsEmpty(perPtr)))
	{
		cout << "\nPEEKING at\n";
		tempPtr = perPtr;
		cout << left << setw(COL_WIDTH) << "Name: " << tempPtr->name << endl;
		cout << setw(COL_WIDTH) << "Gender: " << tempPtr->gender << endl;
		cout << setw(COL_WIDTH) << "Age: " << tempPtr->age << endl;
	}
	else
	{
		cout << endl << "There is nobody to PEEK at!\n";
	}
}
