/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #10        : Implementing a Queue
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 10/30/15
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
 * Push
 * This function adds a node to the stack
 * ------------------------------------------------------------------------
 * RETURNS: nothing, adds to list from front
 *************************************************************************/
void CreateList(PersonNode* &head); // IN - head of linked list being passed

/*************************************************************************
 * Pop
 * This function removes a node from the stack
 * ------------------------------------------------------------------------
 * RETURNS: nothing, removes top node
 *************************************************************************/
void Pop(PersonNode* &head); // IN - head of linked list being passed

/*************************************************************************
 * Peek
 * This function peeks at the top node
 * ------------------------------------------------------------------------
 * RETURNS: nothing, outputs top node name, gender, age
 *************************************************************************/
void Peek(PersonNode* &head); // IN - head of linked list being passed

/*************************************************************************
 * Size
 * This function checks the size of the stack
 * ------------------------------------------------------------------------
 * RETURNS: an integer representing stack size
 *************************************************************************/
int Size(PersonNode* head); // IN - head of linked list being passed

/*************************************************************************
 * ClearQueue
 * This function removes all nodes from the queue
 * ------------------------------------------------------------------------
 * RETURNS: nothing, deletes queue
 *************************************************************************/
void ClearQueue(PersonNode* &head); // IN - head of linked list being
									// passed


#endif /* HEADER_H_ */
