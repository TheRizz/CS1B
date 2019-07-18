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
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	float	floatArF []	 : Float value array
 *	string  strArF []	 : String array
 *	int 	intArF[]	 : Integer array
 *	const 	int AR_SIZEF : Array size
 *	ostream &outFile	 : Output file variable
 * POST-CONDITIONS
 * 	<Initializes the string array by clearing the memory space.>
 ************************************************************************/

void SumOfArray (
						float floatArF [], 	// IN - Float value array
						string strArF [],	// IN - String array
						int	   intArF[],	// IN - Integer array
						const int AR_SIZEF,	// IN - Array size
						ostream &outFile)	// IN - Output file variable
{

	float sum; // float value to store the sum

	//initializes the sum accumulator
	sum = 0;


	int indexF;		// CALC - counter for the for loop

	// Initializes the string array
	for (indexF = 0; indexF < AR_SIZEF; indexF ++)
	{
			sum += floatArF[indexF];
	}	// End for

	// outputs to show that the information is being entered in to the
	// output file
	cout << "\nObtaining the sum of all balances…\n\n";

	// outputs to the output file
	outFile << "Sum of Balance for all persons:\n" << left;
	outFile << "$" << right << setw(10);
	outFile << fixed << setprecision(2) << sum;
	outFile << setprecision(6);
	outFile.unsetf(ios::fixed);
	outFile << endl << endl;
}
