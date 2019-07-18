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
 * FUNCTION  DisplayBoard
 *________________________________________________________________________
 * This function outputs the tic tac toe board including the tokens
*  played in the proper format
 *________________________________________________________________________
 * PRE-CONDITIONS
 *
 * POST-CONDITIONS
 * <This function should display the updated board to the user>
 ************************************************************************/
void DisplayBoard(
		const char boardAr[][BOARD_SIZE]) // IN - tic tac toe board
{
	int col;	// CALC - the variable for column
	int row;	// CALC - the variable for row

	system("cls"); // CALC - clears the screen when playing on the .exe
	// OUT - outputs the row numbers
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	// LOOP - outputs the proper format for the tic tac toe board
	for (col = 0; col < 3; col++)
	{
		cout << setw(7) << "[" << col + 1 << "][1] | " << "[" << col + 1;
		cout << "][2] | " << "[" << col + 1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;
		for (row = 0; row < 3; row++)
		{
			switch (row)
			{
			case 0:
				cout << col + 1 << setw(9) << boardAr[col][row];
				cout << setw(4) << "|";
				break;
			case 1:
				cout << setw(4) << boardAr[col][row];
				cout << setw(5) << "|";
				break;
			case 2:
				cout << setw(4) << boardAr[col][row] << endl;
				break;
			default:
				cout << "ERROR!\n\n";
			}
		}
		cout << setw(14) << "|" << setw(10) << "|\n";
		if (col != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
