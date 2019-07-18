/*****************************************************************
 * AUTHOR         : David & Ryan
 * STUDENT ID     : 364164, 389657
 * LAB			  : Functions - GDC
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00a-10:50a
 * DUE DATE       : 9/4/15
 *****************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;


/****************************************************************
* PrintHeader
* This function receives an assignment name, type
* and number then outputs the appropriate header
* - returns nothing - This will output the class heading.
***************************************************************/
void PrintHeader (ostream &output,                 // IN/OUT - output file
                  string asName,                  // IN - assignment Name
                  char asType,                     // IN - assignment type
                                                   //       (LAB or ASSIGNMENT)
                  int asNum);                      // IN - assignment number


string PrintHeaderTwo (string asName,     // IN - assignment Name
                       char asType,       // IN - assignment type
                                     //       (LAB or ASSIGNMENT)
                       int asNum);         // IN - assignment number
/****************************************************************
* FileInputIntoArrays
* This function receives an input file name, output file name,
* and transfers the data stored in the input file name into
* three different arrays.
* - returns information stored in the arrays.
***************************************************************/
void ReadInTwoUserInputs (int &intOne,
                          int &intTwo);   // IN/OUT - output file

int CalcGCD (int intOne,
              int intTwo);   // IN/OUT - output file

/****************************************************************
* FindIndex
* This function receives the name wanting to be searched and looks
* for it in the character array.
* - returns the index of where the name was found.
***************************************************************/
void PrintOutput (ofstream &oFile,
                  int intOne,
                   int intTwo,
                   int numGCD);   // IN/OUT - output file


#endif /* HEADER_H_ */


