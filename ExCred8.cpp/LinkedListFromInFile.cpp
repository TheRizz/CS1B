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
 StudentNode *LinkedListFromInFile(StudentNode *head) // CALC - Head of
 	 	 	 	 	 	 	 	 	 	 	 	  //        the linked list
{
	string input;		// CALC - The name of the input file
	ifstream inFile;	// CALC - The name of the outfile variable
	StudentNode *node;	// CALC - The name of the node to help access each
						//			member of the linked list
	StudentNode *tail;

	node = NULL; // Initialize node
	tail = head;

//	while(tail->next != NULL)
//	{
//		tail = tail->next;
//	}

	inFile.open("input.txt"); // Converts the string in to a c-string to
								// allow the file to be opened properly

	node = new StudentNode; // Creates a new instance of the struct

	while(inFile && node != NULL) // Loop - reads in each element to a node
	{
		getline(inFile, node->name);
		cout << node->name;
		inFile >> node->age;
		cout << endl << node->age;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		getline(inFile, node->major);
		cout << endl << node->major;
		inFile >> node->gpa;
		cout << endl << node->gpa;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		// Reinitializes the node
		node -> next = tail;
		if(tail != NULL)
		{
			tail -> next = node;
		}
		else
		{
			head = node;
		}
		tail = node;
		node = new StudentNode;
	}

	delete node; // Ensures no memory leak

	node = NULL; // Returns the node to null
	inFile.close(); // Closes the input file

	return head; // Returns the populated head to main
}




