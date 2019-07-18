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
 * Searching Linked Lists
 * _______________________________________________________________________
 * This program Reads in a list from an input file and then allows the
 * user to read through the information and search for movies by looking
 * at the title, actors, year of release, and rating of the movie. After
 * searching these categories, the program outputs the information to
 * an output file.
 * _______________________________________________________________________
 * INPUT:
 * 	<none>
 *
 * OUTPUT:
 * <nothing additional>
 *
 * PROCESS & CALC:
 *  The user's inputs for the menu
 *
 ************************************************************************/
	int main()
	{

	//---------------------------------------------------------------------

	MovieNode *head;	// CALC - Head of the linked list
	ifstream  inFile;	// CALC - Variable for input file
	ofstream  outFile;  // OUT  - The output file variable
	Menu	  menuItem; // CALC - The menu selection
	string	  input;	// CALC - The input file name
	string	  output;	// CALC - The output file name

	//---------------------------------------------------------------------
	ClassHeaderCout(); // outputs to the console
	head = NULL; // Inializes the head to null
	head = LinkedListFromInFile(head); // Populates the head

	// reads in the output file, if d then a default is used
	cout << "Which output file would you like to use (type d for default"
			" file)? ";
	getline(cin, output);

	if(output == "d")
	{
		outFile.open("output.txt");
		ClassHeader(outFile); // outputs to the output file
	}
	else
	{
		outFile.open(output.c_str()); // Converts the string in to a
									  // string to c-string
		ClassHeader(outFile); // outputs to the output file
	}


	do
	{
		// prompts to get the menu choice
		menuItem = MenuPrompt();

		// enters a switch statement that correctly reads the menu and
		// will make the correct menu selection
		switch(menuItem)
		{
		case OUTPUT_LIST : cout << "\nListing all movies!\n";
		OutputListToOutFile(head, outFile);
		break;
		case TSEARCH 	 :
		case GSEARCH	 :
		case ASEARCH 	 :
		case YSEARCH	 :
		case RSEARCH	 : SearchLinkedList(head, outFile, menuItem);
		break;
		case EXIT 		 : break;
		}
	}while(menuItem != EXIT);

	// closes the output file
	outFile.close();

	return 0;
}
