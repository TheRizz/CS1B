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
 * FUNCTION PrintHeader
 *_________________________________________________________
 * This function receives an assignment name, type
 * and number then outputs the appropriate header -
 * returns nothing.
 *_________________________________________________________
 * PRE - CONDITIONS
 * asName : Assignment Name has to be previously defined
 * asType : Assignment Type has to be previously defined
 * asNum  : Assignment Number has to be previously defined
 *
 * POST - CONDITIONS
 * This function will output the class heading to an output file
 * using ostream.
 * <Post - conditions are the changed outputs either
 * passed by value or by reference OR anything affected
 * by the function>
 ***********************************************************/

 void PrintHeader (ostream &output,   // IN/OUT - output file
                   string asName,     // IN - assignment Name
                   char asType,       // IN - assignment type
                                      //       (LAB or ASSIGNMENT)
                   int asNum)         // IN - assignment number
 {
     output << left;
     output << "****************************************************\n";
     output << "*  PROGRAMMED BY : David & Ryan";
     output << "\n*  " << setw(14) << "STUDENT ID" << ": 364164, 389657";
     output << "\n*  " << setw(14) << "CLASS" << ": CS1B --> MWF - 8:00a-10:50a";
     output << "\n*  " ;
     if (toupper(asType) == 'L')
     {
         output << "LAB #" << setw(9);
     }
     else
     {
         output << "ASSIGNMENT #" << setw(2);
     }
     output << asNum << ": " << asName;
     output << "\n****************************************************\n\n";
     output << right;
 }


