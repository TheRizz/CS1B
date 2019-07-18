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
 * FUNCTION PrintOutput
 *_________________________________________________________
 * This function takes the previously calculated values and
 * outputs them to an output file.
 * returns nothing.
 *_________________________________________________________
 * PRE - CONDITIONS
 * intOne	- This integer needs to be previously acquired
 * intOne	- This integer needs to be previously acquired
 *
 * POST - CONDITIONS
 * This function will output the final information.
 ***********************************************************/

 void PrintOutput (ofstream &oFile,
                   int intOne,
                   int intTwo,
                   int numGCD)   // IN/OUT - output file
 {
     oFile << "The GCD for " << intOne << " & " << intTwo << " = " << numGCD
           << endl << endl;
 }



