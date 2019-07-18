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
 * FUNCTION  GetPlayers
 *________________________________________________________________________
 * This function prompts the user and gets the input for the players’
 * names. playerX will always contain the name of the player that is
 * using the X token. playerO will always contain the name of the player
 * that is using the O token.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function updates the player names>
 ************************************************************************/
void GetPlayers(string& playerX, // OUT - player X’s name
				string& playerO) // OUT - player O’x name
{
	string playerOne;   // CALC - player one's name
	string playerTwo;	// CALC - player two's name
	char token;			// IN   - current player’s token ('X' or 'O')

	// CALC - receives input names from the user
	cout << "\nPlease enter the first player's name: ";
	getline(cin, playerOne);
	cout << "\nPlease enter the second player's name: ";
	getline(cin, playerTwo);
	// CALC - asks player one which token they would like
	cout << "\nWhat token would " << playerOne <<
			" like to be (X or O): ";
	cin.get(token);
	cin.ignore(1000,'\n');
	// CALC - ensures that the token is upper case
	token = toupper(token);

	// CALC - makes sure that a valid input is entered
	while(token != 'X' && token != 'O')
	{
		cout << "\n******Invalid Input******\n";
		cout << "\n\nWhat token would " << playerOne <<
				" like to be (X or O): ";
		cin.get(token);
		cin.ignore(1000,'\n');
		token = toupper(token);
	}
	// CALC - swaps the player names if player one wants to be O's
	if(token == 'X')
	{
		playerX = playerOne;
		playerO = playerTwo;
	}
	else if(token == 'O')
	{
		playerO = playerOne;
		playerX = playerTwo;
	}
}
