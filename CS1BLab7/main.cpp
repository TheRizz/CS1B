/*************************************************************************
 * AUTHOR		: Ryan Martinez, Arya Daroui
 * STUDENT ID	: 389657
 * Lab#7		: Testing
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/09/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 * Testing
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

	/*******************************************************************/
	//---------------------------------------------------------------------
	float buffer;
	int numSheep;
	int numBars;
	int barsPerSheep;
	int barsLeftOver;
	bool invalid;
	//---------------------------------------------------------------------

	//INITIALIZE
	invalid = false;


	// OUTPUT class header
	ClassHeader();

	//LOOP for the prompt until valid input
	do
	{
		cout << "\n\nEnter the number of Sheep: ";
		if (!(cin >> buffer))
		{

			cout << "This is an invalid input."
					<< " Please enter an integer between ";
			cout << 0 << " and " << numeric_limits<streamsize>::max();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;

		} //BEHOLD the worst boolean expression ever. But it's unavoidable
		else if (((numSheep = int(buffer)) < 0 // because we can't assign anywhere else :-(
		|| numSheep >= (numeric_limits<streamsize>::max() - 1))
				|| (buffer - numSheep) != 0)
		{
			cout << "This is an invalid input."
					<< " Please enter an integer between ";
			cout << 0 << " and " << numeric_limits<streamsize>::max();
			invalid = true;
		}
		else
		{
			numSheep = int(buffer);
			invalid = false;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (invalid);

	invalid = false;

	do
	{
		cout << "\n\nEnter the number of Chocolate Bars: ";

		if (!(cin >> buffer))
		{

			cout << "This is an invalid input."
					<< " Please enter an integer between ";
			cout << 0 << " and " << numeric_limits<streamsize>::max();
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;

		} //BEHOLD the worst boolean expression ever. But it's unavoidable
		else if  (((numBars = int(buffer)) < 0 // because we can't assign anywhere else :-(
				|| numBars >= (numeric_limits<streamsize>::max() - 1))
						|| (buffer - numBars) != 0)
		{
			cout << "This is an invalid input."
					<< " Please enter an integer between ";
			cout << 0 << " and " << numeric_limits<streamsize>::max();
			invalid = true;
		}
		else
		{
			numBars = int(buffer);
			invalid = false;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		}
	} while (invalid);

	barsPerSheep = numBars / numSheep;
	if (barsPerSheep > 4)
	{
		barsPerSheep = 4;
		barsLeftOver = numBars - (numSheep * 4);
	}
	else
	{
		barsLeftOver = numBars % numSheep;
	}

	cout << "\nEach sheep should have " << barsPerSheep
			<< " bars. There will be " << barsLeftOver << " bars left over."
			<< endl;

	return 0;
}
