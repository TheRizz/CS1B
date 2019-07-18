/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#include"header.h"
#include"Sheep.h"

/****************
** CONSTRUCTOR **
*****************/
Sheep::Sheep()
{
	name.clear();
	age = 0;
}

/******************
** DECONSTRUCTOR **
******************/
Sheep::~Sheep()
{}

/**************
*** MUTATORS **
**************/
/**************************************************************************
 * void Sheep::SetInitialValues (string sheepName, int sheepAge);
 *
 * Mutator; This method will set the initial values of the sheep class
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void Sheep::SetInitialValues(string sheepName, int sheepAge)
{
	name = sheepName;
	age  = sheepAge;

	cout << "\nThe sheep..\nSheep Name: " << name << endl << setw(12)
		 << "Sheep Age: " << age << endl;
}

/*****************
*** ACCESSORS **
******************/
/**************************************************************************
 * void Sheep::GetValues (string &sheepName, &int sheepAge);
 *
 * Accessor; This method returns the name and age of a sheep object
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
void Sheep::GetValues(string &sheepName, int &sheepAge) const
{
	sheepName = name;
	sheepAge = age;
}

/**************************************************************************
 * void Sheep::GetName ();
 *
 * Accessor; This method returns the sheep name
 *-------------------------------------------------------------------------
 * Return: none
 *************************************************************************/
string Sheep::GetName() const
{
	return name;
}
