/*************************************************************************
 * AUTHOR         : Ryan Martinez, Jake Estrada
 * STUDENT ID     : 389657
 * LAB #10        : Creating an Ordered List
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 11/6/15
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

//preprocessors directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <ios>
using namespace std;

// struct for linked list of names, gender, ages
struct PersonNode
{
	string name;
	char gender;
	int age;
	PersonNode *next;
	PersonNode *prev;
};

// enumerated type for menu choices
enum Menu
{
	EXIT,
	CREATE_LIST,
	DISPLAY_LIST,
	IS_EMPTY,
	SEARCH,
	REMOVE,
	CLEAR_LIST,
};

//Prints header using ostream
void PrintHeader(ostream &output, // OUT - stream output
		string asName, 			  // OUT - assignment name
		char asType, 			  // OUT - assignment type
		int asNum);				  // OUT - assignment #

/*************************************************************************
 * MenuPrompt
 * This function prompts user with stack menu and returns user choice as
 * enum type
 * ------------------------------------------------------------------------
 * RETURNS: enumerated type representing user choice
 *************************************************************************/
Menu MenuPrompt();

/**************************************************************************
 * IsEmpty
 * This function checks if the stack is empty
 * ------------------------------------------------------------------------
 * RETURNS: true or false
 *************************************************************************/
bool IsEmpty(PersonNode* head); // IN - head of linked list being passed

/*************************************************************************
 * CreateList
 * This function creates a list from an input file
 * ------------------------------------------------------------------------
 * RETURNS: nothing, list is created
 *************************************************************************/
void CreateList(PersonNode* &head);
				// IN - head of linked list being passed

/*************************************************************************
 * DisplayList
 * This function displays the list in a table
 * ------------------------------------------------------------------------
 * RETURNS: nothing, displays the list on the console
 *************************************************************************/
void DisplayList(PersonNode* &head);
				 // IN - head of linked list being passed

/*************************************************************************
 * Search
 * This function searches for a specific node
 * ------------------------------------------------------------------------
 * RETURNS: nothing, outputs the node information to the console
 *************************************************************************/
void Search(PersonNode* head); // IN - head of linked list being passed

/*************************************************************************
 * Remove
 * This function removes a node from the list
 * ------------------------------------------------------------------------
 * RETURNS: an integer representing stack size
 *************************************************************************/
void Remove(PersonNode* &head); // IN - head of linked list being passed

/*************************************************************************
 * Clear
 * This function removes all nodes from the list
 * ------------------------------------------------------------------------
 * RETURNS: nothing, deletes queue
 *************************************************************************/
void Clear(PersonNode* &head); // IN - head of linked list being
									// passed


#endif /* HEADER_H_ */
