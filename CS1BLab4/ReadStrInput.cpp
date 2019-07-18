/*************************************************************************
 * AUTHOR		: Ryan Martinez, Derek Miller
 * STUDENT ID	: 389657
 * Lab #25b		: Intro to Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  ReadStrInput
 *________________________________________________________________________
 * This function reads user input in to a string array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	string strArF[]		: Must be previously defined
 *	const int AR_SIZEF	: Must be previously defined
 * POST-CONDITIONS
 * 	<Initializes the string array by clearing the memory space.>
 ************************************************************************/

void ReadStrInput (string strArF[], const int AR_SIZEF)
{
	int index;

	// initializes the index
	index = 0;

	// For loop that will go through each instances of the array
	for(index = 0; index < AR_SIZEF; index ++)
	{
		cout << "Enter name #" << index + 1 << ": ";
		getline(cin, strArF[index]);
	}
	cout << endl;
}
