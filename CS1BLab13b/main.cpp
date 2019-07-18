/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#include "header.h"
#include "FarmList.h"
#include "Sheep.h"

/**************************************************************************
* Arrays & Linked List of Sheep
*-------------------------------------------------------------------------
* This program will add sheep, output the first sheep in a list, search
* for a sheep in the list, output the list zie, output the entire list,
* and clear the list. This will all be done by using classes.
*-------------------------------------------------------------------------
* INPUTS:
* choice	 : user inputs menu choice (converted from int to enum type)
*
* CALCULATION:
* newSheep	 : the new sheep object
* farmList	 : the new farmlist object
* name		 : the name of the sheep
* age		 : the age of the sheep
*
* OUTPUTS: <none>
**************************************************************************/

int main()
{
//------------------------------------------------------------------------
	Menu choice;		// IN - The menu choice
	Sheep newSheep;		// CALC - The new sheep object
	string name;		// CALC - The name to be searched and output
	int    age;			// CALC - The age of the sheep
	FarmList farmList;  // CALC - The farmList object
//------------------------------------------------------------------------

	// OUT - header
    PrintHeader(cout, "Arrays & Linked List of Sheep", 'L', 13);

    // CALC - reads in the menu choice and error checks
    choice = MenuPrompt();

	// PROC - if user's choice is not EXIT, loop is entered
	while(choice != EXIT)
	{
		switch(choice)
		{
		// Calculates and returns sheep age
		case ADD_SHEEP:
				cout << left << "\nSheep Name: ";
				getline(cin, name);
				age = GetInt();
				newSheep.SetInitialValues(name,age);
				farmList.AddSheep(newSheep);
				cout << "Has been added!\n";
			break;
		// Calculates and outputs the first object
		case OUTPUT_FIRST:
			if(farmList.TotalSheep() == 0)
			{
				cout << "\nNobody is in front - the list is empty!\n";
			}
			else
			{
				cout << left << setw(16) << "\nNAME" << "AGE";
				cout << "\n-------------- ---\n";
				newSheep = farmList.GetFirstSheep();
				newSheep.GetValues(name, age);
				cout << setw(16) << name << age << endl;
				cout << "\nIs at the front of the list.\n";
			}
			break;
		// Finds a name that the user enters to be searched for
		case FIND:
			if(farmList.TotalSheep() == 0)
			{
				cout << "\nThere are no sheep to be found!\n";
			}
			else
			{
				cout << "\nWho are you looking for? ";
				getline(cin, name);
				newSheep = farmList.FindSheep(name);
				newSheep.GetValues(name, age);
				if(age == 0)
				{
					cout << "\nThere are no sheep to be found!\n";
				}
				else
				{
					cout << left << setw(16) << "\nNAME" << "AGE";
					cout << "\n-------------- ---\n";
					cout << setw(16) << name << age << endl;
					cout << "\nHas been found.\n";
				}
			}
			break;
		// Outputs the number of elements in the list
		case SIZE:
			if(farmList.TotalSheep() == 0)
			{
				cout << "\nThe list is empty!\n";
			}
			else
			{
				cout << "\nThere are " << farmList.TotalSheep();
				cout << " sheep in the list!\n";
			}
			break;
		// Outputs the entire list
		case OUTPUT_LIST:
			if(farmList.TotalSheep() == 0)
			{
				cout << "\nThe list is empty!\n";
			}
			else
			{
				farmList.DisplaySheepTable();
				cout << "\nThere are " << farmList.TotalSheep();
				cout << " sheep in the list!\n";
			}

			break;
		// Clears the list
		case CLEAR:
			if(farmList.TotalSheep() == 0)
			{
				cout << "\nThe list is empty!\n";
			}
			else
			{
				farmList.ClearList();
				cout << "\nThe list has been cleared!\n";
			}
			break;
		}

		// Reprompts the user
		choice = MenuPrompt();
	}
}
