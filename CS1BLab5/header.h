/*************************************************************************
 * AUTHOR		: Ryan Martinez, Keval Varia
 * STUDENT ID	: 389657, 1024574
 * Assignment	: Binary Search
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/25/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


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

void InsertionSort(int intAr[], const int AR_SIZE)
;

/*************************************************************************
 *
 * FUNCTION  SequentialSearch
 *________________________________________________________________________
 * This function initialized a string array
 *************************************************************************/

void SequentialSearch(int intAr[],
					const int AR_SIZE);

/*************************************************************************
 *
 * FUNCTION  BinarySearch
 *________________________________________________________________________
 * This function initialized a string array
 *************************************************************************/

void BinarySearch(int intAr[],
				const int AR_SIZE);

/*************************************************************************
 *
 * FUNCTION  OutputArray
 *________________________________________________________________________
 * This function initialized a string array
 *************************************************************************/

void outputArray(int intAr[],
				const int AR_SIZE);


#endif /* HEADER_H_ */
