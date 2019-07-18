/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#include "Date.h"
#include <iomanip>


/******************
 ** CONSTRUCTORS **
 ******************/
Date::Date()
{
	month = 0;
	day   = 0;
	year  = 0000;

}

Date::Date(unsigned short monthD, unsigned short dayD, unsigned short yearD)
{
	month = monthD;
	day   = dayD;
	year  = yearD;
}

/********************
 ** DECONSTRUCTORS **
 ********************/
Date::~Date()
{

}


/**************
 ** MUTATORS **
 **************/

/*************************************************************************
* void SetDate (unsigned short monthD, unsigned short dayD,
* 				unsigned short yearD);
*
* Mutator; This method will update the date
*-------------------------------------------------------------------------
* Parameter: monthD (unsigned short)
* 				// IN – the accNumer for the new attribute
* 			 dayD	(unsigned short)
* 			 yearD	(unsigned short)
*-------------------------------------------------------------------------
* Return: none
*************************************************************************/
void Date::SetDate(unsigned short monthD, unsigned short dayD,
				   unsigned short yearD)
{
	month = monthD;
	day   = dayD;
	year  = yearD;
}

/***************
 ** ACCESSORS **
 ***************/

/*************************************************************************
* int GetMonth () const;
*
* Accessor; This method will return the month
* ------------------------------------------------------------------------
* Parameters:  NONE
* ------------------------------------------------------------------------
* Return: oss.str() (ostringstream)
*************************************************************************/
int Date::GetMonth() const
{
	return month;
}


/*************************************************************************
* int GetDay () const;
*
* Accessor; This method will return the day
* ------------------------------------------------------------------------
* Parameters:  NONE
* ------------------------------------------------------------------------
* Return: oss.str() (ostringstream)
*************************************************************************/
int Date::GetDay() const
{
	return day;
}


/*************************************************************************
* int GetYear () const;
*
* Accessor; This method will return the year
* ------------------------------------------------------------------------
* Parameters:  NONE
* ------------------------------------------------------------------------
* Return: oss.str() (ostringstream)
*************************************************************************/
int Date::GetYear() const
{
	return year;
}


/*************************************************************************
* string DisplayDate () const;
*
* Accessor; This method will display the date
* ------------------------------------------------------------------------
* Parameters:  NONE
* ------------------------------------------------------------------------
* Return: oss.str() (ostringstream)
*************************************************************************/
string Date::DisplayDate() const
{
	ostringstream oss;

	oss << setfill('0') << setw(2) << month << "/" <<setfill('0')
		<< setw(2) << day << "/" << year;


	return oss.str();
}



