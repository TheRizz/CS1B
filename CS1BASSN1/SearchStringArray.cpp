/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Functions And Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#include "header.h"

/**********************************************************
 *
 * FUNCTION  Searches for a String
 *_________________________________________________________
 * This function searches for a specific string to be output
 *_________________________________________________________
 * PRE-CONDITIONS
 *  const string stringArF[] : The name of the string array
 *	const int AR_SIZEF		 : The size of the array
 *	string searchItemF		 : The item to be searched for
 *	int	   searchCountF		 : The counter for the loop
 *	bool   searchNameF		 : The variable to be used to exit the loop
 * POST-CONDITIONS
 * 	This function will output the instances of names found in this
 * 	array
 ***********************************************************/
void SearchStringArray (
						float floatArF [], 	//Float value array
						string strArF [],	//String array
						int	   intArF[],	//Integer array
						const int AR_SIZEF,	//Array size
						ostream &outFile)	//Output file variable
{
	// constants to align the output
	const int ALGN_ID = 9;
	const int ALGN_NAME = 25;
	const int ALGN_BAL = 10;

	string searchItemF;  // The item to be searched for
	int	   searchCountF; // The counter for the loop
	bool   searchNameF;	 // The variable to be used to exit the loop

	cin.ignore(1000,'\n');
	cout << "\nWho do you want to search for (enter done to exit)? ";

	// Read in the item that the user wishes to search
	getline(cin, searchItemF);

	// PROMPTS user to search for a name within the index until "done"
		searchCountF = 0;
		searchNameF = false;

		// Counts the number of instances that a name is found
		while(AR_SIZEF > searchCountF && !searchNameF)
		{
			if(searchItemF == strArF[searchCountF])
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

			outFile << "Larger Balance:\n" << left;
			outFile << setw(ALGN_ID) << "ID #"  << setw(ALGN_NAME);
			outFile << "NAME" << "BALANCE DUE\n";
			outFile << setw(ALGN_ID) << "----" << setw(ALGN_NAME);
			outFile << "--------------------";
			outFile << "-----------\n";
			outFile << setw(ALGN_ID) << intArF[searchCountF];
			outFile << setw(ALGN_NAME) << strArF[searchCountF];
			outFile << '$' << right << setw(ALGN_BAL);
			outFile << fixed << setprecision(2) << floatArF[searchCountF];
			outFile << setprecision(6);
			outFile.unsetf(ios::fixed);
			outFile << endl << endl;
		}
		else
		{
			cout << searchItemF << " was not found.\n\n";
		}

}

