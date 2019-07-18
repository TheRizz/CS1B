/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/


#include "header.h"

/*************************************************************************
 *
 * FUNCTION  ErrorAlignSmall
 *________________________________________________________________________
 * This function aligns the error messages with a small error range
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function properly returns correctly spaced error message
 ************************************************************************/
 void ErrorAlignSmall(int input) // CALC - Number in the error message
 {
	 ostringstream out;	// Converts the int to a string to get the size
	 string length;		// Stores the converted ostring variable
	 int	size;		// Stores the arithmetic calculation

	 cout << "\n**** The number " << input;
	 out << input;
	 length = out.str();
	 size = 27 - length.size();
	 cout << left << setw(size) << " is an invalid entry";
	 cout << "****\n";

 }
