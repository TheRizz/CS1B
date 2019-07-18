/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "Account.h"

class Savings: public Account
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Savings();
		Savings(string pName, int pAccNumber, float pBalance,
				float interest, Date pDate, string pType);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		virtual ~Savings();

	/**************
	 ** MUTATORS **
	 **************/
	void interestRates();
	virtual void Deposit (float inValue, Date newDate);
	virtual bool Withdraw (float outValue, Date newDate);
	virtual bool Transfer (float transValue, int accountNum, Date newDate);

	/***************
	 ** ACCESSORS **
	 ***************/
	virtual string Display(Date newDate, string type, float amt,
						   Account *tranAcc) const;
	virtual string InitDisplay () const;

	protected:
		float interestRate;			//IN & PROC - Interest rate

		float CalculateInterest(Date transDate);
};

#endif /* SAVINGS_H_ */
