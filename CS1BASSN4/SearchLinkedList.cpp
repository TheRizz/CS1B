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
 * FUNCTION  Outputs the class header
 *________________________________________________________________________
 * This function searches through the linked list and outputs what it
 * finds to an output file
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * This function will output the proper information to an output file
 ************************************************************************/
void SearchLinkedList(MovieNode *head,  // CALC - Head of the linked list
					  ofstream &outFile,// OUT  - Output file location
					  Menu menuItem)	// CALC - Error checked menu value
{
	MovieNode  *searchPtr; // CALC - Variable to be used to traverse the
						   //        linked list
	bool	   found;	   // CALC - Checks to see if the object is found
	string	   item;	   // CALC - The item being searched for
	int		   count;	   // CALC - Counts through the outputs
	int		   numItem;	   // CALC - An integer version of the string item
	bool	   invalid;	   // CALC - Error checks valid values

	// Initialization section
	count = 1;
	found = false;
	searchPtr = head;

	// Switch enters for the proper menu input
	switch(menuItem)
	{
	// Title asks which title is being searched for
	case TSEARCH 	 : cout << "\nWhich title are you looking for? ";
	getline(cin, item);
	cout << "\nSearching for the title " << item << endl;
	// Searches the list for this one item
	while(searchPtr != NULL && !found)
	{
		// if the item is found then is is output in this format
		if(item == searchPtr -> title)
		{

			found = true;
			outFile << "*********************************************"
							"******************************";
			outFile << endl << left << setw(9)
					<< "Title: " << Parse(searchPtr -> title);
			outFile << "\n----------------------------------------------"
					"-----------------------------\n";
			outFile << "Year: " << setw(12) << searchPtr->year
					<< "Rating: " << searchPtr->rating;

			outFile << "\n----------------------------------------------"
					"-----------------------------\n";
			outFile << setw(18) << "Leading Actor: " << setw(25)
					<< searchPtr->lead << "Genre 1: " << searchPtr->genre;
			outFile << endl << setw(17) << "Supporting Actor: " << setw(25)
					<< searchPtr->support << "Genre 2: "
					<< searchPtr->altGenre;
			outFile << "\n----------------------------------------------"
					"-----------------------------\nPLOT:\n";
			WordWrap(searchPtr->syn, outFile);
			outFile << "\n*********************************************"
						"******************************\n";
		}
		else
		{ // if it is not found then the search ptr will keep traversing
		  // the list until it is found or the end is reached
			searchPtr = searchPtr -> next;
		}
	}
	if(!found) // executes the proper output if the item is found or not
	{
		cout << "Sorry, the movie \"" << item << "\" was not found.\n";
	}
	else
	{
		cout << "Found the movie " << item << "!\n";
	}
	outFile << "\n\n";
	break;
	// genre searches for the genre of the users choice
	case GSEARCH	 : cout << "\nWhich genre are you looking for? ";
	getline(cin, item);
	cout << "\nSearching for the genre " << item;
	while(searchPtr != NULL)
	{ // goes through the loop until the end is reached
		if(item == searchPtr->genre || item == searchPtr->altGenre)
		{
			if(count == 1)
			{// if the loop is going through the first time then this is
			 // executed as a header
				outFile << "Search by genre for " << item << " found:\n";
				outFile << setw(9) << left << "MOVIE #" << setw(48);
				outFile	<< "TITLE" << setw(5) << "YEAR" << setw(8);
				outFile << "RATING" << setw(18) << "GENRE" << setw(18);
				outFile << "ALT GENRE" << setw(20) << "LEAD ACTOR";
				outFile << setw(18) << "SUPPORTING ACTOR";
				outFile << "\n------- ------------------------------------"
						"------------ ---- ------ ----------------- ------"
						"----------- ------------------- ----------------"
						"---\n";
			}
			outFile << right << setw(4) << count << "     " << setw(48);
			outFile << left << Parse(searchPtr->title) << setw(8);
			outFile << searchPtr->year << setw(5) << searchPtr->rating;
			outFile << setw(18) << searchPtr->genre << setw(18);
			outFile << searchPtr->altGenre << setw(20) << searchPtr->lead;
			outFile << searchPtr->support << endl;
			count ++;

		}
		// traverses through the list
		searchPtr = searchPtr->next;
	}
	if(count == 1)// executes the proper output if the item is found or not
	{
		cout << "\nSorry, no movies for the genre, " << item
			 << " were found.\n";
	}
	else
	{
		cout << "\nFound " << count-1 << " movies for the genre " << item
			 << "!\n";
	}

	outFile << "\n\n";

	break;
	// actor search searches for the actor of the users choice
	case ASEARCH 	 :cout << "\nWhich actor are you looking for? ";
	getline(cin, item);
	cout << "\nSearching for the actor " << item;
	while(searchPtr != NULL)
	{// goes through the loop until the end is reached
		if(item == searchPtr->lead || item == searchPtr->support)
		// searches both lead actor and supporting actor
		{
			if(count == 1)
			{// if the loop is going through the first time then this is
			 // executed as a header
				outFile << "Search by actor for " << item << " found:\n";
				outFile << setw(9) << left << "MOVIE #" << setw(48);
				outFile	<< "TITLE" << setw(5) << "YEAR" << setw(8);
				outFile << "RATING" << setw(18) << "GENRE" << setw(18);
				outFile << "ALT GENRE" << setw(20) << "LEAD ACTOR";
				outFile << setw(18) << "SUPPORTING ACTOR";
				outFile << "\n------- ------------------------------------"
						"------------ ---- ------ ----------------- ------"
						"----------- ------------------- ----------------"
						"---\n";
			}
			outFile << right << setw(4) << count << "     " << setw(48);
			outFile << left << Parse(searchPtr->title) << setw(8);
			outFile << searchPtr->year << setw(5) << searchPtr->rating;
			outFile << setw(18) << searchPtr->genre << setw(18);
			outFile << searchPtr->altGenre << setw(20) << searchPtr->lead;
			outFile << searchPtr->support << "\n";
			count ++;

		}
		// traverses through the list
		searchPtr = searchPtr->next;
	}
	if(count == 1)
	{
		cout << "\nSorry, no movies for the actor, " << item
			 << " were found.\n";
	}
	else
	{
		cout << "\nFound " << count-1 << " movies for the actor " << item
			 << "!\n";
	}
	outFile << "\n\n";
	break;
	case YSEARCH	 :
	do{
			cout << "\nWhich year are you looking for? ";

			// PROC & OUT - if user input is other than an integer, user is
			// prompted with error message and invalid becomes true
			if(!(cin >> numItem))
			{
				cout << "\n**** Please input a NUMBER between 1878 and "
						"3000 ****\n\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}
			// PROC & OUT - if user input is an out of bounds number, user
			// is prompted with error message and invalid becomes true
			else if(numItem < 1878 || numItem > 3000)
			{
				ErrorAlignLarge(numItem);
				cout << "**** Please input a NUMBER between 1878 and "
						"3000 ****\n\n";
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}
			// PROC - if user input is valid, buffer cleared, loop exited
			else
			{
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = false;
			}
		}while(invalid);
	cout << "\nSearching for the year " << item << endl;
	while(searchPtr != NULL)
	{
		if(numItem == searchPtr->year)
		{
			if(count == 1)
			{
				outFile << "Search by year for " << numItem << " found:\n";
				outFile << setw(9) << left << "MOVIE #" << setw(48);
				outFile	<< "TITLE" << setw(5) << "YEAR" << setw(8);
				outFile << "RATING" << setw(18) << "GENRE" << setw(18);
				outFile << "ALT GENRE" << setw(20) << "LEAD ACTOR";
				outFile << setw(18) << "SUPPORTING ACTOR";
				outFile << "\n------- ------------------------------------"
						"------------ ---- ------ ----------------- ------"
						"----------- ------------------- ----------------"
						"---\n";
			}
			outFile << right << setw(4) << count << "     " << setw(48);
			outFile << left << Parse(searchPtr->title) << setw(8);
			outFile << searchPtr->year << setw(5) << searchPtr->rating;
			outFile << setw(18) << searchPtr->genre << setw(18);
			outFile << searchPtr->altGenre << setw(20) << searchPtr->lead;
			outFile << searchPtr->support << endl;
			count ++;

		}
		searchPtr = searchPtr->next;
	}
	if(count == 1)
	{
		cout << "Sorry, no movies for the year, " << numItem
			 << " were found.\n";
	}
	else
	{
		cout << "\nFound " << count-1 << " movies for the year " << numItem
			 << "!\n";
	}
	outFile << "\n\n";
	break;
	case RSEARCH	 :
	do{
			cout << "\nWhich rating are you looking for? ";

			// PROC & OUT - if user input is other than an integer, user is
			// prompted with error message and invalid becomes true
			if(!(cin >> numItem))
			{
				cout << "\n**** Please input a NUMBER between 0 and "
						"9 ****\n\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}
			// PROC & OUT - if user input is an out of bounds number, user
			// is prompted with error message and invalid becomes true
			else if(numItem < 0 || numItem > 9)
			{
				ErrorAlignSmall(numItem);
				cout << "**** Please input a NUMBER between 0 and "
						"9 ****\n\n";
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = true;
			}
			// PROC - if user input is valid, buffer cleared, loop exited
			else
			{
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				invalid = false;
			}
		}while(invalid);
	cout << "\nSearching for the rating " << numItem;
	while(searchPtr != NULL)
	{
		if(numItem == searchPtr->rating)
		{
			if(count == 1)
			{
				outFile << "Search by rating for " << numItem
						<< " found:\n";
				outFile << setw(9) << left << "MOVIE #" << setw(48);
				outFile	<< "TITLE" << setw(5) << "YEAR" << setw(8);
				outFile << "RATING" << setw(18) << "GENRE" << setw(18);
				outFile << "ALT GENRE" << setw(20) << "LEAD ACTOR";
				outFile << setw(18) << "SUPPORTING ACTOR";
				outFile << "\n------- ------------------------------------"
						"------------ ---- ------ ----------------- ------"
						"----------- ------------------- ----------------"
						"---\n";
			}
			outFile << right << setw(4) << count << "     " << setw(48);
			outFile << left << Parse(searchPtr->title) << setw(8);
			outFile << searchPtr->year << setw(5) << searchPtr->rating;
			outFile << setw(18) << searchPtr->genre << setw(18);
			outFile << searchPtr->altGenre << setw(20) << searchPtr->lead;
			outFile << searchPtr->support << endl;
			count ++;

		}
		searchPtr = searchPtr->next;
	}
	if(count == 1)// executes the proper output if the item is found or not
	{
		cout << "\nSorry, no movies with the rating, " << numItem
			 << " were found.\n";
	}
	else
	{
		cout << "\nFound " << count-1 << " movies with the rating "
				<< numItem << "!\n";
	}
	break;
	}
}
