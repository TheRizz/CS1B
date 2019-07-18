/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab#6		: Structs
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/02/2015
 ************************************************************************/
#include "header.h"

/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initializes an array of integers
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	int intArF[AR_SIZEF]	:	The integer array
 *	const int AR_SIZEF		:	The size of the array
 * POST-CONDITIONS
 * 	Initializes the array to 0
 ************************************************************************/
void InitializeIntAr(int intArF[], 			// IN - integer array
					 const int AR_SIZEF)	// CALC - Array size
{
	int indexF; // CALC - This is the counter for the for loop

	// This loop initializes all of the values in the integer array to -1
	for(indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		intArF[indexF] = 0;
	} // End for
}
