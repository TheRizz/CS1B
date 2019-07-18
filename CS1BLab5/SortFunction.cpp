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
 *
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * Outputs the class header
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ************************************************************************/
void InsertionSort(int intAr[], const int AR_SIZE)
{
	cout << "\nPerforming Insertion Sort!\n\n";
	int temp;
	int j;
	int i;

	temp = 0;

	for(i = 1; i< AR_SIZE; ++i)
	{
		temp = intAr[i];
		j = i-1;
		while(j >= 0 && intAr[j] > temp)
		{
			intAr[j+1] = intAr[j];
			j = j-1;
		}
		intAr[j+1] = temp;
	}
}
