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
 * FUNCTION  ReadStrIntFloatFromInFile
 *________________________________________________________________________
 * This function reads in to a string array, integer array, and float
 * array from an infile
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
 * POST-CONDITIONS
 * 	<stores values from an infile in to three arrays>
 ************************************************************************/

void ReadStrIntFloatFromInFile(
						string strArF [], 	// IN - string array
						int	 intArF [],		// IN - integer array
						float  floatArF[],	// IN - float array
						const int AR_SIZEF,	// IN - array size
						ifstream &inFile)	// IN - infile
{
	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		getline(inFile, strArF[indexF]);
		inFile >> intArF[indexF];
		inFile >> floatArF[indexF];
		inFile.ignore(1000,'\n');
	}	// End for
}
