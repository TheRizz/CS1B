/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #5		: Enumerated Types
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/11/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


enum Days{SUNDAY,
MONDAY,
TUESDAY,
WEDNESDAY,
THURSDAY,
FRIDAY,
SATURDAY};


/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader();				// OUT - Outputs the class heading



Days StringToDays (string today);	// IN - array size


string DaysToString(Days dayF);



#endif /* HEADER_H_ */
