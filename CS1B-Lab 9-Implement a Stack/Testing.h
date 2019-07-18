/*************************************************************************
 *AUTHOR         : Drew Umlang
 *AUTHOR         : Ryan Martinez
 *STUDENT ID     : 390572
 *STUDENT ID     : 389657
 *LAB 9          : Implement a stack
 *CLASS          : CS1B
 *SECTION        : MWF: 8:00 - 10:30 am
 *DUE DATE       : 10/23/2015
 ************************************************************************/

#ifndef TESTING_H_
#define TESTING_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <ios>
using namespace std;

struct PersonNode
{
	string name;
	char   gender;
	int	   age;
	PersonNode *next;
};
enum Menu
{
	PUSH,
	POP,
	ISEMPTY,
	PEEK,
	SIZE
};

/*************************************************************************
 * PrintHeader
 *	 This function receives an output type, assignment name, type, and number
 *	 then outputs the appropriate header.
 * 	 - returns nothing -> This will output the class heading
 ************************************************************************/
string PrintHeader(string asName,	// CALC - The name of the assignment or lab
		char asType,			// CALC - The type of assignment or lab
		int asNum);			    // CALC - The number of the assignment or lab

/*************************************************************************
 * Gather
 *	 This function receives input from the user. This input includes the amount
 *	 of sheep and the amount of bars the farmer has
 * 	 - returns nothing -> Collects the users info
 ************************************************************************/
PersonNode *Push (PersonNode *perPtr);

/*************************************************************************
 * CalculateInfo
 *	 This function calculates how mnay bars each sheep should have and how many
 *	 bars will be left over
 * 	 - returns the GCD
 ************************************************************************/
int Size (PersonNode *perPtr);

/*************************************************************************
 * OutPutInfo
 *	 This function outputs the information calculated about how many bars
 *	 each sheep should get and how many bars will be left over
 * 	 - returns nothing -> This will output the sheep info
 ************************************************************************/
void OutputInfo (int barsSheep, // OUT - The number of bars per sheep
		int barsLeft);			// OUT - The bars left over

/*************************************************************************
 * TestingDrivers
 *	 This function tests the function using predefined values
 * 	 - Outputs bars per sheep and bars left
 ************************************************************************/
void TestingDriver(int sheep,   // IN & CALC - The number of sheep
		int bars, 			    // IN & CALC - The number of chocolate bars
		int &barsPerSheep, 		// CALC - The number of bars per sheep
		int &barsLeft);			// CALC - The bars left over

/*************************************************************************
 * Gather
 *	 This function receives input from the user. This input includes the amount
 *	 of sheep and the amount of bars the farmer has
 * 	 - returns nothing -> Collects the users info
 ************************************************************************/
PersonNode *Pop (PersonNode *perPtr);
void Peek (PersonNode *head);
bool IsEmpty(PersonNode *head);


#endif //TESTING_H_
