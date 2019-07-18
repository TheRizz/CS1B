/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab#6		: Structs
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/02/2015
 ************************************************************************/

#include "header.h"

/**********************************************************
 *
 * FUNCTION  SearchStringArray
 *_________________________________________________________
 * This function searches for a specific string and returns the index
 * 	value for that name
 *_________________________________________________________
 * PRE-CONDITIONS
 *  account company[]		 : The struct varaible
 *	const int AR_SIZEF		 : The size of the array
 *	string searchF			 : The string being searched for
 * POST-CONDITIONS
 * 	This function returns the index value for the location in which the
 * 		item being searched for is located
 ***********************************************************/
int SearchStringArray (
						account company[],	// CALC - The struct variable
						const int AR_SIZEF, // CALC - Array size
						string searchF)		// CALC - The string being
											//		   searched for
{
	string searchItemF;  // The item to be searched for
	int	   searchCountF; // The counter for the loop
	bool   searchNameF;	 // The variable to be used to exit the loop

	// PROMPTS user to search for a name within the index until "done"
		searchCountF = 0;
		searchNameF = false;

		// Counts the number of instances that a name is found
		while(AR_SIZEF > searchCountF && !searchNameF)
		{
			if(searchF == company[searchCountF].name)
			{
				searchNameF = true;
			}
			else
			{
				searchCountF ++;
			}
		}
		if(searchNameF)
		{
			cout << "Found.\n\n";

		}
		else
		{
			cout << searchF << " was not found.\n\n";
		}

		return searchCountF;
}

