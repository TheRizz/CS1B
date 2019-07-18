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
 * FUNCTION  OutputWinner
 *________________________________________________________________________
 * This function receives as input a character indicating which player won
 *  or if the game was a tie and outputs an appropriate message. This
 *  function does not return anything as it simply outputs the appropriate
 *  message to the screen.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <Outputs the winner to the console and asks the user to press enter
 * to continue with the program>
 ************************************************************************/
void OutputWinner(char whoWon,		// IN - tic tac toe board
				  string playerX, 	// IN - player X’s name
				  string playerO)	// IN - player O’s name)
{
	// CALC - outputs the propper winner
	if(whoWon != 'T')
	{
		cout << "Congratulations to ";
		if(whoWon == 'X')
			{
				cout << playerX;
			}
			else
			{
				cout << playerO;
			}
		cout << " for winning!\n\n";
	}
	else
	{
		cout << "The game ends in a tie!\n\n";
	}
	// CALC - prompts the user to press enter to continue
	cout << "Please press enter to continue.\n";
	cin.ignore(1000,'\n');
	cin.ignore(1000,'\n');
}
