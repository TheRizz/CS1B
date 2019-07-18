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
 * FUNCTION  OutputStructToOutfile
 *_________________________________________________________
 * This function outputs information gathered in main, then uses it to
 * find the proper values to return to an output file
 *_________________________________________________________
 * PRE-CONDITIONS
 *  account company[]	 :	The struct variable
 *  int		largest		 :	The index for the largest value
 *  float	sum			 :   The accumulated value of an array of numbers
 *  const int 	AR_SIZE  :	Array size
 *  ofstream 	&outFile :	Tells the program where to output information
 *  int		IdSearch[]	 :	Array containing the indexes for the search

 * POST-CONDITIONS
 * 	This function outputs the display to the information to an output file
 ***********************************************************/
void OutputStructToOutfile (
			account 	company[],	// OUT  - The struct variable
			int			largest,	// OUT  - The index for the largest
									//        value
			float		sum,		// OUT  - The accumulated value of
									//		  an array of numbers
			const int 	AR_SIZE,	// CALC - Array size
			ofstream 	&outFile,	// CALC - Tells the program where
									//		   to output information
			int			IdSearch[]) // OUT  - Array containing the
									// 		   indexes for the search
{
	// Constants to align the output formally
	const int ALGN_ID = 9;
	const int ALGN_NAME = 25;
	const int ALGN_BAL = 10;

	int indexF;				// CALC - Used as an index to
							//			cycle through an array
	float totalBalance;		// CALC - Accumulator that adds up the
							//			balances of the found members

	//Initializes these two values to be used later
	totalBalance = 0;
	indexF = 0;

	//Outputs everything to an output file in nice and orderly fashion
	outFile << "Higher Balance:\n";

	outFile << left << setw(ALGN_ID) << "ID #"  << setw(ALGN_NAME);
	outFile << "NAME" << "BALANCE DUE\n";
	outFile << setw(ALGN_ID) << "----" << setw(ALGN_NAME);
	outFile << "--------------------";
	outFile << "-----------\n";
	outFile << setw(ALGN_ID) << company[largest].id;
	outFile << setw(ALGN_NAME) << company[largest].name;
	outFile << '$' << right << setw(ALGN_BAL);
	outFile << fixed << setprecision(2) << company[largest].balance;
	outFile << setprecision(6);
	outFile.unsetf(ios::fixed);
	outFile << endl << endl;

	outFile << "Total Balance for all persons:\n";
	outFile << '$' << setw(ALGN_BAL);
	outFile << fixed << setprecision(2) << sum << endl << endl;

	outFile << "Search Names:\n";
	outFile << left << setw(ALGN_ID) << "ID #"  << setw(ALGN_NAME);
	outFile << "NAME" << "BALANCE DUE\n";
	outFile << setw(ALGN_ID) << "----" << setw(ALGN_NAME);
	outFile << "--------------------";
	outFile << "-----------\n";


	//This will make it so that only valid values get stored after being
	//	searched for
	while(IdSearch[indexF] != 0 && indexF < AR_SIZE)
	{
		if (IdSearch[indexF] < AR_SIZE)
		{
		outFile << setw(ALGN_ID) << company[IdSearch[indexF]].id;
		outFile << setw(ALGN_NAME) << company[IdSearch[indexF]].name;
		outFile << '$' << right << setw(ALGN_BAL);
		outFile << fixed << setprecision(2)
				<< company[IdSearch[indexF]].balance;
		outFile << setprecision(6) << left;
		outFile.unsetf(ios::fixed);
		outFile << endl;
		totalBalance += company[IdSearch[indexF]].balance;
		}

		//Incriments the counter for the loop
		indexF ++;
	}

	//This outputs the total balance of the people who were successfully
	//	searched for
	outFile << endl << setw (ALGN_ID + ALGN_NAME + 1) << right;
	outFile << "Total Balance Due: $" << setw(ALGN_BAL);
	outFile << fixed << setprecision(2) << totalBalance;
	outFile << setprecision(6);
	outFile.unsetf(ios::fixed);

}
