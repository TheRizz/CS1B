/*************************************************************************
 * AUTHOR		: Debaggis, r34robotor
 * STUDENT ID	: 389657, 361170
 * Assn #7		: Repetition
 * CLASS		: CS1A
 * SECTION		: MW: 10AM
 * DUE DATE		: 04/06/2015
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************************************
 * Repetition - Buddy's Average Sheep Age Calculator
 * _______________________________________________________________________
 * This program should help Buddy minimize input errors by error checking
 * 	the age for him. The program will accept as many ages as Buddy needs
 * 	to input and should let Buddy know if the average age indicates if
 * 	his sheep are aging, young, or middle-aged.
 * _______________________________________________________________________
 * INPUT:
 * 		sheepAge		: The sheep's age
 *
 * OUTPUT:
 * 		averageAge		: The total number eggs
 * 		age				: The number of dozens of eggs
 * 		ERROR			: In case the sheep age is too large
 ************************************************************************/
int main()
{
	/*********************************************************************
	 * CONSTANTS
	 *
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 * ERROR		: Message that shows up when sheep age is too old
	 * OUTPUT_TXT	: Use to output the text before the population
	 * 				  description.
	 * COUNT_BEGIN	: Starts the counter
	 * COUNT_END	: Ends the counter
	 ********************************************************************/


	const char  PROGRAMMER [30]	= "Debaggis, r34robotor";
	const char  CLASS [5]		= "CS1A";
	const char  SECTION [25]	= "MW: 10:00a - 12:00p";
	const int   LAB_NUM			= 19;
	const char  LAB_NAME [25]	= "Repetition";


//----------------------------------------------------------------------

	int 	day;
	char 	pause;

//----------------------------------------------------------------------

	// OUTPUT - Class Heading
	cout << left;
	cout << "******************************************************";
	cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n******************************************************\n\n";
	cout << right;
//-----------------------------------------------------------------------

	cout << left << "Welcome to the 12 days of Christmas program\n";
	cout << "press enter to continue to the next day" << endl << endl;

	day = 1;

	for(day = 1; day <= 12; day = day + 1)
	{
		cout << "On the ";
		switch(day)
		{
			case 12 : cout << "twelfth ";
					  break;
			case 11 : cout << "eleventh ";
				 	  break;
			case 10 : cout << "tenth ";
				 	  break;
			case 9  : cout << "ninth ";
					  break;
			case 8  : cout << "eighth ";
				 	  break;
			case 7  : cout << "seventh ";
					  break;
			case 6  : cout << "sixth ";
				      break;
			case 5  : cout << "fifth ";
				 	  break;
			case 4  : cout << "fourth ";
				 	  break;
			case 3  : cout << "third ";
				 	  break;
			case 2  : cout << "second ";
				 	  break;
			case 1  : cout << "first ";
				 	  break;
		}  // End switch(day)

		cout << "day of Christmas,\nmy true love gave to me\n";

		switch(day)
		{
			case 12 : cout << "Twelve drummers drumming,\n";
			case 11 : cout << "Eleven pipers piping,\n";
			case 10 : cout << "Ten lords a-leaping,\n";
			case 9  : cout << "Nine ladies dancing,\n";
			case 8  : cout << "Eight maids a-milking,\n";
			case 7  : cout << "Seven swans a-swimming,\n";
			case 6  : cout << "Six geese a-laying,\n";
			case 5  : cout << "Five golden rings,\n";
			case 4  : cout << "Four calling birds\n";
			case 3  : cout << "Three French hens,\n";
			case 2  : cout << "Two turtle doves,\n";
			case 1  : if(day == 1)
							  {
							  	  cout << "A partridge in "
							  			  "a pear tree.\n";
							  }
							  else if(day > 1 && day < 12)
							  {
								  cout << "And a partridge in a "
										  "pear tree.\n";
							  }
							  else if(day == 12)
							  {
								  cout << "And a partridge in a "
										  "pear tree!";
							  }
							  else
							  {
								  cout << "Error : Incorrect date";
							  }
					  break;
		}  // End of switch(day)
		if(day < 12)
		{
			cin.get(pause);
		}
	}      // End of for(day = 1; day <= 12; day = day + 1)






	return 0;
}

