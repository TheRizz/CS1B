/*************************************************************************
 * AUTHOR		: Ryan Martinez, Keval Varia
 * STUDENT ID	: 389657, 1024574
 * Assignment	: Binary Search
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/25/2015
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
	const int AR_SIZE = 8;

	/*******************************************************************/
	//---------------------------------------------------------------------
	int	intArray[AR_SIZE]	={4,1,7,12,8,13,9,21};
	//---------------------------------------------------------------------

	// This function will output the class header to the console
	ClassHeader();

	outputArray(intArray, AR_SIZE);

	SequentialSearch(intArray, AR_SIZE);

	InsertionSort(intArray, AR_SIZE);

	outputArray(intArray, AR_SIZE);

	BinarySearch(intArray, AR_SIZE);

	return 0;
}
