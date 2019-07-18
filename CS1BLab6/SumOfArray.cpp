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
 * FUNCTION  SumOfArray
 *________________________________________________________________________
 * This function accumulates an array of numbers and returns a float value
 *________________________________________________________________________
 * PRE-CONDITIONS
 * account company[]		:	The struct varaible
 * const int AR_SIZEF		:	Output file variable
 * POST-CONDITIONS
 * 	Returns the accumulation of numbers
 ************************************************************************/

float SumOfArray (
						account company[],	// CALC - The struct varaible
						const int AR_SIZEF)	// CALC - Output file variable
{

	float sum; // float value to store the sum

	//initializes the sum accumulator
	sum = 0;


	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
			sum += company[indexF].balance;
	}	// End for

	return sum;
}
