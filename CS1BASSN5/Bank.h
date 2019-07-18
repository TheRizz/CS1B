/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef BANK_H_
#define BANK_H_

#include "Account.h"

class Bank
{
	public:

	/******************
	 ** CONSTRUCTOR	 **
	 *****************/
		Bank();

	/*******************
	 ** DECONSTRUCTOR **
	 *******************/
		virtual ~Bank();

	/**************
	 ** MUTATORS **
	 **************/
		void Deposit (float fNum, int accNum, Date fDAte);
		void Withdraw (float total, int accNum, Date fDate);
		bool Transfer (ostream &oFile, float fNum, int currentAcc,
					   int accNum, Date fDate);
		void AddAccount (Account* newAcc);

	/***************
	 ** ACCESSORS **
	 ***************/
		Account *Search (int accNum) const;
		void Display (ostream &oFile, int accNum, Date fDate,
					   string fType, float fNum, int transNum) const;
		void InitialDisplay (ostream &oFile);

	private:
		struct Node
		{
			Account *bankNode;		//Account pointer
			Node	*next;			//Points to next node
			Node	*prev;			//Points to previous Node
		};

		Node *head;					//Head of the list
		Node *tail;					//Tail of the list
		int  size;					//Size of list
};
#endif /* BANK_H_ */
