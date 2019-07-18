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
 * Functions - Coin Flip
 * _______________________________________________________________________
 * This program inputs the user's name and gender, then has the user flip
 * a coin until heads is flipped 3 times in a row.
 * _______________________________________________________________________
 * INPUT:
 *	string 	userName;	    - The name of the user
 *	char    userGender;     - The gender of the user
 *
 * OUTPUT:
 * <nothing Additional>
 *
 * PROCESS & CALC:
 *  totalHeadCount;  - The total number heads flipped
 *  headCount;       - Counts heads for while loop
 *  totalCount;      - The total number of flips
 *  headAverage;     - Average number of heads flipped
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

	string   inputFileName;		// INPUT   - The name of the input file
	string   outFileName;		// INPUT   - The name of the output file
	int 	 menuNum;			// INPUT   - The menu number entered
	ifstream inFile;			// INPUT   - The input file variable
	ofstream outFile;			// INPUT   - The output file variable
	string   nameAr[AR_SIZE];	// CALC	   - The string array
	int		 idAr[AR_SIZE];		// CALC    - The integer array
	float 	 balanceAr[AR_SIZE];// CALC	   - The float array
	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

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

	//initializes the arrays
	InitializeStrAr(nameAr, AR_SIZE);
	InitializeIntAr(idAr, AR_SIZE);
	InitializeFloatAr(balanceAr, AR_SIZE);

	//reads in to the three arrays from an input file
	ReadStrIntFloatFromInFile(nameAr,
							  idAr,
							  balanceAr,
							  AR_SIZE,
							  inFile);

	//displaying the menu
	cout << endl << "MENU OPTIONS\n\n";
	cout <<  "1 – Find the larger balance\n"
			 "2 – Find the smaller balance\n"
			 "3 – Obtain the sum of all balances\n"
			 "4 – Obtain the average of all balances\n"
			 "5 – Find person\n"
			 "0 - Exit\n"
			 "Enter an option (0 to exit): ";
	//reads in the menu number you would like to use
	cin >> menuNum;

	//loops through the menu while you enter a valid menu value
	while (menuNum != 0)
	{
		//switch statement that will figure which function to call
		//based on which menu number was entered
		switch (Menu(menuNum-1))
		{
			case LARGER: FindAndOutFileLargestNum(balanceAr,
								   nameAr,
								   idAr,
								   AR_SIZE,
								   outFile);
					break;
			case SMALLER: FindAndOutFileSmallestNum(balanceAr,
								   nameAr,
								   idAr,
								   AR_SIZE,
								   outFile);
					break;
			case SUM: SumOfArray(balanceAr,
					   nameAr,
					   idAr,
					   AR_SIZE,
					   outFile);
					break;
			case AVERAGE: AverageOfArray(balanceAr,
						   nameAr,
						   idAr,
						   AR_SIZE,
						   outFile);
					break;
			case PERSON: SearchStringArray(balanceAr,
					nameAr,
				    idAr,
				    AR_SIZE,
				    outFile);
					break;
			//default value for any number that isn't previously defined
			default : menuNum = 0;
					break;
		}
		//will only ask for another value if the previous value isn't
		//the loop exiting statement
		if (menuNum !=0)
		{
			// outputs the menu
			cout << "MENU OPTIONS\n\n";
				cout <<  "1 – Find the larger balance\n"
						 "2 – Find the smaller balance\n"
						 "3 – Obtain the sum of all balances\n"
						 "4 – Obtain the average of all balances\n"
						 "5 – Find person\n"
						 "0 - Exit\n"
						 "Enter an option (0 to exit): ";
				cin >> menuNum;
		}
	}

	cout << "\nThank you for using my program.";

	//closes the input and output files
	inFile.close();
	outFile.close();
	return 0;
}
