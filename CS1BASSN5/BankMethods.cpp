/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "Bank.h"
#include "Checking.h"
#include "Savings.h"
#include "MoneyMarket.h"
#include "Account.h"
#include <fstream>
#include <iomanip>


/*****************
 ** CONSTRUCTOR **
 *****************/
Bank::Bank()
{
	head = NULL;		// Initializes head to NULL
	tail = NULL;		// Initializes tail to NULL
	size = 0;			// Initializes size to 0
}

/*******************
 ** DECONSTRUCTOR **
 *******************/
Bank::~Bank()
{
	head = NULL;		// Sets head to NULL
	tail = NULL;		// Sets tail to NULL
}

/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void AddAccount (Account* info);
*
* Mutator: Adds an account to the list
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Bank::AddAccount (Account* info)
{
	Node *perPtr;			// Pointer used to traverse the list

	perPtr = new Node;

	perPtr -> bankNode = info; // Inserts account info
	perPtr -> next = NULL;	 // Initializes next
	perPtr -> prev = NULL;	 // Initializes previous


	if (head  == NULL && tail == NULL)
	{
		head = perPtr;
		tail = perPtr;
	}

	else if (tail -> next == NULL && tail -> prev == NULL)
	{
		perPtr -> next = head;
		head = perPtr;
		tail -> prev = head;
	}

	else
	{
		perPtr -> next = head;
		head -> prev = perPtr;
		head = perPtr;
	}

	size++;		//Increment size
}

/*************************************************************************
* void Deposit (float fNum, int accNum, Date fDate);
*
* Mutator: This method deposits an amount in to an account
*-------------------------------------------------------------------------
* Return: nothing
*************************************************************************/
void Bank::Deposit (float fNum, int accNum, Date fDate)
{
	Account *searchedPtr;	// Pointer used to search

	//Finds the account for transaction
	searchedPtr = Search(accNum);

	if (searchedPtr != NULL)
	{
		//Deposits money into account
		searchedPtr -> Deposit(fNum, fDate);
	}

}

/*************************************************************************
* void Withdraw (float outValue, int accNum, Date fDate);
*
* Mutator: This method processes a withdraw
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
void Bank::Withdraw(float outValue, int accNum, Date newDate)
{
	Account *searchedPtr;
	bool valid;

	//Finds the account for transaction
	searchedPtr = Search(accNum);

	if (searchedPtr != NULL)
	{
		//Withdraws money from account
		valid = searchedPtr -> Withdraw(outValue, newDate);
	}

	if (valid == false)
	{
		cout << "Cant Withdraw\n";
	}
}

/*************************************************************************
* void Transfer (ostream &oFile, float transValue, int currentAcc,
				 int transNumber, Date newDate);
*
* Mutator: This method processes a transfer
*-------------------------------------------------------------------------
* Return: valid
*************************************************************************/
bool Bank::Transfer(ostream &oFile,   // Output file variable
				    float transValue, // Transfer value
					int currentAcc,   // Current account number
					int transNumber,  // Transfer account number
					Date newDate)     // New Date
{
	Account *searchedPtr;	// Search Pointer
	Account *transPtr;		// Transfer pointer
	bool	valid;			// Boolean for authorization

	//Cannot transfer into the same account
	if (currentAcc == transNumber)
	{
		oFile<< "\n** ERROR - CAN\'T TRANSFER INTO THE SAME ACCOUNT ***\n";
		valid = false;
	}
	else
	{
		//Finds the account for transaction
		searchedPtr 	= Search(currentAcc);
		//Finds the account for transaction
		transPtr		= Search(transNumber);

		if (searchedPtr != NULL && transPtr != NULL)
		{
			// Checks if the transfer is valid
			valid= searchedPtr->Transfer(transValue, transNumber, newDate);

			if (valid == true)
			{
				//Transaction will proceed
				valid=transPtr->Transfer(transValue, transNumber, newDate);
			}
			else
			{
				oFile << "\n** TRANSFER FROM " << currentAcc << " to ";
				oFile << transNumber <<	" NOT ALLOWED! ***";
				oFile << "\n**        DUE TO INSUFFIECIENT FUNDS       ";
				oFile << "***\n\n";
				valid = false;

			}
		}
	}

	return valid;
}


/*************************************************************************
* void InitialDisplay (ostream& oFile, int acctNum, Date newDate,
* 					   string type, float amt, int transNum);
*
* Mutator: Outputs the info in a display
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Bank::Display (ostream& oFile, // Output file variable
					int acctNum, 	// Account number
					Date newDate,	// New account date
					string type, 	// Account type
					float total, 		// Amount being tranfered
					int transNum) const
{
	Account *searchedPtr;	// Searching pointer
	Account *transPtr;		// Transfer pointer

	//Finds the account for display
	searchedPtr 	= Search(acctNum);
	//Finds the account for display -> for transfer
	transPtr		= Search(transNum);

	oFile << searchedPtr->Display(newDate, type, total, transPtr);

}

/*************************************************************************
* void InitialDisplay (ostream &oFile);
*
* Mutator: Outputs the info from the input file
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Bank::InitialDisplay(ostream &oFile)
{
	Node *tempNode; // Temporary pointer

	tempNode = tail;

	while(tempNode != NULL)
	{
		//OUTPUT - account info from input file
		oFile << tempNode ->bankNode ->InitDisplay();
		tempNode = tempNode -> prev;
	}
	oFile << endl;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* Account* Search (int accNum) const;
*
* Accessor; This method will search through the link list and return an
* 			account info
* ------------------------------------------------------------------------
* Parameters:  accNum	//Acount number
* ------------------------------------------------------------------------
* Return: Searched account
*************************************************************************/

Account* Bank::Search (int accNum) const // Account number
{
	Node *travPtr;		//Create a traverse pointer
	Account *tempPtr;   //Account pointer that is being returned
	bool found;			//T/F

	//INITIALIZATION
	travPtr = head;
	found = false;

	// Finds the proper account number
	while (!found && travPtr != NULL)
	{
		if (travPtr -> bankNode -> GetAccNum() == accNum)
		{
			found = true;
			tempPtr = travPtr -> bankNode;
		}
		else
		{
			travPtr = travPtr -> next;
		}
	}

	return tempPtr;
}



