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
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
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
