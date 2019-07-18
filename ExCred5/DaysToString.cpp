/*************************************************************************
 * AUTHOR		: Ryan Martinez
 * STUDENT ID	: 389657
 * Lab #5		: Enumerated Types
 * CLASS		: CS1B
 * SECTION		: MWF: 8AM
 * DUE DATE		: 9/11/2015
 ************************************************************************/

#include "header.h"


string DaysToString(Days dayF)
{
	string todayF;

	switch(dayF)
	{
	case SUNDAY : todayF = "SUNDAY";
		break;
	case MONDAY : todayF = "MONDAY";
			break;
	case TUESDAY : todayF = "TUESDAY";
			break;
	case WEDNESDAY : todayF = "WEDNESDAY";
			break;
	case THURSDAY : todayF = "THURSDAY";
			break;
	case FRIDAY : todayF = "FRIDAY";
			break;
	case SATURDAY : todayF = "SATURDAY";
			break;
	}

	return todayF;
}
