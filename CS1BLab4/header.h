/*************************************************************************
 * AUTHOR		: Ryan Martinez, Derek Miller
 * STUDENT ID	: 389657
 * Lab #25b		: Intro to Arrays
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
 * FUNCTION  ReadStrInput
 *________________________________________________________________________
 * This function reads user input in to a string array
 ************************************************************************/
void ReadStrInput (string strArF[],			// IN - string array
				   const int AR_SIZEF);		// IN - array size

/*************************************************************************
 *
 * FUNCTION  SearchInstances
 *________________________________________________________________________
 * This function searches the number of instances that a string comes up
 * and counts the number to be output later
 *************************************************************************/

void SearchInstances (string strArF[],		// IN - string array
					  const int AR_SIZEF);	// IN - array size

#endif /* HEADER_H_ */
