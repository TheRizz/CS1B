/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Functions And Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initialized an integer array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
 * POST-CONDITIONS
 * 	<Initializes the array to 0>
 ************************************************************************/
void InitializeIntAr(int intArF[], 			// IN - integer array
					 const int AR_SIZEF)	// IN - array size
{
	int indexF; // CALC - This is the counter for the for loop

	// This loop initializes all of the values in the integer array to -1
	for(indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		intArF[indexF] = 0;
	} // End for
}
