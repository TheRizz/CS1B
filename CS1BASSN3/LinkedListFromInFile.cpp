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
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * This function reads in from an input file and creates a linked list
*  from the information it reads
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the class heading.
 ************************************************************************/
 MovieNode *LinkedListFromInFile(MovieNode *head) // CALC - Head of
 	 	 	 	 	 	 	 	 	 	 	 	  //        the linked list
{
	string input;		// CALC - The name of the input file
	ifstream inFile;	// CALC - The name of the outfile variable
	MovieNode *node;	// CALC - The name of the node to help access each
						//			member of the linked list

	node = NULL; // Initialize node

	cout << "What would you like your input file to be?\n";
	getline(cin,input); // Reads in the input file name

	inFile.open(input.c_str()); // Converts the string in to a c-string to
								// allow the file to be opened properly

	node = new MovieNode; // Creates a new instance of the struct

	while(inFile && node != NULL) // Loop - reads in each element to a node
	{
		getline(inFile,node -> title);
		getline(inFile,node -> lead);
		getline(inFile,node -> support);
		getline(inFile,node -> genre);
		getline(inFile,node -> altGenre);
		inFile >> node -> year;
		inFile >> node -> rating;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		getline(inFile,node -> syn);
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		// Reinitializes the node
		node -> next = head;
		head = node;
		node = new MovieNode;
	}

	delete node; // Ensures no memory leak

	node = NULL; // Returns the node to null
	inFile.close(); // Closes the input file

	return head; // Returns the populated head to main
}
