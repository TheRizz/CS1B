/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #5		: Enumerated Types
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/11/2015
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
	const string INPUT_NAME = "input.txt";
	const string OUTPUT_NAME = "output.txt";

	/*******************************************************************/



	//Variables
	string today;
	Days   day;


	// OUTPUTS class header
	ClassHeader();

	cout << "What day is today? ";
	getline(cin, today);

	while (today != "No Day")
	{
		day = StringToDays(today);

		today = DaysToString(day);


		cout << "Today is " << today << "!\n\n";

		cout << "What day is today? ";
			getline(cin, today);
	}

	cout << "**** Invalid day input! ****";

	return 0;
}
