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
 * FUNCTION  ComputerPlay
 *________________________________________________________________________
 * Calculates a valid play for the computer to use
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function will update the board array>
 ************************************************************************/
void ComputerPlay(char boardAr[][BOARD_SIZE]) // IN - tic tac toe board
{
	int  col; // CALC - variable for the column
	int  row; // CALC - variable for the row

	// CALC - seeds a random value to be used
	srand(time(NULL));
	do
	{

	col = rand() % 3;
	row = rand() % 3;

	}while(boardAr[col][row] != ' ');// CALC - checks to see if the
									 //         array location is occupied

	boardAr[col][row] = 'O'; // CALC - sets the open value as an O to be
							 // 	    used as the comptuer's move
}
