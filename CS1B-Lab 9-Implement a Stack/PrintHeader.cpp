/*************************************************************************
 *AUTHOR         : Drew Umlang
 *AUTHOR         : Ryan Martinez
 *STUDENT ID     : 390572
 *STUDENT ID     : 389657
 *LAB 9          : Implement a stack
 *CLASS          : CS1B
 *SECTION        : MWF: 8:00 - 10:30 am
 *DUE DATE       : 10/23/2015
 ************************************************************************/

#include"Testing.h"

/*************************************************************************
 * FUNCTION PrintHeader
 * _______________________________________________________________________
 * This function receives the output type, assignment name, assignment type,
 * and assignment number then outputs the correct header.
 * _______________________________________________________________________
 * PRE-CONDITIONS
 * 		output : The type of output to be used
 * 		asName : Assignment Name must be gotten previously.
 * 		asType : Assignment Type must be gotten previously.
 * 		asNum  : Assignment Number must be gotten previously.
 * POST_CONDITIONS
 * 		This function will output the class heading.
 ************************************************************************/
string PrintHeader(string asName, // IN - assignment Name
		char asType, 			      // IN - assignment type
									  //	  (LAB or ASSIGNMENT)
		int asNum)					  // IN - assignment number
// IN/OUT - output file
{
	ostringstream output;
	output << left;
	output << "*****************************************************";
	output << "\n* PROGRAMMED BY : Drew Umlang & Ryan Martinez";
	output << "\n* " << setw(14) << "STUDENT ID" << ": 390572 & 389657";
	output << "\n* " << setw(14) << "Class" << ": CS1B --> MWF - 8:00-10:30AM";
	output << "\n* ";
	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName;
	output << "\n*****************************************************";
	output << endl << endl;
	output << right;

	return output.str();
}
