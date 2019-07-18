/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#ifndef SHEEP_H_
#define SHEEP_H_

#include"header.h"

class Sheep
{
public:
	Sheep();  /*** constructor ***/
	~Sheep(); /*** destructor ***/
	/******************
	 ***  MUTATORS  ***
	 ******************/
	// Sets the initial values for the sheep
	void SetInitialValues(string sheepName, int sheepAge);

	/*******************
	 ***  ACCESSORS  ***
	 *******************/
	// Returns the values of the sheep object
	void GetValues(string &sheepName, int &sheepAge) const;

	// Gets the name of the sheep and returns it
	string GetName() const;
private:
	string name;	// The sheep name
	int age;		// The sheep age
};

#endif /* SHEEP_H_ */
