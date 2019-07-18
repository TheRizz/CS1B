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
 * FUNCTION  AverageOfArray
 *________________________________________________________________________
 * This function will calculate the average and output the average to the
 * output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
 * POST-CONDITIONS
 * 	<Outputs the information to the output file.>
 ************************************************************************/

void AverageOfArray (
				float floatArF [], 	//Float value array
				string strArF [],	//String array
				int	   intArF[],	//Integer array
				const int AR_SIZEF,	//Array size
				ostream &outFile)	//Output file variable
{
	float average;  // float value to calculate the average
	int indexF;		// counter for the for loop

	// Initialize this value so it can be used as an accumulator
	average = 0;

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
			average += floatArF[indexF];
	}	// End for

	// calculates the average from the previously counted sum
	average = average / indexF;

	// outputs to show that the information is being entered in to the
	// output file
	cout << "\nObtaining the average of all balances…\n\n";

	// outputs to the output file
	outFile << "Average Balance for all persons:\n" << left;
	outFile << "$" << right << setw(10);
	outFile << fixed << setprecision(2) << average;
	outFile << setprecision(6);
	outFile.unsetf(ios::fixed);
	outFile << endl << endl;
}
