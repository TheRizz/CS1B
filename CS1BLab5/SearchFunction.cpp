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
void SequentialSearch(int intAr[], const int AR_SIZE)
{
	int index;
	int ikey;
	bool found;
	index = 0;

	found = false;
	for (int i = 1; i <= 4; i++)
	{
		cout <<"\nEnter an integer to search for: ";
		cin >> ikey;
		while(!found && index < AR_SIZE)
		{
			if(intAr[index] == ikey)
			{
				found = true;

			}
			else
			{
				index ++;
			}
		}
		if(!found)
		{
			index = 0;
			cout << ikey << " was not found!\n\n";
		}
		else
		{
			cout << "The integer "<< ikey;
			cout << " was found in index #" << index;
			cout << endl << endl;
		}
		found = false;
		index = 0;
	}
}

void BinarySearch(int intAr[], const int AR_SIZE)
{

	bool found;
 	int bottom, top, middle;
 	int ikey;

 	top = AR_SIZE-1;
 	found = false;
 	bottom = 0;

	for (int i = 1; i <= 4; i++)
	{
		cout <<"\nEnter an integer to search for: ";
		cin >> ikey;
		while(!found && bottom <= top)
		{
			middle = (bottom+top)/2;
			if(intAr[middle] == ikey)
			{
				found = true;
				ikey = middle;
			}
			else
			{
				 if(intAr[middle] < ikey)
				 {
					 bottom =  middle + 1;
				 }
				 else
				 {
					 top = middle - 1;
				 }
			}
		}
		if(!found)
		{
			cout << ikey << " was not found!\n\n";
		}
		else
		{
			cout << "The integer "<< intAr[ikey];
			cout << " was found in index #" << ikey;
			cout << endl << endl;
		}

		top = AR_SIZE-1;
	 	found = false;
	 	bottom = 0;
	}
}
