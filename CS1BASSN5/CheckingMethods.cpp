/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "Checking.h"
#include <sstream>

/******************
 ** CONSTRUCTORS **
 ******************/
Checking::Checking()
{

}

Checking::Checking(string pName, int paccNum, float pBalance,
				   Date pDate, string pType)
					: Account (pName, paccNum, pBalance, pDate, pType)
{

}


/********************
 ** DECONSTRUCTORS **
 ********************/
Checking::~Checking()
{}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void CalculateMonths (Date transDate);
* Mutator: Calculates the number of months
*-------------------------------------------------------------------------
* Return: Balance
*************************************************************************/

float Checking::CalculateMonths(Date transDate)
{
	int numMonthsOfInterest;

	//Calculate Number of Months between transDate & lastDate
	if (transDate.GetYear() > lastDate.GetYear())
	{
		//Calculate Number of Month in terms of number of years
		numMonthsOfInterest = (transDate.GetYear() -
							   (transDate.GetYear() + 1)) * 12;
		numMonthsOfInterest = (12 - lastDate.GetMonth() +
							   numMonthsOfInterest + transDate.GetMonth());
	}
	else
	{
		//Calculate Number of Month
		numMonthsOfInterest = transDate.GetMonth() - lastDate.GetMonth();
	}

	for(int i = 0; i < numMonthsOfInterest; i++)
	{
		balance = balance - 20.0;
	}

	return balance;
}

/*************************************************************************
* void Deposit (float inValue, Date newDate);
*
* Mutator: Calculates an amount deposited
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Checking::Deposit (float inValue, Date newDate)
{

	if (balance < 0.0)
	{
		balance = CalculateMonths (newDate);
	}

	balance += inValue;

	//Updates lastDate
	lastDate = newDate;
}

/*************************************************************************
* bool Withdraw (float outValue, Date newDate);
*
* Mutator: Calculates a withdraw
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/

bool Checking::Withdraw (float outValue, Date newDate)
{
	bool valid;

	valid = false; // initializes to false

	if (balance < 0.0)
	{
		balance = CalculateMonths (newDate);
	}

	if((balance - outValue) >= -180.00)
	{
		valid = true;

		if((balance - outValue - 20.00) < 0.0)
		{
			balance = balance - outValue - 20.00;
		}
		else
		{
			balance = balance - outValue;
		}
	}
	else if(balance < 0.00)
	{
		valid = false;
	}

	//Updates lastDate
	lastDate = newDate;

	return valid;
}

/*************************************************************************
* bool Transfer (float transValue, int transNum, Date newDate);
*
* Mutator: Calculates a transfer
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool Checking::Transfer (float transValue, int transNum, Date newDate)
{
	bool valid;

	//INITIALIZE valid to false
	valid = false;

	if(accNum != transNum)
	{
		if ((balance >= transValue && (balance - transValue) > 0.0)
			 && balance > 0.0)
		{
			valid = true;
			balance -= transValue;
		}
		else
		{
			valid = false;
		}
	}

	if (accNum == transNum)
	{
		balance += transValue;
		valid = true;
	}

	if (balance < 0.0)
	{
		balance = CalculateMonths (newDate);
	}

	//Updates last access date
	lastDate = newDate;

	return valid;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* string Display () const;
*
* AccessorL Displays the account info
* ------------------------------------------------------------------------
* Return: display.str()
*************************************************************************/
string Checking::Display(Date newDate, string type, float amt,
						 Account *tranAcc) const
{
	ostringstream display;

	//Calls the derived class to output display
	display << Account::Display(newDate, type, amt,tranAcc);

	return display.str();
}

/*************************************************************************
* string InitDisplay () const;
*
* Accessor: Displays the initial information
* ------------------------------------------------------------------------
* Return: display.str()
*************************************************************************/

string Checking::InitDisplay() const
{
	ostringstream display;

	//Calls the derived class to output display
	display << Account::InitDisplay();

	return display.str();
}
