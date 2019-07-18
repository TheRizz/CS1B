/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Searching Linked lists
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 11/13/2015
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
void OutputListToOutFile(MovieNode *head, ofstream &outFile)
{
	MovieNode *node;		// CALC - The node to access the linked list
	string outWordString;	// CALC - The output word string
	string outLineString;	// CALC - The output line string
	int    count;

	count = 1;

	//ClassHeader(outFile); // Outputs the header to the output file
	node = head; // Initializes the node to head

	// Loop - Formats and outputs the contents of the linked list
	while(node != NULL)
	{
		if(count == 1)
		{
			outFile << "COMPLETE MOVIE LISTING\n";
			outFile << setw(9) << left << "MOVIE #" << setw(48);
			outFile	<< "TITLE" << setw(5) << "YEAR" << setw(8);
			outFile << "RATING" << setw(18) << "GENRE" << setw(18);
			outFile << "ALT GENRE" << setw(20) << "LEAD ACTOR";
			outFile << setw(18) << "SUPPORTING ACTOR";
			outFile << "\n------- -------------------------------------"
					"----------- ---- ------ ----------------- ------"
					"----------- ------------------- ----------------"
					"---\n";
		}
		outFile << right << setw(4) << count << "     " << setw(48);
		outFile << left << Parse(node->title) << setw(8);
		outFile << node->year << setw(5) << node->rating;
		outFile << setw(18) << node->genre << setw(18);
		outFile << node->altGenre << setw(20) << node->lead;
		outFile << node->support << endl;
		count ++;
		node = node->next;
	}
	outFile << "\n\n";
}
