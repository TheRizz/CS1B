/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #25b		: Intro to Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/
#include "header.h"
/*************************************************************************
 * Intro to Arrays
 * _______________________________________________________________________
 * This program reads in 10 user input names and then searched through
 * the array of names to find the number of instances that the name
 * comes up in the array.
 * _______________________________________________________________________
 * INPUT:
 *
 * OUTPUT:
 *
 ************************************************************************/
int main()
{

	/*********************************************************************
	 * COSNTANTS
	 * ___________________________________________________________________
	 * AR_SIZE = 10 ; size of the parallel arrays
	 ********************************************************************/
	const int AR_SIZE = 10;
	const string INPUT_NAME = "input.txt";
	const string OUTPUT_NAME = "output.txt";

	/*******************************************************************/

	//Variables
	string strAr[AR_SIZE];		// IN & CALC - string array


	// OUTPUTS class header
	ClassHeader();

	// Initializes the string array
	InitializeStrAr(strAr, AR_SIZE);

	// Reads the user input in to the string
	ReadStrInput (strAr, AR_SIZE);

	// Searches for the number of instances that a name comes up
	SearchInstances (strAr, AR_SIZE);

	cout << endl << "Thank you for using my program";

	return 0;
}
