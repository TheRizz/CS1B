/*****************************************************************
 * AUTHOR         : David & Ryan
 * STUDENT ID     : 364164, 389657
 * LAB			  : Functions - GDC
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00a-10:50a
 * DUE DATE       : 9/4/15
 *****************************************************************/

 #include "header.h"
 using namespace std;

 /*****************************************************************
 * Functions - GDC
 *_______________________________________________________________
 * This program reads in two ints from the user and then calculates
 * the GDC using the Euclidean algorithm. This process is run
 * four times, and each time the program will output the GDC to
 * an output file.
 *_______________________________________________________________
 * INPUTS :
 *   numOne		 : The first number to be used to calculate GDC
 *   numTwo		 : The second number to be used to calculate GDC
 *
 * OUTPUTS:
 * 	 calcGDC	 : The GDC is output to an output file
 *
 *****************************************************************/

 int main()
{
 /*****************************************************************
 * CONSTANTS
 * ------------------------------------------------------------
 * ASSIGN_NUM    : Assignment number for header
 * ZERO          : Used to initialize to 0
 *****************************************************************/
 const int ASSIGN_NUM     =  3;
 const int ZERO           =  0;

 /****************************************************************/

 ofstream outFile;            // IN/OUT  - output file
 int numOne;				  // IN/CALC - first input number
 int numTwo;				  // IN/CALC - second input number
 int count;					  // CALC	 - counter for for loop
 int calcGCD;				  // CALC/OUT- greatest common div.

 /****************************************************************/

 /*****************************************************************
 * INPUT - Prompts for an input file and an output file name.
 *****************************************************************/
 outFile.open("outFile.txt");

 /*****************************************************************
 * OUTPUT - CLASS HEADING Ostream
 *****************************************************************/
 PrintHeader(outFile, "Functions - GCD", 'L', ASSIGN_NUM);
 PrintHeader(cout, "Functions - GCD", 'L', ASSIGN_NUM);

 /*****************************************************************
 * OUTPUT - CLASS HEADING Ostringstream
 *****************************************************************/
 outFile << PrintHeaderTwo("Functions - GCD", 'L', ASSIGN_NUM);
 cout    << PrintHeaderTwo("Functions - GCD", 'L', ASSIGN_NUM);

 // For loop that will run the process four times
 for(count = 1; count <= 4; count++)
 {
	 // Reads in two inputs from the user
     ReadInTwoUserInputs(numOne, numTwo);

     // Uses the values to calculate the GCD in a function
     calcGCD = CalcGCD(numOne, numTwo);

     // Prints the output to an output file
     PrintOutput(outFile, numOne, numTwo, calcGCD);
 } // end for loop

 cout << "Thank you for using my GCD calculator!";

 // Closes the output file
 outFile.close();

 // Returns 0.
 return ZERO;
}


