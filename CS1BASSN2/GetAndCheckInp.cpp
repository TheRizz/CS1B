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
 * FUNCTION  GetAndCheckInp
 *________________________________________________________________________
 * This function receives the players move and checks to make sure that
*  the move is valid as well as that there are no existing pieces already
*  in the input space.
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function updates the array>
 ************************************************************************/
void GetAndCheckInp(
		char boardAr[][BOARD_SIZE],	// IN - tic tac toe board
		char token, 		// IN - current player’s token ('X' or 'O')
		string playerX, 	// IN - player X’s name
		string playerO) 	// IN - player O’s name
{
	bool invalid; // CALC - checks to see if the input is valid
	bool valid;   // CALC - checks to see if the move is valid
	int  col;     // CALC - the variable for column
	int  row;	  // CALC - the variable for row

	valid = false; // INITIALIZE - initializes the valid value to false

	// OUT - outputs which user's turn it is
	do
	{
		cout << "It's your move ";
		if(token == 'X')
		{
			cout << playerX;
		}
		else
		{
			cout << playerO;
		}
		cout << ".\nWhere do you wish to play?\n";

		// CALC - checks to make sure that the input is valid
		do
			{
				cout << "Column: ";
				if(!(cin  >> col) || (col > 3 || col < 1))
				{
					cout << "\nPlease input an integer (1-3)\n\n";
					cin.clear();

					cin.ignore(1000,'\n');
					invalid = true;
				}
				else
				{
					invalid = false;
				}
		}while((col > 3 || col < 1) && invalid);

		// CALC - checks to make sure that the input is valid
		do
		{
			cout << "Row: ";
			if(!(cin  >> row) || (row > 3 || row < 1))
			{
				cout << "\nPlease input an integer (1-3)\n\n";
				cin.clear();

				cin.ignore(1000,'\n');
				invalid = true;
			}
			else
			{
				invalid = false;
			}
		}while((row > 3 || row < 1) && invalid);

		// CALC - this will make sure that the proper values is stored in
		//		   to the array
		row = row - 1;
		col = col - 1;

		if(boardAr[col][row] == ' ')
		{
			valid = true;

		}
		else
		{
			cout << "This spot is already occupied\n"
					"Please enter a spot that is "
					"not already occupied.\n\n";
		}

	}while(!valid);
	boardAr[col][row] = token; // CALC - sets the location on the board
							   //		  equal to the token
}
