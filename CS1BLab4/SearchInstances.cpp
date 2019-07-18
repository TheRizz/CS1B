/*************************************************************************
 * AUTHOR		: Ryan Martinez, Derek Miller
 * STUDENT ID	: 389657
 * Lab #25b		: Intro to Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  SearchInstances
 *________________________________________________________________________
 * This function searches the number of instances that a string comes up
 * and counts the number to be output later
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	string strArF[]		: Must be previously defined
 *	const int AR_SIZEF	: Must be previously defined
 * POST-CONDITIONS
 * 	<Initializes the string array by clearing the memory space.>
 ************************************************************************/

void SearchInstances (string strArF[], const int AR_SIZEF)
{
	string search;
	int index;
	int count;

	// initializes the index and the counter
	index = 0;
	count = 0;

	// initialization of the while loop
	cout << "Who do you want to search for (enter done to exit)? ";
	getline (cin, search);

	// checks the input for the while loop
	while (search != "done")
	{
		// embedded for loop in the while loop to search for the number
		// of instances that a certain name shows up
		for (index = 0; index < AR_SIZEF; index ++)
		{
			if (strArF[index] == search)
			{
				count ++;
			}
		}

		// will find out the proper output based on the number of times
		// a name has come up
		if (count > 1)
		{
			cout << "There are " << count << " of instances of the name ";
			cout << search << ".";
		}
		else if (count == 1)
		{
			cout << "There is one instance of the name " << search << ".";
		}
		else if (count == 0)
		{
			cout << search << "\'s name does not exist in the list.";
		}

		cout << endl << endl;

		index = 0;
		count = 0;

		// changes the LCV at the end of the loop
		cout << "Who do you want to search for (enter done to exit)? ";
		getline (cin, search);
	}
}
