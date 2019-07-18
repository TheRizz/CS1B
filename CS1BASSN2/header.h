/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Assignment	: Multi-Dimensional Array - Tic Tac Toe
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 10/9/2015
 ************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int BOARD_SIZE = 3;
/*************************************************************************
* ClassHeader
*  This function outputs an assignment name, type and number then outputs
*  the appropriate header.
*
* RETURNS: nothing
*  <This will output the class heading>
*************************************************************************/
void ClassHeader();				// OUT - Outputs the class heading
/************************************************************************
* OutputInstruct
*   This function outputs instructions to the users. There are no input
*   or output parameters for this function as it only displays text to
*   the screen.
*
* RETURNS: nothing
*  <Displays the instructions to the user>
*************************************************************************/
void OutputInstruct();
/************************************************************************
* InitBoard
*   This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
*************************************************************************/
void InitBoard(char boardAr[][BOARD_SIZE]); // OUT - tic tac toe board
/*************************************************************************
* DisplayBoard
*   This function outputs the tic tac toe board including the tokens
*   played in the proper format (as described below).
*
*		    1 		 2 		 3
*		 [1][1] | [1][2] | [1][3]
*		 		| 		 |
*	1 	 	 	|		 |
*		 		| 		 |
*		 --------------------------
*		 [2][1] | [2][2] | [2][3]
*		 		|		 |
*	2	 		| 	   	 |
*		 		|		 |
*		 --------------------------
*		 [3][1] | [3][2] | [3][3]
*		 		| 		 |
*	3	  	    |		 |
*		 		|		 |
*
* RETURNS: nothing
*  <outputs the current state of the board>
*************************************************************************/
void DisplayBoard(const char boardAr[][3]); // IN - tic tac toe board
/*************************************************************************
* GetPlayers
* 	This function prompts the user and gets the input for the players’
* 	names. playerX will always contain the name of the player that is
* 	using the X token. playerO will always contain the name of the player
* 	that is using the O token.
*
* RETURNS: the players names through the variables playerX and playerO.
*************************************************************************/
void GetPlayers(string& playerX,  // OUT - player X’s name
				string& playerO); // OUT - player O’x name
/*************************************************************************
 * GetAndCheckInp
 * 	 This function receives the players move and checks to make sure that
 *   the move is valid as well as that there are no existing pieces already
 *   in the input space.
 * RETURNS: an error if the move is invalid, otherwise it updates the
 * 	 board so that it properly stores all valid moves
*************************************************************************/
void GetAndCheckInp(
		char boardAr[][BOARD_SIZE],	// IN - tic tac toe board
		char token, 		// IN - current player’s token ('X' or 'O')
		string playerX, 	// IN - player X’s name
		string playerO);	// IN - player O’s name
/*************************************************************************
* SwitchToken
*   This function switches the active player.
*   It takes in a parameter representing the current player's token
*   as a character value (either an X or an O) and returns the opposite.
*   For example, if this function receives an X it returns an 0. If it
*   receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
************************************************************************/
char SwitchToken(char token); // IN - current player’s token ('X' or 'O')
/************************************************************************
* CheckWin
*   This function checks to see if either player has run. Once it is
*   possible for a win condition to exist, this should run after each a
*   player makes a play.
*
* RETURNS: the character value of the player that won or a value that
* indicates a tie.
*************************************************************************/
char CheckWin(const char boardAr[][BOARD_SIZE]); // IN - tic tac toe board
/*************************************************************************
* OutputWinner
*   This function receives as input a character indicating which player
*   won or if the game was a tie and outputs an appropriate message. This
*   function does not return anything as it simply outputs the appropriate
*   message to the screen.
*
* RETURNS: nothing
*  <Displays the winner’s name>
*************************************************************************/
void OutputWinner(char whoWon,     // IN - represents the winner or a
							       // value indicating a tied game.
				  string playerX,  // OUT - player X’s name
				  string playerO); // OUT - player O’x name
/*************************************************************************
* ComputerPlay
*   This function uses a random seed as well as a random number generator
*   to calculate random moves, then it checks to see if the moves are
*   occupied or not. If the move is not occupied then the computer stores
*   its move in the valid position.
*
* RETURNS: nothing
*  <Inputs a valid move in to the array>
*************************************************************************/

void ComputerPlay(char board[][BOARD_SIZE]); // IN - tic tac toe board

#endif /* HEADER_H_ */
