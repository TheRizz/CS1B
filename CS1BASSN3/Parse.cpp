/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Intro To Linked Lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/23/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  Parse
 *________________________________________________________________________
 * This function ensures that a string is not too long to be output in a
*   certain amount of space
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function properly returns the parsed string
 ************************************************************************/
 string Parse(string title) // CALC - String to be parsed
{
	 ostringstream out; // The ostring variable

	 if(title.size() > 47) // Enters loop if the title is larger than 47
	 {					   //  characters

		 out << title.substr(0, 44) + " ..."; // Adds ellipses if the
	 }										  // string is too long
	 else
	 {
		 out << title;						  // Outputs the title if
	 }										  // it is short enough
	 return out.str(); // Returns the parsed string to the calling function
}
