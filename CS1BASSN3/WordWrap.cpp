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
 * FUNCTION  WordWrap
 *________________________________________________________________________
 * This outputs a long string and makes sure that the words don't exceed
*   the maximum length that a line allows
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function outputs the properly wrapped string
 ************************************************************************/
void WordWrap(string syn,			// CALC - The string to be wrapped
			  ofstream &outFile)	// CALC - The destination for output
{
	const int maxLength = 75; // CALC - Largest length of the line

	string outWordStr;		// CALC - Output word string
	string outLineStr;		// CALC - Output line string
	int    count;			// CALC - Counter variable

	// Loop - checks every character in the string
	for(count = 0; count <= syn.length(); count ++)
	{
		if(syn[count] != ' ') // Checks to see if the char is not a
		{					  // white space
			outWordStr = outWordStr + syn[count]; // Collects the chars
		}										  // and makes a word
		else
		{	// Checks to see if the line and word exceed the max line
			if(outLineStr.length() + outWordStr.length() > maxLength)
			{
				 outFile << outLineStr; // Outputs the line
				 outLineStr.clear();	// Clears the line
				 outFile << endl;		// Brings everything down to
			}							// the next line
			// Adds the word to the line, as well as adds a space after
			outLineStr = outLineStr + outWordStr + ' ';
			// Clears the word
			outWordStr.clear();
		}
	}
	// Outputs anything leftover in the buffer after the while loop ends
	if(outLineStr.length() + outWordStr.length() > maxLength)
	{
		outFile << outLineStr << endl << outWordStr;
	}
	else
	{
		outFile << outLineStr << outWordStr;
	}
}
