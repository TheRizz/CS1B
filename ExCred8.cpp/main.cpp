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
 * Intro To Linked Lists
 * _______________________________________________________________________
 * This program reads in movie information from an input file and stores
 * it in a linked list. Then when the information is stored in the linked
 * list it is output in a proper format to an output file.
 * _______________________________________________________________________
 * INPUT:
 * 	<none>
 *
 * OUTPUT:
 * <nothing Additional>
 *
 * PROCESS & CALC:
 *  <none>
 *
 ************************************************************************/
	int main()
	{

	//---------------------------------------------------------------------

	StudentNode *head;	// CALC - Head of the linked list

	//---------------------------------------------------------------------

	head = NULL; // Inializes the head to null

	head = LinkedListFromInFile(head); // Populates the head
	OutputListToOutFile(head);


	return 0;
}
