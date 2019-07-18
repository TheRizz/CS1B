/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #10        : Implementing a Queue
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 10/30/15
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
 * Push
 * This function adds a node to the queue
 * ------------------------------------------------------------------------
 * RETURNS: nothing, adds to list from front
 *************************************************************************/
void CreateList(PersonNode* &head)
{
	PersonNode *perPtr;		// IN & PROC - user inputs struct data
							// to linked list
	ifstream   inFile;
	PersonNode *searchPtr;
	bool found;

	found = false;

	inFile.open("input.txt");

	// PROC - allocating memory for new node
	perPtr = NULL;

	perPtr = new PersonNode;
	while(inFile && perPtr != NULL)
	{
		getline(inFile, perPtr->name);
		inFile.get(perPtr->gender);
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		inFile >> perPtr->age;
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');
		inFile.ignore(numeric_limits<streamsize>::max(),'\n');

		if(head == NULL || head->name > perPtr->name)
		{
			perPtr->next = head;
			perPtr->prev = NULL;
			if(head != NULL)
			{
				head->prev = perPtr;
			}
			head = perPtr;
		}
		else
		{
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
			perPtr->next = searchPtr;
			searchPtr->next->prev = perPtr;
			searchPtr->next = perPtr;
			perPtr = NULL;
		}

	cout << endl;
}


/*************************************************************************
 * Pop
 * This function removes a node from the queue
 * ------------------------------------------------------------------------
 * RETURNS: nothing, removes top node
 *************************************************************************/
void Pop(PersonNode* &head)
{
		PersonNode *perPtr;	// PROC - ptr used to traverse and delete nodes

		// OUT - top node is displayed and removed from the queue
		cout<<"\nDEQUEUING\n";
		// OUT - name gender age
		cout << setw(8) << left << "Name:" << right << head->name << endl;
		cout << "Gender: " << head->gender << endl;
		cout << setw(8) << left << "Age:" << right << head->age << endl <<
				endl;

		// PROC - sets head to next node
		perPtr = head;
		head = head->next;
		delete perPtr;
}

/*************************************************************************
 * Peek
 * This function peeks at the top node
 * ------------------------------------------------------------------------
 * RETURNS: nothing, outputs top node name, gender, age
 *************************************************************************/
void Peek(PersonNode* &head)
{
	// PROC & OUT - top node data is output
	cout << "\nThe first person in the queue is:\n";
	// OUT - Output name, gender, age
	cout << setw(8) << left << "Name:" << right << head->name << endl;
	cout << "Gender: " << head->gender << endl;
	cout << setw(8) << left << "Age:" << right << head->age << endl <<
			endl;
}

/*************************************************************************
 * Size
 * This function checks the size of the queue
 * ------------------------------------------------------------------------
 * RETURNS: an integer representing queue size
 *************************************************************************/
int Size(PersonNode* head)
{
	PersonNode *perPtr; // PROC - ptr used to check size of list
	int instance;		// PROC - number used to count nodes in list

	// PROC - assigning ptr to head for size check
	perPtr = head;
	// PROC - initialize counter to 0
	instance = 0;

	// PROC - while current ptr is not NULL, loop continues to count
	// instances & traverse list
	while(perPtr != NULL)
	{
		instance ++;
		perPtr = perPtr->next;
	}

	return instance;
}

/**************************************************************************
 * ClearQueue
 * This function deletes all nodes from the queued linked list
 * ------------------------------------------------------------------------
 * RETURNS: nothing, deletes all nodes
 *************************************************************************/
void ClearQueue(PersonNode* &head)
{
		PersonNode *perPtr; // PROC - ptr used to traverse and delete nodes

		cout << "\nCLEARING...\n";

		while(head != NULL)
		{
			perPtr = head;
			cout << perPtr->name << endl;
			head = head->next;
			delete perPtr;
		}
}






