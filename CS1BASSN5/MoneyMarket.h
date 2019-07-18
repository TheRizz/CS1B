/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include "Savings.h"

class MoneyMarket: public Savings
{
	public:
	/******************
	 ** CONSTRUCTORS **
	 ******************/
		MoneyMarket();
		MoneyMarket(string pName, int pAccNumber, float pBalance,
					float interest, Date pDate, string pType);
	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		virtual ~MoneyMarket();

	/**************
	 ** MUTATORS **
	 **************/
		virtual bool Withdraw (float outValue, Date newDate);
		virtual bool Transfer (float transValue, int accountNum,
							   Date newDate);
	/***************
	 ** ACCESSORS **
	 ***************/
		virtual string Display(Date newDate, string type, float amt,
							   Account *tranAcc) const;
		virtual string InitDisplay () const;

	protected:
};

#endif /* MONEYMARKET_H_ */
