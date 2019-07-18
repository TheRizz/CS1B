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
 * FUNCTION  SwitchToken
 *________________________________________________________________________
 * This function switches the active player.
*  It takes in a parameter representing the current player's token
*  as a character value (either an X or an O) and returns the opposite.
*  For example, if this function receives an X it returns an 0. If it
*  receives and O it returns and X.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function returns the updated token to the main function>
 ************************************************************************/
char SwitchToken(char token) // IN - current player’s token ('X' or 'O')
{
	// CALC - swaps the current token so that the next player can have
	//		   their turn
	if(token == 'X')
	{
		token = 'O';
	}
	else if(token == 'O')
	{
		token = 'X';
	}
	return token; // CALC - returns the updated token
}
