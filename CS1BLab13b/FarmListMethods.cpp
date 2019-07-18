/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#include"header.h"
#include"FarmList.h"
#include"Sheep.h"

/****************
** CONSTRUCTOR **
*****************/
FarmList::FarmList()
{
	head = NULL;
	sheepCount = 0;
}

/******************
** DECONSTRUCTOR **
******************/
FarmList::~FarmList()
{
	SheepNode *sheepPtr;

	while(head != NULL)
	{
		sheepPtr = head;
		head = head->next;
		delete sheepPtr;
	}
}

/**************
*** MUTATORS **
**************/
/**************************************************************************
 * void FarmList::AddSheep (Sheep newSheep);
 *
 * Mutator; This method creates a new node and adds the node to a linked
 * list.
 *-------------------------------------------------------------------------
 * Return: none - head is updated within the attributes
 *************************************************************************/
void FarmList::AddSheep(Sheep newSheep) // Sheep containing newly recieved
										// information
{
	SheepNode *sheepPtr; // Sheep pointer to add a new node to the list

	sheepPtr = new SheepNode; // Creates a new node

	sheepPtr->currentSheep = newSheep; // Stores the new sheep in the node
	sheepPtr->next = head; // Sets the node equal to the first list spot
	head = sheepPtr; // Sets head equal to the new node
	sheepCount ++; // Increments the counter
}
/**************************************************************************
 * void FarmList::ClearList ();
 *
 * Mutator; This method accesses each element of the linked list and
 * deletes the element until head is equal to NULL
 *-------------------------------------------------------------------------
 * Return: none - head is updated within the attributes
 *************************************************************************/
void FarmList::ClearList()
{
	SheepNode *sheepPtr;   // Sheep pointer to add a new node to the list
	while(head != NULL)
	{
		sheepPtr = head;   // Points the new pointer to the head
		head = head->next; // Points the head to the second item
						   // in the array
		delete sheepPtr;   // Deletes the first item in the list
	}
	sheepCount = 0;  	   // Reinitializes the counter
}
/*****************
*** ACCESSORS **
******************/
/**************************************************************************
 * void FarmList::FindSheep (string sheepName);
 *
 * Accessor; This method will search through the linked list and try to
 * match a search name with a name of the sheep object
 *-------------------------------------------------------------------------
 * Return: none - head is updated within the attributes
 *************************************************************************/
// Sheep pointer to add a new node to the list
Sheep FarmList::FindSheep(string sheepName) const
{
	bool found;			 // Bool that checks to see if an item is found
	Sheep empty;		 // Sets an empty object to be used if not found
	SheepNode *sheepPtr; // Sheep pointer to add a new node to the list

	found = false;		 // Initializes the bool to false
	sheepPtr = head;	 // Points the pointer to head

	// Loop that continues while the item is not found and there are still
	// nodes in the list
	while(!found && sheepPtr != NULL)
	{
		if(sheepName == sheepPtr->currentSheep.GetName())
		{
			found = true;
		}
		else
		{
			sheepPtr = sheepPtr->next;
		}
	}
	// This checks if the item was found or not and returns the respective
	// value
	if(found)
	{
		return sheepPtr->currentSheep;
	}
	else
	{
		return empty;
		cout << "\nThere are no sheep to be found!\n";
	}
}

/**************************************************************************
 * Sheep FarmList::GetFirstSheep ();
 *
 * Mutator; This method returns the first object in a the linked list
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
Sheep FarmList::GetFirstSheep() const
{
	return head->currentSheep; // Returns the first node
}

/**************************************************************************
 * int FarmList::TotalSheep ();
 *
 * Mutator; This method returns the sheep count
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
int FarmList::TotalSheep() const
{
	return sheepCount;
}

/**************************************************************************
 * void FarmList::DisplaySheepTable ();
 *
 * Mutator; This method displays the full table with every item of the
 * linked list
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void FarmList::DisplaySheepTable() const
{
	Sheep newSheep; // New empty sheep
	string name;    // String that contains name
	int    age;		// Variable that has age
	SheepNode *sheepPtr; // Sheep pointer to address each aspect of the
						 // list

	sheepPtr = head; // Initializes the pointer to th head

	cout << left << setw(16) << "\nNAME" << "AGE";
	cout << "\n-------------- ---\n";

	// Loop that runs and outputs all of the elements of the list until
	// there is nothing left in the list
	while(sheepPtr != NULL)
	{
		newSheep = sheepPtr->currentSheep;
		newSheep.GetValues(name,age);
		cout << setw(16) << name << age << endl;
		sheepPtr = sheepPtr->next;
	}
}


