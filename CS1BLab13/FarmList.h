/*************************************************************************
 * AUTHOR         : Chris Bassar, Ryan Martinez
 * STUDENT ID     : 693261 & 389657
 * LAB #13        : Arrays & Linked List of Sheep
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/20/15
 *************************************************************************/

#ifndef FARMLIST_H_
#define FARMLIST_H_

#include"header.h"
#include"sheep.h"

const int AR_SIZE = 50; // size of the array
class FarmList
{
public:
	FarmList();  /*** constructor ***/
	~FarmList(); /*** destructor ***/
	/******************
	 ***  MUTATORS  ***
	 ******************/
	// add a new sheep object to the list, increment sheepCount
	void AddSheep(Sheep newSheep);
	void ClearList();			   // remove all sheep

	/*******************
	 ***  ACCESSORS  ***
	 *******************/
	// Search by name–return the object
	Sheep FindSheep(string sheepName) const;
	Sheep GetFirstSheep() const;//	Return	the	first	Sheep
	int TotalSheep() const;		//	Return	the	sheep	count
	void DisplaySheepTable() const;	//	Output	sheep	objects	in	table
private:
	Sheep farmArray[AR_SIZE]; // Array of sheep
	int sheepCount; // Total number of sheep in the list

};

#endif /* FARMLIST_H_ */
