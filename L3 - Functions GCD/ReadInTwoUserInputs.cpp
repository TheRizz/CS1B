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

 /**********************************************************
 *
 * FUNCTION ReadInTwoUserInputs
 *_________________________________________________________
 * This function reads two two inputs from the user and
 * passes them back by reference
 * returns nothing
 * _________________________________________________________
 * PRE - CONDITIONS
 *
 * POST - CONDITIONS
 * This function will output two prompts and obtain two inputs
 ***********************************************************/

 void ReadInTwoUserInputs (int &intOne,
                           int &intTwo)   // IN/OUT - output file
 {
	 cout << left;
     cout << setw(26) << "Enter the first integer:";
     cin >> intOne;

     cout << setw(26) << "Enter the second integer:";
     cin >> intTwo;
     cin.ignore(1000,'\n');
     cout << endl;
 }



