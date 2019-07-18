/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Functions And Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/18/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

enum Menu
{
	LARGER,
	SMALLER,
	SUM,
	AVERAGE,
	PERSON
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
 * FUNCTION  InitializeStrAr
 *________________________________________________________________________
 * This function initialized a string array
 *************************************************************************/

void InitializeStrAr (string strArF [], 	// IN - string array
					  const int AR_SIZEF);	// IN - array size

/*************************************************************************
 *
 * FUNCTION  InitializeIntAr
 *________________________________________________________________________
 * This function initialized a integer array
 *************************************************************************/

void InitializeIntAr (int intArF [], 		// IN - string array
					  const int AR_SIZEF);	// IN - array size

/*************************************************************************
 *
 * FUNCTION  InitializeFloatAr
 *________________________________________________________________________
 * This function initialized a float array
 *************************************************************************/

void InitializeFloatAr (float strArF [], 	// IN - string array
					  const int AR_SIZEF);	// IN - array size

/*************************************************************************
 *
 * FUNCTION  ReadStrIntFloatFromInFile
 *________________________________________________________________________
 * Reads in a string array, integer array, and float array from an infile
 *************************************************************************/

void ReadStrIntFloatFromInFile(
					    string strArF [], 	// IN - string array
					    int	 intArF [],		// IN - integer array
					    float  floatArF[],	// IN - float array
					    const int AR_SIZEF,	// IN - array size
					    ifstream &inFile);	// IN - infile

/*************************************************************************
 *
 * FUNCTION  FindAndOutFileLargestNum
 *________________________________________________________________________
 * This function will find a largest number and output it to an outfile
 ************************************************************************/

void FindAndOutFileLargestNum (
						float floatArF [], 	// IN - Float value array
						string strArF [],	// IN - String array
						int	   intArF[],	// IN - Integer array
						const int AR_SIZEF,	// IN - Array size
						ostream &outFile);	// IN - Output file variable

/*************************************************************************
 *
 * FUNCTION  FindAndOutFileSmallestNum
 *________________________________________________________________________
 * This function will find a smallest number and output it to an outfile
 *************************************************************************/

void FindAndOutFileSmallestNum (
						float floatArF [], 	// IN - Float value array
						string strArF [],	// IN - String array
						int	   intArF[],	// IN - Integer array
						const int AR_SIZEF,	// IN - Array size
						ostream &outFile);	// IN - Output file variable


/*************************************************************************
 *
 * FUNCTION  SumOfArray
 *________________________________________________________________________
 * This function accumulates the sum of an array and outputs it to an
 * outfile
 *************************************************************************/

void SumOfArray (
						float floatArF [], 	// IN - Float value array
						string strArF [],	// IN - String array
						int	   intArF[],	// IN - Integer array
						const int AR_SIZEF,	// IN - Array size
						ostream &outFile);	// IN - Output file variable

/*************************************************************************
 *
 * FUNCTION  AverageOfArray
 *________________________________________________________________________
 * This function accumulates the sum of an array then calculates the
 * average and outputs it to an outfile
 *************************************************************************/

void AverageOfArray (
						float floatArF [], 	// IN - Float value array
						string strArF [],	// IN - String array
						int	   intArF[],	// IN - Integer array
						const int AR_SIZEF,	// IN - Array size
						ostream &outFile);	// IN - Output file variable

/*************************************************************************
 *
 * FUNCTION  SearchStringArray
 *________________________________________________________________________
 * This function searches through a string array and returns a found value
 *************************************************************************/

void SearchStringArray (
						float floatArF [], 	//Float value array
						string strArF [],	//String array
						int	   intArF[],	//Integer array
						const int AR_SIZEF,	//Array size
						ostream &outFile);	//Output file variable
#endif /* HEADER_H_ */
