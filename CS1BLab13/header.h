/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

// preprocessors directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <ios>
using namespace std;

// enumerated types of menu options
enum Menu
{
	EXIT,
	ADD_SHEEP,
	OUTPUT_FIRST,
	FIND,
	SIZE,
	OUTPUT_LIST,
	CLEAR
};



/*************************************************************************
* PrintHeader
* This function receives an assignment name, type
* and number then outputs the appropriate header.
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	asName: Assignment Name has to be previously defined
* 	asType: Assignment Type has to be previously defined
* 	asNum : Assignment Number has to be previously defined
*
* POST-CONDITIONS
* 	This function will output the class header
**************************************************************************/
void PrintHeader(ostream &output, // OUT - stream output
		string asName, 			  // OUT - assignment name
		char asType, 			  // OUT - assignment type
		int asNum);				  // OUT - assignment #

/*************************************************************************
* MenuPrompt
* This function returns the menu prompt as a string to be re-used with
* more versatility (i.e. in ValidateInput function)
* ------------------------------------------------------------------------
* PRE-CONDITIONS
* 	none
*
* POST-CONDITIONS
* 	This function will return the menu prompt as a string
**************************************************************************/
Menu MenuPrompt();

/************************************************************************
* ErrorAlignSmall
*   This function aligns the error messages with a small error range
*
* RETURNS: nothing
* 	<Outputs the correctly aligned error message>
*************************************************************************/
void ErrorAlignSmall(int input); // CALC - Number in the error message

/************************************************************************
* GetInt
*   This function will prompt the user to input and then error check an
*   input and return the error checked input to main
*
* RETURNS: Error checked input
* 	<Outputs the correctly aligned error message>
*************************************************************************/
int GetInt();


#endif /* HEADER_H_ */
