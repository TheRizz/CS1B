/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #5		: Enumerated Types
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/11/2015
 ************************************************************************/

#include "header.h"


Days StringToDays(string todayF)
{
	Days dayF;
	int numDay;
	numDay = 0;

	if(todayF == "Sunday")
	{
		numDay = 0;
	}
	else if (todayF == "Monday")
	{
		numDay = 1;
	}
	else if (todayF == "Tuesday")
	{
		numDay = 2;
	}
	else if (todayF == "Wednesday")
	{
		numDay = 3;
	}
	else if (todayF == "Thursday")
	{
		numDay = 4;
	}
	else if (todayF == "Friday")
	{
		numDay = 5;
	}
	else if (todayF == "Saturday")
	{
		numDay = 6;
	}

	switch(numDay)
	{
	case 0 : dayF = SUNDAY;
			break;
	case 1 : dayF = MONDAY;
		break;
	case 2 : dayF = TUESDAY;
			break;
	case 3 : dayF = WEDNESDAY;
			break;
	case 4 : dayF = THURSDAY;
			break;
	case 5 : dayF = FRIDAY;
			break;
	case 6 : dayF = SATURDAY;
			break;
	default: break;
	}

	return dayF;
}
