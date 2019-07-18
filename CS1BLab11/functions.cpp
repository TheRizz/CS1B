/*************************************************************************
 * AUTHOR         : Ryan Martinez, Jake Estrada
 * STUDENT ID     : 389657
 * LAB #10        : Creating an Ordered List
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/6/15
 *************************************************************************/

#include "header.h"

/*************************************************************************
 * MenuPrompt
 * This function prompts user with queue menu and returns user choice as
 * enum type
 * ------------------------------------------------------------------------
 * RETURNS: enumerated type representing user choice
 *************************************************************************/
Menu MenuPrompt()
{
	int menuChoice; // IN - user inputs menu choice
	bool invalid;	// PROC - bool variable to determine valid input

	// PROC -  initializing bool variable
	invalid = false;

	// IN & PROC - user inputs menu option from prompt, loops until valid
	// input is entered
	do{
		cout << "LIST MENU:\n";
		cout << "1 - Create List\n";
		cout << "2 - Display List\n";
		cout << "3 - Is the list Empty?\n";
		cout << "4 - Search by name\n";
		cout << "5 - Remove Node\n";
		cout << "6 - Clear List\n";
		cout << "0 - to Exit\n";
		cout << "Enter a command (0 to exit): ";

		// PROC & OUT - if user input is other than an integer, user is
		// prompted with error message and invalid becomes true
		if(!(cin >> menuChoice))
		{
			cout << "\n**** Please input a NUMBER between 0 and 6 "
					"****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		// PROC & OUT - if user input is an out of bounds number, user is
		// prompted with error message and invalid becomes true
		else if(menuChoice < 0 || menuChoice > 6)
		{
			cout << "\n**** The number " << menuChoice << " is an invalid"
					" entry ****\n";
			cout << "*** Please input a number between 0 and 6 ****\n\n";
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

	// PROC - switch statement to convert from int to enum type Menu
	switch(menuChoice)
	{
	case 0 : return EXIT;
	break;
	case 1 : return CREATE_LIST;
	break;
	case 2 : return DISPLAY_LIST;
	break;
	case 3 : return IS_EMPTY;
	break;
	case 4 : return SEARCH;
	break;
	case 5 : return REMOVE;
	break;
	case 6 : return CLEAR_LIST;
	}
}

/**************************************************************************
 * IsEmpty
 * This function checks if the queue is empty
 * ------------------------------------------------------------------------
 * RETURNS: true or false
 *************************************************************************/
bool IsEmpty(PersonNode* head)
{
	// PROC - if head is NULL, queue is empty and func returns true,
	// otherwise func returns false
	if(head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*************************************************************************
 * CreateList
 * This function creates a list from an input file
 * ------------------------------------------------------------------------
 * RETURNS: nothing, list is created
 *************************************************************************/
void CreateList(PersonNode* &head)
{
	PersonNode *perPtr;		// IN & PROC - user inputs struct data
							// to linked list
	ifstream   inFile;
	PersonNode *searchPtr;
	bool found;

	inFile.open("input.txt");

	// PROC - allocating memory for new node
	perPtr = NULL;

	perPtr = new PersonNode;

	while(inFile && perPtr != NULL)
	{
		found = false;

		// IN - reads everything in to the new node
		getline(inFile, perPtr->name);
		inFile.get(perPtr->gender);
		inFile >> perPtr->age;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		// OUT - displays the names that are being added
		cout << endl << "Adding : " << perPtr->name;

		// This statement properly adds in the names in alphabetical order
		if(head == NULL || head->name > perPtr->name)
		{// This is if names need to be added to the front
			perPtr->next = head;
			perPtr->prev = NULL;
			if(head != NULL)
			{
				head->prev = perPtr;
			}
			head = perPtr;
			perPtr = NULL;
		}
		else
		{// This is if names are to be added in the middle
			searchPtr = head;
			while (searchPtr->next != NULL && !found)
			{
				if(searchPtr->next->name > perPtr->name)
				{
					found = true;
				}
				else
				{
					searchPtr = searchPtr->next;
				}
			}

			perPtr->next = searchPtr->next;
			perPtr->prev = searchPtr;
			if (searchPtr->next != NULL)
			{
				searchPtr->next->prev = perPtr;
			}
			searchPtr->next = perPtr;
			perPtr = NULL;
		}

		// This reinitializes the new node after the previous one has been
		// input
		perPtr = new PersonNode;
	}

	// This makes sure that there is no memory leak and that the input
	// file closes
	delete perPtr;
	inFile.close();
	cout << endl << endl << endl;
}


/*************************************************************************
 * DisplayList
 * This function displays the list in a table
 * ------------------------------------------------------------------------
 * RETURNS: nothing, displays the list on the console
 *************************************************************************/

void DisplayList(PersonNode* &head)
{
	PersonNode *perPtr;
	int			count;

	// Initializes variables
	count = 1;
	perPtr = head;

	//OUT - this outputs the properly aligned table of names
	cout << endl << "   #     " << setw(29) << left << "NAME" << setw(9)
		 <<	 "GENDER" << "AGE\n";
	cout << "------- ---------------------------  -------- -----\n";
	while(perPtr != NULL)
	{
		cout << setw(4) << right << count++ << left << "     " << setw(31)
			 << perPtr->name << setw(7) << perPtr->gender << perPtr->age
			 << endl;
		perPtr = perPtr->next;
	}
	cout << endl;
}

/*************************************************************************
 * Search
 * This function searches for a specific node
 * ------------------------------------------------------------------------
 * RETURNS: nothing, outputs the node information to the console
 *************************************************************************/
void Search(PersonNode* head)
{

	string searchItem;
	PersonNode *searchPtr;
	bool found;

	// Initializes the variabels
	searchPtr = head;
	found = false;

	// Reads in the searh item
	cout << "\nWho would you like to search for? ";
	getline(cin,searchItem);
	cout << "\nSearching for " << searchItem << "...\n";

	while(!found && searchPtr != NULL)
	{
		if(searchItem == searchPtr->name)
		{// If the search item is found then it is output
			found = true;
			cout << left << setw(10) << "\nName: " << searchPtr->name
				 << endl;
			cout << setw(9) << "Gender: " << searchPtr-> gender << endl;
			cout << setw(9) << "Age: " << searchPtr->age << endl;
		}
		else
		{// If the search item is not found then the list moves forward
			searchPtr = searchPtr->next;
		}
	}
	if(!found)
	{// If the list is fully traversed and not found then this is output
		cout << "I'm sorry, \"" << searchItem << "\" was NOT found!\n";
	}
	cout << endl;
}

/*************************************************************************
 * Remove
 * This function removes a node from the list
 * ------------------------------------------------------------------------
 * RETURNS: an integer representing stack size
 *************************************************************************/
void Remove (PersonNode* &head)
{
	string searchItem;
	PersonNode *searchPtr;
	bool found;

	// Initializes these variables
	searchPtr = head;
	found = false;

	// Reads in the search item
	cout << "\nWho would you like to remove? ";
	getline(cin,searchItem);
	cout << "\nSearching for " << searchItem << "...\n";

	while(!found && searchPtr != NULL)
	{
		if(searchItem == searchPtr->name)
		{// In the case that the search item is found
			found = true;
			if(searchPtr == head)
			{// If removing from the front of the list
				head = searchPtr->next;
				if(head != NULL)
				{
					head->prev = NULL;
				}
			}
			else if(searchPtr->next == NULL)
			{// If removing from the end of the list
				searchPtr->prev->next = NULL;
			}
			else
			{// If removing from the middle of the list
				searchPtr->next->prev = searchPtr->prev;
				searchPtr->prev->next = searchPtr->next;
			}
			delete searchPtr;
			searchPtr = NULL;
			cout << "Removing " << searchItem << "!\n";
		}
		else
		{// Traverses the list if the search item is not found
			searchPtr = searchPtr->next;
		}
	}
	if(!found)
	{// Outputs if the list is traversed and the item is not found
		cout << "I'm sorry, \"" << searchItem << "\" was NOT found!\n";
	}
	cout << endl;
}

/*************************************************************************
 * Clear
 * This function removes all nodes from the list
 * ------------------------------------------------------------------------
 * RETURNS: nothing, deletes queue
 *************************************************************************/
void Clear (PersonNode* &head)
{
	PersonNode *searchPtr;

	searchPtr = head;

	if(IsEmpty(head))
	{
		cout << "\nThe list has been cleared!\n";
	}
	else
	{
		cout << "\nCLEARING LIST:\n";
		while(searchPtr != NULL)
		{// Outputs the name being removed, then removes the node till
		 // the list is empty
			cout << "Removing " << searchPtr->name << "!\n";
			head = searchPtr->next;
			delete searchPtr;
			searchPtr = head;
		}
		searchPtr = NULL;
		cout << "\nThe list has been cleared!\n\n";
	}
}










