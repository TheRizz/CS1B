/*************************************************************************
 * AUTHOR		: Ryan Martinez, Sean Trehy
 * STUDENT ID	: 389657
 * Lab #2		: Functions - Coin Flip
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/28/2015
 ************************************************************************/

	#include "Lab2.h"

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

  //----------------------------------------------------------------------

	string 	userName;	 	// INPUT   - The name of the user
	char    userGender;     // INPUT   - The gender of the user
	int		totalCount;     // PROCESS - The total number of flips
	int		headCount;      // PROCESS - Counts heads for while loop
	int		totalHeadCount; // PROCESS - The total number heads flipped
	int		headAverage;    // CALC    - Average number of heads flipped

  //----------------------------------------------------------------------

	// Initialization section where the variables are all initialized
	totalCount = 0;
	headCount = 0;
	totalHeadCount = 0;

	// This function will output the class header to the console
	ClassHeader();

	cout << "Welcome to coin toss! Get three heads in a row to win!\n\n";

	// This function reads in the users information
	GetUserInfo(userName, userGender);

	cout << endl << "Try to get 3 heads in a row. Good luck ";

	// This if statement reads in the users gender to properly output
	// 	the correct gender pronoun
	if(userGender == 'M')
	{
	 cout << "Mr. ";
	}
	else if(userGender == 'F')
	{
	 cout << "Mrs. ";
	}

	cout << userName << "!\n\n";

	// This function will randomly flip a coin to produce a random
	//	output that the user would want
	FlipCoin(totalHeadCount, headCount, totalCount);

	// This line will use the function to calculate the average times
	// 	that the program landed on heads and assign the average to
	// 	a variable in the main function
	headAverage = CalcAverage(totalCount, totalHeadCount);

	// This function outputs the end results to the console
	OutputResults(totalCount, headAverage);

	return 0;
}
