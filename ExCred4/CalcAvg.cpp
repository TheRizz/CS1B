/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #4		: Functions and Arrays
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/4/2015
 ************************************************************************/

float CalcAvg(int numF[], const int AR_SIZE)
{
	float avg;
	int sum;
	int index;

	for(index = 0; index < AR_SIZE; index ++)
	{
		sum += numF[index];
	}

	avg = float (sum) / index;


	return avg;
}
