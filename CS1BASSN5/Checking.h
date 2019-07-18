/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef CHECKING_H_
#define CHECKING_H_

#include "Account.h"

class Checking: public Account
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Checking();
		Checking(string pName, int paccNum,
				 float pBalance, Date pDate, string pType);
		/********************
			 ** DECONSTRUCTORS **
			 ********************/
		virtual ~Checking();

		virtual void Deposit (float inValue, Date newDate);
		virtual bool Withdraw (float outValue, Date newDate);
		virtual bool Transfer (float transValue, int accountNum,
							   Date newDate);
		virtual string Display(Date newDate, string type, float amt,
							   Account *tranAcc) const;
		virtual string InitDisplay () const;

	protected:
		float CalculateMonths(Date transDate);


};

#endif /* CHECKING_H_ */
