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
 * FUNCTION  ClassHeader
 *________________________________________________________________________
 * Outputs the class header to an output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading to an output file.
 ************************************************************************/
void ClassHeader(ofstream &outFile)
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
	const int LAB_NUM = 3;
	const char LAB_NAME[40] = "Intro To Linked Lists";

	outFile << left;
	outFile << "*********************************************************"
			   "******************";
	outFile << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	outFile << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	outFile << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	outFile << "\n*  ASSN #" << setw(8) << LAB_NUM << ": " << LAB_NAME;
	outFile << "\n*********************************************************"
			   "******************\n";
	outFile << right;
}
