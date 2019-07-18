/*************************************************************************
 * AUTHOR         : Michael Collins & Ryan Martinez
 * STUDENT ID     : 1001813 & 389657
 * LAB #10        : Implementing a Queue
 * CLASS          : CS1B
 * SECTION        : MWF - 8:00am
 * DUE DATE       : 10/30/15
 *************************************************************************/

#include"header.h"

//Prints header using ostream
void PrintHeader(ostream &output, // OUT - stream output
		string asName, 			  // OUT - assignment name
		char asType, 			  // OUT - assignment type
		int asNum)				  // OUT - assignment #
{
    output << left;
    output << "****************************************************\n";
    output << "*  PROGRAMMED BY : Michael Collins & Ryan Martinez";
    output << "\n*  " << setw(14) << "STUDENT ID" << ": 1001813, 389657";
    output << "\n*  " << setw(14) << "CLASS" << ": CS1B --> "
    		"MWF - 8:00a-10:50a";
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
