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
 * FUNCTION CalcGDC
 *_________________________________________________________
 * This function calculates the GDC of two numbers by reading
 * in the first two values and then calculating the remainder,
 * and then taking the remainder of the next two values until
 * a smallest number is reached.
 *_________________________________________________________
 * PRE - CONDITIONS
 * intOne	- This integer needs to be previously acquired
 * intOne	- This integer needs to be previously acquired
 *
 * POST - CONDITIONS
 * This function will output the average of heads.
 ***********************************************************/

 int CalcGCD (int intOne,
              int intTwo)   // IN/OUT - output file
 {
     int finalGCD;
     int intThree;

     if(intOne == 0)
     {
         finalGCD = intTwo;
     }
     else if(intTwo == 0)
     {
         finalGCD = intOne;
     }

     while(intTwo > 0)
            {
               intThree = (intOne % intTwo);
               intOne = intTwo;
               intTwo = intThree;
            }
     finalGCD = intOne;

     return finalGCD;
 }




