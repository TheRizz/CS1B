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
 * FUNCTION  FindAndOutFileLargestNum
 *________________________________________________________________________
 * This function find a largest number in an array and outputs it to
 * an output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 * account company[]		:	The struct varaible
 * const int AR_SIZEF		:	The array size
 * POST-CONDITIONS
 * 	Returns the index of the location where the largest value is stored
 ************************************************************************/

int SearchLargestFloat (
				account company[],	// CALC - The struct varaible
				const int AR_SIZEF)	// CALC - The array size
{

	int temp;		//the value that will accumulate the sum
	int indexF;		//counter for the for loop

	//initializes the value
	temp = 0;

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		if(company[indexF].balance > company[temp].balance)
		{
			temp = indexF;
		}
	}	// End for
	return temp;
}
