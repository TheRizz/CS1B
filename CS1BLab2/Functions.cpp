/*************************************************************************
 * AUTHOR		: Ryan Martinez, Sean Trehy
 * STUDENT ID	: 389657
 * Lab #2		: Functions - Coin Flip
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 08/28/2015
 ************************************************************************/

#include "Lab2.h"

void ClassHeader()
{
	const char PROGRAMMER[50] = "Ryan Martinez, Sean Trehy";
	const char CLASS[5] = "CS1B";
	const char SECTION[25] = "MWF: 8:00a - 10:50a";
	const int  LAB_NUM = 2;
	const char LAB_NAME[30] = "Functions - Coin Flip";

	 cout << left;
	 cout << "**************************************************";
	 cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	 cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	 cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	 cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	 cout << "\n**************************************************\n\n";
	 cout << right;
}

void GetUserInfo(string &userName,     // The users name
		         char &userGender)     // The users gender
{
	cout << setw(27) << left << "What is your name?";
	getline(cin, userName);

	cout << setw(27) << "What is your gender (m/f): ";
	cin.get(userGender);
	cin.ignore(1000,'\n');
	userGender = toupper(userGender);

}

void FlipCoin(int &totalHeadCountF,     // The total number heads flipped
			  int &headCountF,          // Loop control variable
			  int &totalCountF)         // The total number of flips
{
	int randomValueF;

	srand(time(NULL));
	randomValueF = rand() % 2;

	while(headCountF <3)
	{
		cout << "Press <enter> to flip";
		cin.ignore(1000,'\n');

		if(randomValueF == 1)
		{
			cout << "HEAD\n";
			headCountF ++;
			totalHeadCountF ++;
			totalCountF ++;
		}
		else if (randomValueF == 0)
		{
			cout << "TAIL\n";
			headCountF = 0;
			totalCountF ++;
		}

		srand(time(NULL));
		randomValueF = rand() % 2;
	}

}

int CalcAverage(int totalCountF,       // The total number of flips
		        int totalHeadCountF)   // The total number heads flipped
{
	setprecision(2);
	return (float(totalHeadCountF) / totalCountF)*100;
}

void OutputResults(int totalCountF,   // The total number of flips
		           int headAverageF)  // Average number o0f heads flipped
{
	cout << endl << "It took you " << totalCountF << " tosses to get 3 "
													"heads in a row.\n";
	cout << "On average you flipped heads " << headAverageF << "% of the"
															  " time";

}
