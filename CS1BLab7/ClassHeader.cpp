/*************************************************************************
 * AUTHOR		: Ryan Martinez, Arya Daroui
 * STUDENT ID	: 389657
 * Lab#7		: Testing
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/09/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * Outputs the class header
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ************************************************************************/
void ClassHeader()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	  : Programmer's Name
	 * CLASS		  : Student's Course
	 * SECTION		  : Class Days and Times
	 * LAB_NUM		  : Lab Number (specific to this lab)
	 * LAB_NAME		  : Title of the Lab

	 ********************************************************************/

	const char PROGRAMMER[30] = "Ryan Martinez, Arya Daroui";
	const char CLASS[5] = "CS1B";
	const char SECTION[25] = "MWF: 8:00a - 10:50a";
	const int LAB_NUM = 7;
	const char LAB_NAME[25] = "Testing";

	cout << left;
	cout << "**************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;
}
