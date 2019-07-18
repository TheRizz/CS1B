/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab#6		: Structs
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/02/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct 	 account
{
	string name;
	int	   id;
	float  balance;
};

/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader();				// OUT - Outputs the class heading

/*************************************************************************
 *
 * FUNCTION  ReadStructInfile
 *________________________________________________________________________
 * This function reads in values to a struct from an input file
 *************************************************************************/

void ReadStructInfile(
				account company[],	 // IN - The struct variable
				const int AR_SIZEF,	 // CALC - Array size
				ifstream &inFile);	 // IN - Infile variable

/*************************************************************************
 *
 * FUNCTION  SearchLargestFloat
 *________________________________________________________________________
 * This function searches through an array of float values for the largest
 *  value and returns the index of where it is located in the array
 *************************************************************************/

int SearchLargestFloat (
				account company[],	 // IN - The struct variable
				const int AR_SIZEF); // CALC - Array size

/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initializes an array of integers
 *************************************************************************/

void InitializeIntAr (
				int IntArF [], 		 // IN - string array
				const int AR_SIZEF); // CALC - Array size

/*************************************************************************
 *
 * FUNCTION  OutputStructToOutfile
 *________________________________________________________________________
 * This function outputs information gathered in main, then uses it to
 * find the proper values to return to an output file
 *************************************************************************/

void OutputStructToOutfile (
				account 	company[],	// OUT  - The struct variable
				int			largest,	// OUT  - The index for the largest
										//        value
				float		sum,		// OUT  - The accumulated value of
										//		  an array of numbers
				const int 	AR_SIZE,	// CALC - Array size
				ofstream 	&outFile,	// CALC - Tells the program where
										//		   to output information
				int			IdSearch[]);// CALC  - Array containing the
										// 		    indexes for the search


/*************************************************************************
 *
 * FUNCTION  SumOfArray
 *________________________________________________________________________
 * This function accumulates the sum of an array
 *************************************************************************/

float SumOfArray (
				account company[],		// CALC - The struct variable
				const int AR_SIZEF);	// CALC - Array size

/*************************************************************************
 *
 * FUNCTION  SearchStringArray
 *________________________________________________________________________
 * This function searches through a string array and returns a found value
 *************************************************************************/

int SearchStringArray (
				account company[],		// CALC - The struct variable
				const int AR_SIZEF,		// CALC - Array size
				string search);			// CALC - The string being
										//		   searched for
#endif /* HEADER_H_ */
