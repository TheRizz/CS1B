/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "Account.h"
#include <sstream>
#include <iomanip>

/*****************
 ** CONSTRUCTOR **
 *****************/
Account::Account()
{
	accName = "";
	accNum  = 0;
	balance = 0.0;
	accType = "";
}
/****************************
 ** OVERLOADED CONSTRUCTOR **
 ****************************/
Account::Account(string fName, int fAccNum, float fBalance, Date fDate,
				 string fType)
{
	accName	  	= fName;
	accNum		= fAccNum;
	balance   	= fBalance;
	firstDate	= fDate;
	lastDate 	= fDate;
	accType		= fType;
}

/*******************
 ** DECONSTRUCTOR **
 *******************/
Account::~Account()
{}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void InitializeValues (string fName, int fNumber, float fBalance,
* 						 int fDate);
*
* Mutator: This will change the acc name, number, balance, and first
* 			accessed date
*-------------------------------------------------------------------------
* Return: none
**************************************************************************/
void Account::InitializeValues (string fName,	// Acc name
								int fNum,		// Acc number
								float fBal,		// Acc Balance
								Date fDate)		// First accessed date
{
	accName = fName;
	accNum = fNum;
	balance = fBal;
	firstDate = fDate;
}

/*************************************************************************
* void SetVal (string fName);
*
* Mutator: This changes the account name
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Account::SetVal(string fName) // New account name
{
	accName = fName;
}


/*************************************************************************
* void SetVal (int fNum);
*
* Mutator: This changes the account number
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Account::SetVal (int fNum) // New account number
{
	accNum = fNum;
}


/*************************************************************************
* void SetVal (Date fDate);
*
* Mutator: This changes the account date
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Account::SetVal(Date fDate) // New first date
{
	firstDate = fDate;
}


/*************************************************************************
* void SetVal (string fBalance);
*
* Mutator: This changes the account balance
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Account::SetVal (float fBalance) // New balance
{
	balance = fBalance;
}


/*************************************************************************
* void Deposit (float fNum, Date fDate);
*
* Mutator: This updates the balance
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Account::Deposit (float fNum,	// Num to update balance
					   Date fDate)	// Date used
{
	balance = balance + fNum;
}


/*************************************************************************
* void Withdraw (float fNum, Date newDate);
*
* Mutator: This checks the validity of the withdraw
*-------------------------------------------------------------------------
* Return: Valid
*************************************************************************/
bool Account::Withdraw (float fNum, // Num to update balance
						Date fDate)	// Date used
{
	bool valid;

	valid = true;
	cout << "Outputting Validity";

	return valid;
}


/*************************************************************************
* void Transfer (float fNum, int accNum, Date fDate);
*
* Mutator: This checks the validity of the transfer
*-------------------------------------------------------------------------
* Return: Valid
*************************************************************************/
bool Account::Transfer (float fNum, // Num to update balance
						int accNum, // Account number
						Date fDate) // Date used
{
	bool valid;

	valid = true;

	return valid;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* string GetName () const;
*
* Accessor: Returns the name
* ------------------------------------------------------------------------
* Return: Account Name
*************************************************************************/
string Account::GetName() const
{
	return accName;
}


/*************************************************************************
* int GetAccNumber () const;
*
* Accessor: Returns the account number
* ------------------------------------------------------------------------
* Return: Account number
*************************************************************************/
int    Account::GetAccNum() const
{
	return accNum;
}


/*************************************************************************
* Date GetDate () const;
*
* Accessor: This method will return the first date the acc was accessed
* ------------------------------------------------------------------------
* Return: First date the account was accessed
*************************************************************************/
Date	   Account::GetDate() const
{
		return firstDate;
}


/*************************************************************************
* float GetBalance () const;
*
* Accessor: This will return the account balance
* ------------------------------------------------------------------------
* Return: Account balance
*************************************************************************/
float  Account::GetBalance() const
{
	return balance;
}


/*************************************************************************
* string GetType () const;
*
* Accessor: This will return the account type
* ------------------------------------------------------------------------
* Return: Account type
*************************************************************************/
string Account ::GetType()const
{
	return accType;
}


/*************************************************************************
* string Display () const;
*
* Accessor: This will display the account info
* ------------------------------------------------------------------------
* Return: Output string stream containing the formatted info
*************************************************************************/
string  Account::Display(Date fDate, 		// Date being used in output
						 string fType, 		// Account type
						 float fTotal, 		// Account total
						 Account *transfer) const // Transfer account
{
	ostringstream display;

	display << left;

	if (fType == "Deposit")
	{
		display << setw(20) << "Deposit";
	}
	else if (fType == "Withdrawal")
	{
		display << setw(20) << "Withdrawal";
	}
	else if (fType == "Transfer")
	{
		display << setw(20) << "Transfer";
	}
	display << setw(14) << fDate.DisplayDate();
	display << setw(9)  << accNum << setw(23) << accName << "$";
	display << right << fixed << setprecision(2) << setw(9) << fTotal;
	display << setw(4) << "$";
	display << setw(12) << balance;

	if (fType == "Transfer")
	{
		display << setw(14) << transfer->GetAccNum() << setw(4)  << "$";
		display << setw(12) << transfer->GetBalance();
	}

	display << endl;

	return display.str();
}


/*************************************************************************
* int GetType () const;
*
* Accessor: This displays the outputs
* ------------------------------------------------------------------------
* Return: Output string stream containing the formatted info
*************************************************************************/
string Account::InitDisplay() const
{
	ostringstream display;

	display << left;
	if (accType == "Checking")
	{
		display << setw(20) << "OPEN CHECKING";
	}
	else if (accType == "Savings")
	{
		display << setw(20) << "OPEN SAVINGS";
	}
	else if (accType == "MM")
	{
		display << setw(20) << "OPEN MONEY MARKET";
	}
	display << setw(14) << firstDate.DisplayDate();
	display << setw(9)  << accNum << setw(23) << accName << "$";
	display << right;

	display << fixed << setprecision(2) << setw(9) << balance << setw(4);
	display << "$" << setw(12) << balance;
	display << endl;

	return display.str();
}

