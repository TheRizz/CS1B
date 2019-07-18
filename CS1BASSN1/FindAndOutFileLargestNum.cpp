/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Functions And Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  FindAndOutFileLargestNum
 *________________________________________________________________________
 * This function find a largest number in an array and outputs it to
 * an output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
 * POST-CONDITIONS
 * 	<Calculates and outputs the largest number to a file>
 ************************************************************************/

void FindAndOutFileLargestNum (
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

	int temp;		//the value that will accumulate the sum
	int indexF;		//counter for the for loop

	//initializes the value
	temp = 0;

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
		if(floatArF[indexF] > floatArF[temp])
		{
			temp = indexF;
		}
	}	// End for

	// outputs to show that the information is being entered in to the
	// output file
	cout << "\nFinding the larger balance…\n\n";

	// outputs to the output file
	outFile << "Larger Balance:\n" << left;
	outFile << setw(ALGN_ID) << "ID #"  << setw(ALGN_NAME) << "NAME";
	outFile << "BALANCE DUE\n";
	outFile << setw(ALGN_ID) << "----" << setw(ALGN_NAME);
	outFile << "--------------------";
	outFile << "-----------\n";
	outFile << setw(ALGN_ID) << intArF[temp];
	outFile << setw(ALGN_NAME) << strArF[temp];
	outFile << '$' << right << setw(ALGN_BAL);
	outFile << fixed << setprecision(2) << floatArF[temp];
	outFile << setprecision(6);
	outFile.unsetf(ios::fixed);
	outFile << endl << endl;
}
