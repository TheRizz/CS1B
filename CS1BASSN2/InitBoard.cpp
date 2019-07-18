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
 * FUNCTION  InitBoard
 *________________________________________________________________________
 * This function initializes each spot in the board to a space.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <Clears out the array>
 ************************************************************************/
void InitBoard(char boardAr[][BOARD_SIZE]) // IN - tic tac toe board
{
	int  col;     // CALC - the variable for column
	int  row;	  // CALC - the variable for row

	// LOOP - stores a space in to each of the board values
	for (col = 0; col < BOARD_SIZE; col++)
	{
		for (row = 0; row < BOARD_SIZE; row ++)
		{
			boardAr[col][row] = ' ';
		}
	}
}
