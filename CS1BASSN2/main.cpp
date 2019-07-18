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
 * Multi-Dimensional Array - Tic Tac Toe
 * _______________________________________________________________________
 * This program will play a game of tic tac toe with the user. The user
 * has the option to enter in their names, if not then the names are
 * defaulted. The user can play either a two player game in which they
 * play against another player, or a game in which they play against
 * a computer.
 * _______________________________________________________________________
 * INPUT:
 * 	int		play			- The decision to play after instructions
 * 	int		menu			- The menu selection
 * 	string	playerX			- The player stored with token X
 * 	string	playerO			- The player stored with token O
 *	string 	userName;	    - The name of the user
 *	char    userGender;     - The gender of the user
 *
 * OUTPUT:
 * <nothing Additional>
 *
 * PROCESS & CALC:
 *  int		win				- Counter that checks the turn status
 *  char	token			- The current token for a player
 *  char	whoWon			- Checks to see if there is any winner
 *  bool 	valid			- Used to check for valid menu inputs
 *  char	boardAr[][]		- The array for the board that stores the moves
 *
 ************************************************************************/
	int main()
	{

	//---------------------------------------------------------------------
						// IN   - tic tac toe board
	char 	boardAr[BOARD_SIZE][BOARD_SIZE];
	int 	play;		// IN   - the decision to play
	int 	menu;		// IN   - The menu selection
	string	playerX;	// IN   - The name of player X
	string 	playerO;	// IN   - The name of player O
	int 	win;		// CALC - Counter for the turns
	char 	token;		// CALC - The current token to be used
	char 	whoWon;		// CALC - Checks to see if a player has won
	bool 	valid;		// CALC - Checks to see if an input is valid


	//---------------------------------------------------------------------
	// INITIALIZE - initializes all of the variables so that when they are
	//				called upon they won't cause an error

	whoWon = 'T'; // Starts this variable off as a tie, changed if another
				  //  case is true
	win = 0;	  // Initializes a counter to check the turns
	token = 'X';  // The player who is token X will go first
	playerX = "Player One";	// Initializes the name for playerX
	playerO = "Player Two";	// Initializes the name for playerO
	// OUTPUT - the class header
	ClassHeader();
	// OUTPUT - outputs the instructions to the user
	OutputInstruct();
	cout << "Please enter 1 if you would like to play and 0 if\nyou wish ";
	cout << "to end the program now: ";

	// LOOP - used to check the validity of the play
	do
	{

		// IF - the cin is not a valid
		if(!(cin >> play))
		{
			cout << "Please enter a valid input: ";
			cin.clear();

			cin.ignore(1000,'\n');
			valid = false;
		}
		else if (play == 0)
		{
			cout << endl << endl << "Please come back and play soon.";
			valid = true;
		}
		else if (play == 1)
		{
			cout << "\nThank you for choosing to play\n"
					"Please use the menu to help you navigate\n";
			valid = true;
		}
	}while(!valid);

	// IF - the user enters 1 to play then the menu is displayed
	if(play == 1)
	{
	do
	{
		// OUTPUT - outputs the menu
		cout << "\nType 1 to Exit\n"
				"Type 2 to set your player names\n"
				"Type 3 to play in two player mode\n"
				"type 4 to play in one player mode\n\n";
		// IF - checks to see if the menu input is a valid input
		if(!(cin >> menu))
		{
			cout << "\nPlease enter a valid menu number\n";
			// CLEAR - clears the input buffer
			cin.clear();

			cin.ignore(1000,'\n');
		}
		else if(menu == 2)
		{
			cin.ignore(1000,'\n');
			// ASSIGN - puts string names in to the user variables
			GetPlayers(playerX, playerO);
		}
		else if(menu == 3)
		{
			// INITIALIZE - initializes the board
			InitBoard(boardAr);
			// LOOP - checks to make sure the game has not ended, and
			//		   continues to run while the game has not ended
			while(win < (BOARD_SIZE*BOARD_SIZE) &&
				  whoWon != 'O' &&
				  whoWon != 'X')
			{
				// DISPLAY - displays the board for the user
				DisplayBoard(boardAr);
				// INPUT - receives a valid input from the user
				GetAndCheckInp(boardAr, token, playerX, playerO);
				// CALC - switches the token so the next player can
				//		   have their turn
				token = SwitchToken(token);

				// CALC - checks to see if a win condition is possible
				//		   after enough turns have gone by
				if(win > 3)
				{
					// CALC - checks to see if any valid win statements
					//		   have been returned
					whoWon = CheckWin(boardAr);
				}
				// CALC - incriments the counter for the turns
				win++;
			}
			// CALC - if the turn count is less than the board size then
			//		   it will output the board for the user
			if(win < (BOARD_SIZE*BOARD_SIZE))
			{
				DisplayBoard(boardAr);
			}
			// OUTPUT - this will display the proper winner
			OutputWinner(whoWon, playerX, playerO);
		}
		else if(menu == 4)
		{
			// INITIALIZE - initializes the board
			InitBoard(boardAr);
			// LOOP - checks to make sure the game has not ended, and
			//		   continues to run while the game has not ended
			while(win < (BOARD_SIZE*BOARD_SIZE) &&
				  whoWon != 'O' &&
				  whoWon != 'X')
			{
				// DISPLAY - displays the board for the user
				DisplayBoard(boardAr);
				// INPUT - receives a valid input from the user
				GetAndCheckInp(boardAr, token, playerX, "Computer");
				// CALC - incriments the counter for the turns
				win++;

				// CALC - checks to see if a win condition is possible
				//		   after enough turns have gone by
				if(win > 3)
				{
					whoWon = CheckWin(boardAr);
				}

				// CALC - if the user has not won the game yet then the
				//		   program will give the computer a turn
				if(win < (BOARD_SIZE*BOARD_SIZE) && whoWon != 'X')
				{
				// CALC - generates valid board inputs until one is
				//		   available and then inputs an O in to it
				ComputerPlay(boardAr);
				// CALC - checks to see if a win condition is possible
				//		   after enough turns have gone by
				if(win > 3)
				{
					whoWon = CheckWin(boardAr);
				}
				// CALC - incriments the counter for the turns
				win++;
				}

			}
			// CALC - if the turn count is less than the board size then
			//		   it will output the board for the user
			if(win < (BOARD_SIZE*BOARD_SIZE))
			{
				DisplayBoard(boardAr);
			}
			// OUTPUT - this will display the proper winner
			OutputWinner(whoWon, playerX, "Computer");
		}
		// CALC - reinitializes the values for these variables to play
		//		   a new game
		whoWon = 'T';// Starts this variable off as a tie, changed if another
					 //  case is true
		win = 0;	 // Initializes a counter to check the turns
		token = 'X'; // The player who is token X will go first
	}while(menu != 1); // checks to make sure the menu number is not 1
	}

	return 0;
}
