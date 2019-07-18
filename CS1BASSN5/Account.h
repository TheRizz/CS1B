/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <iostream>
#include "Date.h"
using namespace std;

class Account
{
	public:

	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Account();
		Account(string fName,
				int fAccNum,
				float fBalance,
				Date fDate,
				string fType);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		virtual ~Account();


	/**************
	 ** MUTATORS **
	 **************/
		string GetName() 				 const;
		int    GetAccNum() 			 	 const;
		Date   GetDate()				 const;
		string GetType() 				 const;
		float  GetBalance() 			 const;
		string Display(Date newDate,
					   string fAccType,
					   float total,
					   Account *tranAcc) const;
	/**********************
	 ** VIRTUAL MUTATORS **
	 **********************/

		virtual string InitDisplay () 	 const;


	/***************
	 ** ACCESSORS **
	 ***************/
		void InitializeValues (string fName,
							   int fNum,
							   float fBal,
							   Date fDate);
		void SetVal (string fName);
		void SetVal (int fNum);
		void SetVal (Date fDate);
		void SetVal (float fBalance);

	/***********************
	 ** VIRTUAL ACCESSORS **
	 ***********************/
		virtual void Deposit (float inValue, Date newDate);
		virtual bool Withdraw (float outValue, Date newDate);
		virtual bool Transfer (float transValue,
							   int transNum,
							   Date newDate);

	protected:
		string accName;			//IN & OUT - Name of owner
		string accType;			//IN & OUT - Type of account
		int    accNum;		    //IN & OUT - Account Number
		float  balance;			//IN & OUT - Balance of the account
		Date   firstDate;		//IN & OUT - First date the account was
								//				accessed
		Date   lastDate;	    //IN & OUT - Most recent date the account
								//				was accessed

};

#endif /* ACCOUNT_H_ */
