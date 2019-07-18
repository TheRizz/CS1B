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
 * FUNCTION  CheckWin
 *________________________________________________________________________
 * Checks to see if any win conditions are true for either of the tokens
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function will return the proper winner>
 ************************************************************************/
char CheckWin(const char boardAr[][BOARD_SIZE]) // IN - tic tac toe board
{



	char win;  // CALC - Checks to see whom the winner is
	win = 'T'; // INITIALIZE - initializes the winner to a tie

	// CALC - Checks every single possible win condition to check if the
	//		   specific token has won, then it stores the proper char
	if((boardAr[0][0] == 'X' &&
	    boardAr[1][0] == 'X' &&
	    boardAr[2][0] == 'X')||
	   (boardAr[0][1] == 'X' &&
		boardAr[1][1] == 'X' &&
		boardAr[2][1] == 'X')||
	   (boardAr[0][2] == 'X' &&
		boardAr[1][2] == 'X' &&
		boardAr[2][2] == 'X')||

	   (boardAr[0][0] == 'X' &&
		boardAr[0][1] == 'X' &&
		boardAr[0][2] == 'X')||
	   (boardAr[1][0] == 'X' &&
		boardAr[1][1] == 'X' &&
		boardAr[1][2] == 'X')||
	   (boardAr[2][0] == 'X' &&
		boardAr[2][1] == 'X' &&
		boardAr[2][2] == 'X')||

	   (boardAr[0][0] == 'X' &&
		boardAr[1][1] == 'X' &&
		boardAr[2][2] == 'X')||
	   (boardAr[2][0] == 'X' &&
		boardAr[1][1] == 'X' &&
		boardAr[0][2] == 'X'))
	{
		win = 'X';
	}
	else if(
	   (boardAr[0][0] == 'O' &&
	    boardAr[1][0] == 'O' &&
	    boardAr[2][0] == 'O')||
	   (boardAr[0][1] == 'O' &&
		boardAr[1][1] == 'O' &&
		boardAr[2][1] == 'O')||
	   (boardAr[0][2] == 'O' &&
		boardAr[1][2] == 'O' &&
		boardAr[2][2] == 'O')||

	   (boardAr[0][0] == 'O' &&
		boardAr[0][1] == 'O' &&
		boardAr[0][2] == 'O')||
	   (boardAr[1][0] == 'O' &&
		boardAr[1][1] == 'O' &&
		boardAr[1][2] == 'O')||
	   (boardAr[2][0] == 'O' &&
		boardAr[2][1] == 'O' &&
		boardAr[2][2] == 'O')||

	   (boardAr[0][0] == 'O' &&
		boardAr[1][1] == 'O' &&
		boardAr[2][2] == 'O')||
	   (boardAr[2][0] == 'O' &&
		boardAr[1][1] == 'O' &&
		boardAr[0][2] == 'O'))
	{
		win = 'O';
	}


	// CALC - returns the proper winner
	return win;
}
