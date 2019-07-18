/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Multi-Dimensional Array - Tic Tac Toe
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/9/2015
 ************************************************************************/

#include "header.h"

/*************************************************************************
 *
 * FUNCTION  OutputInstruct
 *________________________________________________________________________
 * This function outputs instructions to the users. There are no input
*  or output parameters for this function as it only displays text to
*  the screen.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <There are no post conditions for this function.>
 ************************************************************************/
void OutputInstruct()
{
	cout << "Hello and Welcome to Ryan's Tic Tac Toe Program" << endl;
	cout << "To play the game just enter in your the correct\nplace for "
			"your token by first entering the column,\nand then the row. "
			"The first player with 3 tokens\nin a row wins! The player "
			"whom chooses X's will\ngo first.\n\n";
}
