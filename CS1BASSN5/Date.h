/*************************************************************************
 * AUTHOR        : Ryan Martinez
 * STUDENT ID    : 389657
 * Assignment #5 : Saddleback Bank
 * CLASS         : CS1B
 * SECTION       : MWF: 8:00am
 * DUE DATE      : 12/14/15
 ************************************************************************/

#ifndef DATE_H_
#define DATE_H_

#include <ctime>
#include <sstream>

using namespace std;

class Date
{
	public:

	/******************
	 ** CONSTRUCTORS **
	 ******************/
		Date();
		// uses private utility methods
		Date(unsigned short monthD, unsigned short dayD, unsigned short yearD);

	/********************
	 ** DECONSTRUCTORS **
	 ********************/
		virtual ~Date();


	/**************
	 ** MUTATORS **
	 **************/
		// uses private utility methods
		void SetDate(unsigned short monthD, unsigned short dayD,
					 unsigned short yearD);


	/***************
	 ** ACCESSORS **
	 ***************/
		void GetDate(unsigned short &monthD, unsigned short &dayD,
					 unsigned short &yearD) const;



		 int GetMonth() const;  // gets the month
		 int GetDay()   const;  // gets the day
		 int GetYear()  const;  // gets the year

		 string DisplayDate() const;  // Displays in MM/DD/YYYY format

		 // Uses methods above to validate a given date;
		 // Checks against current day uses <ctime> methods
		 bool ValidateDate(unsigned short day,
				 	 	   unsigned short month,
				 	 	   unsigned short year)   const;

	private:

		 unsigned short month;			//Month of transaction
		 unsigned short day;			//Day of transaction
		 unsigned short year;			//Year of transaction

	 /**************
	 ** MUTATORS **
	 **************/
		 unsigned short GetDaysInMonths(unsigned short month,
				 	 	 	 	 	 	unsigned short year);
		 bool IsLeapYear(unsigned short year);
		 // Given year, determines if it is a leap year

	 /***************
	 ** ACCESSORS **
	 ***************/
		 // Validates the month
		 bool ValidateMonth(unsigned short month);

		 // Checks if a day is valid takes leap yar into consideration
		 bool ValidateDay(unsigned short day,
				 	 	  unsigned short month,
				 	 	  unsigned short year);

		 // Validates the year is between 1900 and the current year
		 bool ValidateYear(unsigned short year);




};

#endif /* DATE_H_ */
