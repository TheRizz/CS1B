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
 * FUNCTION  ClassHeader
 *________________________________________________________________________
 * Outputs the class header to the console.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading to the console.
 ************************************************************************/
void ClassHeaderCout()
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

	const char PROGRAMMER[30] = "Ryan Martinez";
	const char CLASS[5] = "CS1B";
	const char SECTION[25] = "MWF: 8:00a - 10:50a";
	const int LAB_NUM = 4;
	const char LAB_NAME[40] = "Intro To Linked Lists";

	cout << left;
	cout << "*********************************************************"
			   "******************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  ASSN #" << setw(8) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n*********************************************************"
			   "******************\n";
	cout << right;
}
