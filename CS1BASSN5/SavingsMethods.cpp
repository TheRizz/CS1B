/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "Savings.h"
#include <sstream>

/******************
 ** CONSTRUCTORS **
 ******************/
Savings::Savings()
{
	interestRate = 0.1;
}

Savings::Savings (string pName, int pAccNumber, float pBalance,
				  float pInterest, Date pDate, string pType)
					: Account (pName, pAccNumber, pBalance, pDate, pType)
{
	interestRate = 0.1;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Savings::~Savings()
{}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void CalculateInterest (Date transDate);
*
* Mutator: This calculates the interest due
*-------------------------------------------------------------------------
* Return: balance
*************************************************************************/
float Savings::CalculateInterest(Date transDate)
{
	int numMonthsOfInterest;

	//Calculate Number of Months between transDate & lastAccessDate
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
		balance = balance + (balance *interestRate);
	}

	return balance;
}


/*************************************************************************
* void Deposit (float inValue, Date newDate);
*
* Mutator: This calculates the deposit
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Savings::Deposit (float inValue, Date newDate)
{

	//Initializes balance
	balance = CalculateInterest(newDate);
	balance += inValue;

	//Updates lastAccessDate
	lastDate = newDate;
}


/*************************************************************************
* bool Withdraw (float outValue, Date newDate);
*
* Mutator: This calculates the withdraw validity
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool Savings::Withdraw (float outValue, Date newDate)
{
	bool valid;

	//Initializes balance
	balance = CalculateInterest(newDate);

	//PROCESS - unable to withdraw if balance is 0
	if (balance < 0.0)
	{
		valid = false;
	}
	else if (balance - outValue < 0.0)
	{
		valid = false;
	}
	else
	{
		valid = true;
		balance -= outValue;
	}
	//Updates lastAccessDate
	lastDate = newDate;
	return valid;
}

/*************************************************************************
* bool Transfer (float transValue, int transNum, Date newDate);
*
* Mutator: This processes a transfer
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool Savings::Transfer (float transValue, int transNum, Date newDate)
{
	bool valid;

	valid = false;

	//Initializes balance
	balance = CalculateInterest(newDate);

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
		valid = true;
		balance += transValue;
	}

	//Updates lastAccessDate
	lastDate = newDate;

	return valid;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* string Display () const;
*
* Accessor: This outputs the final display
* ------------------------------------------------------------------------
* Return: display.str()
*************************************************************************/
string Savings::Display(Date newDate, string type, float amt,
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
* Accessor: This outputs the initial display
* ------------------------------------------------------------------------
* Return: display.str()
*************************************************************************/
string Savings::InitDisplay() const
{
	ostringstream display;

	//Calls the derived class to output display
	display << Account::InitDisplay();

	return display.str();
}
