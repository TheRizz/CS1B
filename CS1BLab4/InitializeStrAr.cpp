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
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	string strArF[]		: Must be previously defined
 *	const int AR_SIZEF	: Must be previously defined
 * POST-CONDITIONS
 * 	<Initializes the string array by clearing the memory space.>
 ************************************************************************/

void InitializeStrAr (string strArF [], 	// IN - string array
					  const int AR_SIZEF)	// IN - array size
{
	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		strArF[indexF].clear();
	}	// End for
}
