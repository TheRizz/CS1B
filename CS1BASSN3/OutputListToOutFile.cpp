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
void OutputListToOutFile(MovieNode *head) // CALC - Head of the linked list
{
	MovieNode *node;		// CALC - The node to access the linked list
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
		outFile << "\n*********************************************"
				"******************************";
		outFile << endl << left << setw(9) << "MOVIE #: " << setw(9)
				<< movNum<< "Title: " << Parse(node -> title);
		outFile << "\n-------------------------------------------------"
				"---------"
				"-------"
				"----------\n";
		outFile << "Year: " << setw(12) << node->year << "Rating: "
				<< node->rating;

		outFile << "\n----------------------------------------------------"
				"------"
				"-------"
				"----------\n";
		outFile << setw(18) << "Leading Actor: " << setw(25) << node->lead
				<< "Genre 1: " << node->genre;
		outFile << endl << setw(17) << "Supporting Actor: " << setw(25) <<
				node->support << "Genre 2: " << node->altGenre;
		outFile << "\n---------------------------------------------------"
				"-------"
				"-------"
				"----------\n";
		WordWrap(node->syn, outFile);
		outFile << "\n*********************************************"
					"******************************\n";
		movNum ++; //Increments the counter
		node = node->next; // Points to the next node
	}
	outFile.close(); // Closes the output file
}
