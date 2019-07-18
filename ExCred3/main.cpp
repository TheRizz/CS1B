/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #1		: Selection and Repetition
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/21/2015
 ************************************************************************/

	#include <iostream>
	#include <iomanip>
	using namespace std;
/*************************************************************************
 * Selection and Repetition
 * _______________________________________________________________________
 * This program takes in information from the keyboard including a child's
 * name, age, whether they are vegetarian or not, and whether they like
 * cheese or not. After taking all of these variable in to account, the
 * program processes the total cost of 10 children and outputs the total
 * cost for all of the children as well as the average cost at the end of
 * the program.
 * _______________________________________________________________________
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
	 ********************************************************************/


		const char PROGRAMMER[30] = "Ryan Martinez";
		const char CLASS[5] = "CS1B";
		const char SECTION[25] = "MWF: 8:00a - 10:50a";
		const int  LAB_NUM = 3;
		const char LAB_NAME[30] = "Selection and Repetition";

  //----------------------------------------------------------------------

		int boxWeight;
		int totalBoxWeight;
		int small;
		int medium;
		int large;
		int extraLarge;
		float totalPrice;

  //----------------------------------------------------------------------
  // OUTPUT – Class Heading
	 cout << left;
	 cout << "**************************************************";
	 cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	 cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	 cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	 cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	 cout << "\n**************************************************\n\n";
	 cout << right;

	 totalBoxWeight = 0;
	 small = 0;
	 medium = 0;
	 large = 0;
	 extraLarge = 0;
	 totalPrice = 0;

	 cout << left << "Welcome to the Automated Box Calculator!\n";

	 cout << "Please enter any number of boxes to be calculated.\n\n";

	 cout << "Please enter your box's weight (Enter 0 to stop)\n";
	 cin >> boxWeight;

	 while(boxWeight > 0 || boxWeight < 0)
	 {
		 totalBoxWeight += boxWeight;
		 if (boxWeight <= 2 && boxWeight > 0)
		 {
			 small ++;
			 totalPrice += 5.00;
		 }
		 else if (boxWeight >= 3 && boxWeight < 13)
		 {
			 medium ++;
			 totalPrice += 8.50;
		 }
		 else if (boxWeight >= 13 && boxWeight < 21)
		 {
			 large ++;
			 totalPrice += 12.50;
		 }
		 else if (boxWeight >=21 && boxWeight < 41)
		 {
			 extraLarge ++;
			 totalPrice += 18.00;
		 }
		 else if (boxWeight >=41)
		 {
			 cout << "\nYour box size is too large, please enter a smaller"
					 " box size.\n\n";
		 }
		 else
		 {
			 cout << "\nYou have entered an invalid box size, please enter"
					 " a valid box size\n\n";
		 }

		 cout << "\nPlease enter your box's weight (Enter 0 to stop)\n";
		 cin >> boxWeight;
	 }

	 cout << endl << small << " packages under 2 lbs.\n";
	 cout << medium << " packages between 3 - 12 lbs.\n";
	 cout << large << " packages between 13 - 20 lbs.\n";
	 cout << extraLarge << " packages between 21 - 40 lbs.\n";
	 cout << fixed << setprecision(2);
	 cout << "The total shipping price is $" << totalPrice;

	 cout << right << setprecision(6);
	 cout.unsetf(ios::fixed);

	 return 0;
}
