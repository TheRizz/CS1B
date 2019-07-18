/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Searching Linked lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 11/13/2015
 ************************************************************************/


#include "header.h"

/*************************************************************************
 *
 * FUNCTION  ErrorAlignLarge
 *________________________________________________________________________
 * This function aligns the error messages with a large error range
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function properly returns correctly spaced error message
 ************************************************************************/
 void ErrorAlignLarge(int input) // CALC - Number in the error message
 {
	 ostringstream out;	// Converts the int to a string to get the size
	 string length;		// Stores the converted ostring variable
	 int	size;		// Stores the arithmetic calculation

	 cout << "**** The number " << input;
	 out << input;
	 length = out.str();
	 size = 33 - length.size();
	 cout << left << setw(size) << " is an invalid entry";
	 cout << "****\n";

 }
