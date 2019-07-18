/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "header.h"
#include <iomanip>

/*************************************************************************
 *	Saddleback Bank
 * _______________________________________________________________________
 *	This program will read in information from an input file and then
 *	with access to account information will process transactions that
 *	happen within the accounts and then output the processes in an output
 *	file which is properly aligned.
 * _______________________________________________________________________
 * INPUT:
 * 	month	: month
 *	day		: day
 *	year	: year
 *	accNum	: account Number
 *	num		: amount of transaction
 *	trans	: type of transaction
 *	transNum: account transferred from
 *
 * OUTPUT:
 *
 ************************************************************************/

int main()
{
	Bank bank;			// Bank account
	Date modifyDate;	// Date of transaction

	int	 month;			// IN & CALC - month of transaction
	int  day;			// IN & CALC - day of transaction
	int  year;			// IN & CALC - year of transaction
	int  accNum;		// IN & CALC - account Number
	float num;			// IN & CALC - amount of transaction
	string trans;		// IN & CALC - type of transaction
	int  transFrom;		// IN & CALC - account transferred from
	bool valid;			// IN & CALC - Check validity

	ifstream inFile;
	ofstream outFile;

	//Reads in the acc information from the input file
	bank = ReadInFile();

	// Prepares the output file
	outFile.open("OFile.txt");

	// Aligns the output file
	outFile  << left
			 << setw(20) << "TRANSACTION" << setw(14) << "DATE" << setw(9)
			 << "ACCT#" << setw(23) << "ACCT NAME" << right << setw(10)
			 << "AMOUNT" << setw(16) << "BALANCE" << setw(14)
			 << "FROM ACCT#" << setw(17) << "FROM ACCT BAL\n"
			 << left << setw(20) << "------------" << setw(14)
			 << "----------" << setw(9)	 << "-----" << setw(23)
			 << "--------------------" << right << setw(10) << "----------"
			 << setw(16) << "-------------" << setw(14) << "----------"
			 << setw(17) << "-------------\n";

	// Aligns the head of the output
	bank.InitialDisplay(outFile);

	// Opens the input file
	inFile.open("Transaction.txt");

	//Initializes the initial account number to transfer from
	transFrom = 0;


	while (inFile)
	{
		// Reads in the date
		inFile >> month;
		inFile >> day;
		inFile >> year;

		// Creates a date object
		modifyDate = Date(month, day, year);

		inFile >> accNum;
		inFile >> num;
		inFile >> trans;

		// Prepares the account to transfer from
		transFrom = 0;

		if (trans == "Transfer")
		{
			// Gets the acc num
			inFile >> transFrom;

			// Checks validity
			valid = bank.Transfer(outFile, num, transFrom, accNum,
										modifyDate);

			if (valid)
			{
				// Outputs the final display
				bank.Display(outFile, accNum, modifyDate, trans,
									num, transFrom);
			}
		}
		else if (trans == "Withdrawal")
		{
			// Processes a withrdaw
			bank.Withdraw(num, accNum, modifyDate);

			// Outputs the info of the withdraw
			bank.Display(outFile, accNum, modifyDate, trans, num, transFrom);
		}
		else if (trans == "Deposit")
		{
			// Deposits money in to the correct account
			bank.Deposit(num, accNum, modifyDate);

			// Shows the final amount change
			bank.Display(outFile, accNum, modifyDate, trans, num, transFrom);
		}
	}

	//Closes files
	inFile.close();
	outFile.close();

	return 0;
}
