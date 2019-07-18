/*************************************************************************
 * AUTHOR		: Ryan Martinez, Sean Trehy
 * STUDENT ID	: 389657
 * Lab #2		: Functions - Coin Flip
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/28/2015
 ************************************************************************/

#ifndef LAB2_H_
#define LAB2_H_

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*************************************************************************
* ClassHeader
* ________________________________________________________________________
* This function outputs an assignment name, type
* and number then outputs the appropriate header
* - returns nothing > This will output the class heading.
*************************************************************************/
void ClassHeader();
/*************************************************************************
* GetUserInfo
* ________________________________________________________________________
* This function outputs the user's name and gender
* - returns nothing > This will output user info.
*************************************************************************/
void GetUserInfo(string &userName, char &userGender);
/*************************************************************************
* FlipCoin
* ________________________________________________________________________
* This function gives a random coin flip and keeps count of the total
* number of flips and total number of heads.
* - returns nothing > This will output the coin flips.
*************************************************************************/
void FlipCoin(int &totalHeadCountF,
			  int &headCountF,
			  int &totalCountF);
/*************************************************************************
* CalcAverage
* ________________________________________________________________________
* This function calculates the average number of heads flipped.
* - returns average
*************************************************************************/
int CalcAverage(int totalCountF, int totalHeadCountF);
/*************************************************************************
*OutputResults
* ________________________________________________________________________
* This function outputs the results of the coin flip. It tells the total
* number of flips and average number of heads.
* - returns nothing > This will output results.
*************************************************************************/
void OutputResults(int totalCountF, int headAverageF);


#endif /* LAB2_H_ */
