/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab#6		: Structs
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/02/2015
 ************************************************************************/

	#include "header.h"

/*************************************************************************
 * Structs
 * _______________________________________________________________________
 * This program will recieve a list of names, id's, and balances from an
 * input file and then store them in to a struct. With this data it will
 * do various functions such as search for the largest balance, sum the
 * balances, or search for a specific name.
 * _______________________________________________________________________
 * INPUT:
 * string   inputFileName;		// IN   - The name of the input file
 * string   outFileName;		// IN   - The name of the output file
 * ifstream inFile;				// IN   - The input file variable
 * ofstream outFile;			// IN   - The output file variable
 * OUTPUT:
 * <nothing Additional>
 *
 * PROCESS & CALC:
 * 	int		 largest;			// CALC - The largest value of an array
 *	float 	 sum;				// CALC - An accumulated sum of numbers
 *	int 	 index;				// CALC - The index for a loop
 *	int		 IdSearch[AR_SIZE];	// CALC - The index locations of the
 *								//			searched names
 *	string	 search;			// CALC - The search item
 *	account  company[AR_SIZE];	// CALC - The struct variable
 *
 ************************************************************************/
	int main()
	{

	/*********************************************************************
	* COSNTANTS
	* ___________________________________________________________________
	* AR_SIZE = 10 ; size of the parallel arrays
	* PROMPT  = 40 ; size for file prompt
	********************************************************************/
	const int AR_SIZE = 10;
	const int PROMPT = 40;

	/*******************************************************************/
	//---------------------------------------------------------------------


	account company[AR_SIZE];	// CALC - The struct variable
	string   inputFileName;		// IN   - The name of the input file
	string   outFileName;		// IN   - The name of the output file
	ifstream inFile;			// IN   - The input file variable
	ofstream outFile;			// IN   - The output file variable
	int		 largest;			// CALC - The largest value of an array
	float 	 sum;				// CALC - An accumulated sum of numbers
	int 	 index;				// CALC - The index for a loop
	int		 IdSearch[AR_SIZE];	// CALC - The index locations of the
								//			searched names
	string	 search;			// CALC - The search item
	//---------------------------------------------------------------------

	// Initializes the index value
	index = 0;

	// This function will output the class header to the console
	ClassHeader();

	// Initializes the integer array
	InitializeIntAr(IdSearch, AR_SIZE);

	//Ask what input file you would like to use
	cout << left << setw(PROMPT) <<
			"What input file would you like to use? ";
	getline(cin, inputFileName);

	//Asks for what output file you would like to use
	cout << setw(PROMPT) << "What output file would you like to use? ";
	getline(cin, outFileName);

	//opens the input and output file
	inFile.open(inputFileName.c_str());
	outFile.open(outFileName.c_str());

	//Reads from an input file to a struct
	ReadStructInfile(company, AR_SIZE, inFile);

	//Calculates the largest value in an array of float values and then
	// stores the index location of the value
	largest = SearchLargestFloat(company, AR_SIZE);

	//Accumulates values in an array and outputs the accumulated value
	sum = SumOfArray(company, AR_SIZE);

	//Prompts the user for an input, initializing the LCV for a while loop
	cout << "\nWho do you want to search for (enter done to exit): ";
	getline(cin, search);

	//While loop checks to make sure to exit the loop when the user
	// is finished using the loop
	while(search != "done")
	{
		//Stores the locations of indexes in to an integer array to be
		// accessed later on in the program
		IdSearch[index] = SearchStringArray(company, AR_SIZE, search);
		index ++;

		//Updates the LCV
		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, search);
	}

	//This calculates the values that you have obtained from the program
	// and uses the information to formally output to aon output file
	OutputStructToOutfile(company,
						  largest,
						  sum,
						  AR_SIZE,
						  outFile,
						  IdSearch);

	cout << "\nThank you for using my program.";

	//closes the input and output files
	inFile.close();
	outFile.close();
	return 0;
}
