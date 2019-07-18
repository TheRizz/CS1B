/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "header.h"

Bank ReadInFile()
{
	int		year;			//Year opened
	int 	fAccNum;		//Account number
	float	amount;			//Amount of transaction
	string	type;			//Account type
	string  fName;			//First name
	Account *checkPtr;		//Creates an account
	Date 	openingDate;	//Opening date of account
	int 	month;			//Month opened
	int		day;			//Day opened

	Bank bank;	//Creates a bank

	ifstream inFile;		//fstream

	//Opens input file
	inFile.open("InFile.txt");

	while (!(inFile.eof()))
	{
		inFile >> month;
		inFile >> day;
		inFile >> year;

		//Sets month, day, and year into a date
		openingDate = Date(month, day, year);

		inFile >> fAccNum;
		inFile >> type;
		inFile >> amount;
		getline(inFile, fName);


		//Checking type will create a checking account
		if (type  == "Checking")
		{
			checkPtr = new Checking(fName, fAccNum, amount, openingDate, type);

		}
		//Saving type will create a saving account
		else if (type == "Savings")
		{
			checkPtr = new Savings(fName, fAccNum, amount, 0.1, openingDate, type);
		}
		//MoneyMarket will create a money market account
		else if (type == "MM")
		{
			checkPtr = new MoneyMarket(fName, fAccNum, amount, 0.2, openingDate, type);
		}
		//Inserts account into a Node
		bank.AddAccount(checkPtr);

	}

	//Closes input file
	inFile.close();

	return bank;
}
