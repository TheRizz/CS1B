/*************************************************************************
 * AUTHOR		: Ryan Martinez, Keval Varia
 * STUDENT ID	: 389657, 1024574
 * Assignment	: Binary Search
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/25/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * Outputs the class header
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ************************************************************************/
void outputArray(int intAr[],
				const int AR_SIZE)
{

	for (int index = 0; index < AR_SIZE; index++)
	{
		cout << "Index# " << index << ": ";
		cout << intAr[index] << endl;
	}
}
