/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #1		: Theme Park Day Planner
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/21/2015
 ************************************************************************/

	#include <iostream>
	#include <iomanip>
	using namespace std;
/*************************************************************************
 * Theme Park Day Planner
 * _______________________________________________________________________
 * This program takes in information from the keyboard including a child's
 * name, age, whether they are vegetarian or not, and whether they like
 * cheese or not. After taking all of these variable in to account, the
 * program processes the total cost of 10 children and outputs the total
 * cost for all of the children as well as the average cost at the end of
 * the program.
 * _______________________________________________________________________
 * INPUT:
 * 		name			: The child's name
 * 		age				: The child's age
 * 		veg				: The vegetarian preference of the child
 * 		cheese			: The cheese preference of the child
 *
 * OUTPUT:
 * 		totalCost		: The total cost of all of the children
 * 		averageCost		: The average cost of each child
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
		const int  LAB_NUM = 1;
		const char LAB_NAME[30] = "Theme Park Day Planner";

  //----------------------------------------------------------------------

	string 	name;	 	// INPUT	  - The name of the child
	int  	age;   		// IN & CALC  - The age of the child
	char 	veg; 	 	// IN & CALC  - The vegetarian preference
	char 	cheese; 	// IN & CALC  - The cheese preference
	int		count;		// CALC		  - The counter for the for loop
	float   totalCost; 	// CALC & OUT - The total cost for all of the kids

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

  // Initialize an accumulator to be able to add on to it
	 totalCost = 0;
  // INPUT - Inputs the information for each child in to the for loop to
  //			process the information to calculate the total cost

	 cout << "Welcome to the Theme Park Planner!"
			 " Please input each kid’s information." << endl << endl;

	 // This for loop will repeat 10 times to ensure that each kid's
	 //		information has been entered in to the program
	 for(count=1; count<=10; count ++)
	 {

		 // This will correctly count the number child that the program
		 //		is on and will correctly take in the name and then leaves
		 //		the input buffer clean for the next input
		 cout << left << "Kid #" << count << ":\n";
		 cout << setw(33) << "What is your kid's name?";
		 cin >> name;
		 cin.ignore(1000,'\n');

		 // This will take in the age of the child and store age as well
		 //		as it leaves the input buffer clean for the next input
		 cout << setw(33) << "How old is the kid?";
		 cin >> age;
		 cin.ignore(1000,'\n');

		 // This will take in the vegetarian preference of the child and
		 //		store it in the correct variable as well as leave the
		 //		input buffer clean
		 cout << setw(33) << "Vegetarian (Y/N)?";
		 cin.get(veg);
		 veg = toupper(veg);
		 cin.ignore(1000,'\n');

		 // This will take in the cheese preference of the child and
		 //		store it in the correct variable as well as leave the
		 //		input buffer clean
		 cout << setw(33) << "Does he/she like cheese (Y/N)?";
		 cin.get(cheese);
		 cheese = toupper(cheese);
		 cin.ignore(1000,'\n');

		 // This statement prepares for the if statement outputs to come
		 cout << endl << name << " will be going on the ";

		 // This if statement will output the correct rides that the
		 //		children will be riding, as well as accumulate the total
		 //		cost that it would take to ride these rides
		 if (age > 0 && age < 5)
		 {
			 cout << "Ferris Wheel and will be visiting the"
					 " Sheep Petting Zoo.\n";
		 }
		 else if (age >= 5 && age <= 12)
		 {
			 cout << "Tea Cups and will be playing Laser Tag.\n";
			 totalCost += 15;
		 }
		 else if (age > 12 && age < 18)
		 {
			 cout << "Roller Coaster and the Zip Line.\n";
			 totalCost += 20;
		 }

		 // These next two statements will error check and revert the
		 //		count back so that the data input does not need to start
		 //		from the beginning, thus saving time upon errors
		 else if (age <= 0)
		 {
			 cout << "You have entered an invalid age, please reenter "
					 "this child's information.\n";
			 count = count -1;
		 }
		 else
		 {
			 cout << "The age you have entered refers to an individual "
					 "whom is no longer a child, please reenter this "
					 "child's information.\n";
			 count = count -1;
		 }

		 // This outer if statement is to make sure that the ages aren't
		 //		out of bounds as well as prepares the statement for the
		 //		nested if-else statements
		 if (age > 0 && age < 18)
		 {
			 cout << "Pack a ";

			 // This if-else statement will calculate the correct food to
			 //		output based on the user entered vegetarian preference,
			 //		as well as the entered cheese preference. This will
			 //		also accumulate the cost of the food in to the total
			 //		cost at the end of the program
			 if (veg == 'N' && cheese == 'Y')
			 {
				 cout << "Cheeseburger ";
				 totalCost += 3.50;
			 }
			 else if (veg == 'N' && cheese == 'N')
			 {
				 cout << "Hamburger ";
				 totalCost += 3.25;
			 }
			 else if (veg == 'Y' && cheese == 'Y')
			 {
				 cout << "Cheese Pizza ";
				 totalCost += 2.50;
			 }
			 else if (veg == 'Y' && cheese == 'N')
			 {
				 cout << "Happy Garden meal ";
				 totalCost += 1.75;
			 }

			 cout << "for " << name << '!' << endl << endl << endl;

		 }
	 } // END - for(count=1; count<=10; count ++)

	 // OUTPUT -This will output the total cost of all of the children at
	 //		the end of the program
	 cout << endl << endl << setw(33) << "The total cost for the day is:";
	 cout << '$' << totalCost << endl;

	 // This will output the average cost per child plus it will restore
	 //		all default settings to make sure that any code written after
	 //		this block of code will start out with default settings
	 cout << setw(33) << "The average cost per kid is:";
	 cout << '$' << setprecision(2) << fixed << totalCost/10;
	 cout << setprecision(6) << right;
	 cout.unsetf(ios::fixed);

	 return 0;
}
