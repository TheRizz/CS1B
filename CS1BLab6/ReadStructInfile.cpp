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
 * FUNCTION  ReadStructInfile
 *________________________________________________________________________
 * This function reads in to a struct that contains a string, an int, and
 * a float value from an infile.
 *________________________________________________________________________
 * PRE-CONDITIONS
 * account company[]		:	The struct varaible
 * const int AR_SIZEF		:	The array size
 * ifstream &inFile			:	The infile variable
 * POST-CONDITIONS
 * 	Stores values from an infile in to a struct
 ************************************************************************/

void ReadStructInfile(
						account company[],	// IN - The struct varaible
						const int AR_SIZEF,	// IN - The array size
						ifstream &inFile)	// IN - The infile variable
{
	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		getline(inFile, company[indexF].name);
		inFile >> company[indexF].id;
		inFile >> company[indexF].balance;
		inFile.ignore(1000,'\n');
	}	// End for
}
