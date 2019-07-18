/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Intro To Linked Lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/23/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <limits>
#include <ios>
using namespace std;

struct StudentNode
{
	string name;
	int    age;
	string major;
	float  gpa;
	StudentNode *next;
};
/*************************************************************************
* ClassHeader
*  This function outputs an assignment name, type and number then outputs
*  the appropriate header to an output file.
*
* RETURNS: nothing
*  <This will output the class heading>
*************************************************************************/
void ClassHeader(ofstream &outFile);	// OUT - Outputs the class heading

/************************************************************************
* LinkedListFromInFile
*   This function reads in from an input file and creates a linked list
*   from the information it reads
*
* RETURNS: Head of the linked list
*************************************************************************/
StudentNode *LinkedListFromInFile(StudentNode *head); // CALC - head of the
												  //        linked list

/************************************************************************
* OutputListToOutFile
*   This function will output the information from a linked list to an
*   output file
*
* RETURNS: nothing
* 	<The output file becomes populated>
*************************************************************************/
void OutputListToOutFile(StudentNode *head);  // CALC - head of the
											//        linked list

/************************************************************************
* Parse
*   This function ensures that a string is not too long to be output in a
*   certain amount of space
*
* RETURNS: The valid string that will fit in the given space
*************************************************************************/
string Parse(string title);				// CALC - The string to be parsed

/************************************************************************
* WordWrap
*   This outputs a long string and makes sure that the words don't exceed
*   the maximum length that a line allows
*
* RETURNS: nothing
* 	<The properly wrapped string is output>
*************************************************************************/
void WordWrap(string syn, 			// CALC - The string to be wrapped
			  ofstream &outFile);	// CALC - The destination for output

#endif /* HEADER_H_ */
