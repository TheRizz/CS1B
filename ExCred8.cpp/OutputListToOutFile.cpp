/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Intro To Linked Lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/23/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  OutputListToOutFile
 *________________________________________________________________________
 * This function will output the information from a linked list to an
*   output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *	<The linked list is previoiusly populated>
 * POST-CONDITIONS
 * This function outputs the linked list to an output file
 ************************************************************************/
void OutputListToOutFile(StudentNode *head) // CALC - Head of the linked list
{
	StudentNode *node;		// CALC - The node to access the linked list
	int movNum;				// CALC - Counter for the movie number
	string outWordString;	// CALC - The output word string
	string outLineString;	// CALC - The output line string
	ofstream outFile;		// CALC - The output file variable

	outFile.open("output.txt"); // Opens an output file to output to
	ClassHeader(outFile); // Outputs the header to the output file
	node = head; // Initializes the node to head
	movNum = 1;  // Initializes the counter

	// Loop - Formats and outputs the contents of the linked list
	while(node != NULL)
	{
		outFile << "Movie: " << left << setw(9) << movNum;
		outFile << node->name;

		movNum ++;
		node = node->next;
	}
	outFile.close(); // Closes the output file
}
