/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Searching Linked lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 11/13/2015
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

struct MovieNode
{
	string title;
	string lead;
	string support;
	string genre;
	string altGenre;
	int	   year;
	int	   rating;
	string syn;
	MovieNode *next;
};
enum Menu
{
	EXIT,
	OUTPUT_LIST,
	TSEARCH,
	GSEARCH,
	ASEARCH,
	YSEARCH,
	RSEARCH
};
/*************************************************************************
* ClassHeaderCout
*  This function outputs an assignment name, type and number then outputs
*  the appropriate header to the console.
*
* RETURNS: nothing
*  <This will output the class heading>
*************************************************************************/
void ClassHeaderCout();	// OUT - Outputs the class heading
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
MovieNode *LinkedListFromInFile(MovieNode *head); // CALC - Head of the
												  //        linked list

/************************************************************************
* OutputListToOutFile
*   This function will output the information from a linked list to an
*   output file
*
* RETURNS: nothing
* 	<The output file becomes populated>
*************************************************************************/
void OutputListToOutFile(MovieNode *head,   // CALC - Head of the
											//		  linked list
						 ofstream &outFile);// OUT  - Output file location

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
/************************************************************************
* MenuPrompt
*   This prompts the menu and will error check the inputs until a useable
*   value is returned by the function
*
* RETURNS: nothing
* 	<The error checked menu value is returned>
*************************************************************************/
Menu MenuPrompt();
/************************************************************************
* SearchLinkedList
*   This function searches through the linked list and outputs what it
*   finds to an output file
*
* RETURNS: nothing
* 	<Outputs the correct list to the output file>
*************************************************************************/
void SearchLinkedList(MovieNode *head,   // CALC - Head of the linked list
					  ofstream &outFile, // OUT  - Output file location
					  Menu menuItem);	 // CALC - Error checked menu value
/************************************************************************
* ErrorAlignSmall
*   This function aligns the error messages with a small error range
*
* RETURNS: nothing
* 	<Outputs the correctly aligned error message>
*************************************************************************/
void ErrorAlignSmall(int input); // CALC - Number in the error message
/************************************************************************
* ErrorAlignLarge
*   This function aligns the error messages with a large error range
*
* RETURNS: nothing
* 	<Outputs the correctly aligned error message>
*************************************************************************/
void ErrorAlignLarge(int input); // CALC - Number in the error message
#endif /* HEADER_H_ */
