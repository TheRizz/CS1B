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
	sheepCount = 0;
}

/******************
** DECONSTRUCTOR **
******************/
FarmList::~FarmList()
{}

/**************
*** MUTATORS **
**************/
/**************************************************************************
 * void FarmList::AddSheep (Sheep newSheep);
 *
 * Mutator; This method adds a new sheep object to the object array
 *-------------------------------------------------------------------------
 * Return: none - the array is updated
 *************************************************************************/
void FarmList::AddSheep(Sheep newSheep) // Sheep containing newly received
										// information
{
	farmArray[sheepCount] = newSheep; // Adds the object to the array
	sheepCount ++; // Increments the sheep counter
}
/**************************************************************************
 * void FarmList::ClearList ();
 *
 * Mutator; This method sets the sheep count to zero to clear it
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void FarmList::ClearList()
{
	sheepCount = 0;
}
/*****************
*** ACCESSORS **
******************/
/**************************************************************************
 * Sheep FarmList::FindSheep (string sheepName);
 *
 * Accessor; This method will search through the array and return the sheep
 * that is being searched for, unless it is not found, then an empy sheep
 * is returned
 *-------------------------------------------------------------------------
 * Return: The sheep being searched for
 *************************************************************************/
// String that is the item being searched for
Sheep FarmList::FindSheep(string sheepName) const
{
	bool found; // boolean to help with the search
	int  count; // count to get through the array
	Sheep empty;// empty sheep to be returned if nothing is found

	// INITIALIZATION
	count = 0;
	found = false;

	// Loop that will go through until the item is found or the end of the
	// array is reached
	while(!found && count < AR_SIZE)
	{
		if(sheepName == farmArray[count].GetName())
		{
			found = true;
		}
		else
		{
			count ++;
		}
	}
	// If found then the item is returned, else an empty sheep is returned
	if(found)
	{
		return farmArray[count];
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
 * Accessor; This method return the first sheep in the array
 *-------------------------------------------------------------------------
 * Return: The first sheep
 *************************************************************************/
Sheep FarmList::GetFirstSheep() const
{
	return farmArray[0];
}
/**************************************************************************
 * int FarmList::TotalSheep ();
 *
 * Accessor; This method will return the current sheep count
 *-------------------------------------------------------------------------
 * Return: The sheep count
 *************************************************************************/
int FarmList::TotalSheep() const
{
	return sheepCount;
}
/**************************************************************************
 * void FarmList::DisplaySheepTable (string sheepName);
 *
 * Accessor; This method will output a list of all of the sheep in the
 * array
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void FarmList::DisplaySheepTable() const
{
	int count; // The counter for the loop
	Sheep newSheep; // The sheep object
	string name; // The name of the sheep
	int    age;  // The age of the sheep

	cout << left << setw(16) << "\nNAME" << "AGE";
	cout << "\n-------------- ---\n";

	for(count = 0; count < sheepCount; count ++)
	{
		newSheep = farmArray[count];
		newSheep.GetValues(name,age);
		cout << setw(16) << name << age << endl;
	}
}


