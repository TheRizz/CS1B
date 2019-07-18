/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/
#include "MoneyMarket.h"
#include <sstream>

/******************
 ** CONSTRUCTORS **
 ******************/
MoneyMarket::MoneyMarket()
{
	interestRate = 0.2;
}

MoneyMarket::MoneyMarket(string pName, int pAccNumber, float pBalance,
						 float interest, Date pDate, string pType)
						 : Savings (pName, pAccNumber, pBalance,
						 interest, pDate, pType)
{
	interestRate = 0.2;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
MoneyMarket::~MoneyMarket()
{

}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* bool Withdraw (float outValue, Date newDate);
*
* Mutator: Calculates a withdraw
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool MoneyMarket::Withdraw (float outValue, Date newDate)
{
	bool valid;

	//Calls the derived class to withdraw money
	valid = Savings::Withdraw(outValue, newDate);

	//Every withdraw results in a $1.50 fee
	if (valid)
	{
		balance -= 1.50;
	}

	return valid;
}

/*************************************************************************
* bool Transfer (float transValue, int transNum, Date newDate);
*
* Mutator: Calculates a transfer
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool MoneyMarket::Transfer (float outValue, int accNum, Date newDate)
{
	bool valid;

	//Calls the derived class to transfer money
	valid = Savings::Transfer(outValue, accNum, newDate);

	//Every withdraw results in a $1.50 fee
	if (valid && (accNum != accNum))
	{
		balance -= 1.50;
	}

	return valid;
}


/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* string Display () const;
*
* Accessor: Displays the account info
* ------------------------------------------------------------------------

* Return: display.str()
*************************************************************************/
string MoneyMarket::Display(Date newDate, string type, float total,
						 	Account *tranAcc) const
{
	ostringstream display;

	//Calls the derived class to output display
	display << Account::Display(newDate, type, total,tranAcc);

	return display.str();
}


/*************************************************************************
* string InitDisplay () const;
*
* Accessor: Displays the initiali info
* ------------------------------------------------------------------------
* Return: display.str()
*************************************************************************/
string MoneyMarket::InitDisplay() const
{
	ostringstream display;

	//Calls the derived class to output display
	display << Account::InitDisplay();

	return display.str();
}

