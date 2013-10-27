//Program Name: C++ Early Objects, Chapter 7, Problem 9, Pg. 479
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>
#include "Date.h"

int getMonthLength(int month, bool isLeapYear);
bool inputValidation(int minInputRange, int maxInputRange, int userInput);
bool getLeapYear(int year);
void printDefaultDates();

/***************************************************
Gathers user input and will display the three
dates upon validation of input

****************************************************/
int main()
{
    bool isLeapYear;

    int day,
        month,
        year,
        maxDays;

    const int MAX_YEAR = 2020,
              MIN_YEAR = 1950,
              MAX_MONTH = 12,
              MIN_MONTH = 1,
              MIN_MONTH_LENGTH = 1,
              MAX_NON_LEAP_MONTH = 28,
              MAX_LEAP_MONTH = 29,
              MAX_SHORT_MONTH = 30,
              MAX_LONG_MONTH = 31;

    std::cout << "Enter the month(Numerical): ";
    std::cin >> month;
    while(inputValidation(MIN_MONTH, MAX_MONTH, month))
    {
        printDefaultDates();
        return 0;

        /*
        //Use this to prompt for a correct value until a valid argument is passed
        //Remove the former statements
        std::cout << "Min/Max values are: " << MIN_MONTH << "/" << MAX_MONTH
                  << std::endl << "Enter a value: ";
        std::cin >> month;
        */
    }


    std::cout << "Enter the year: ";
    std::cin >> year;
    while(inputValidation(MIN_YEAR, MAX_YEAR, year))
    {
        printDefaultDates();
        return 0;

        /*
        //Use this to prompt for a correct value until a valid argument is passed
        //Remove the former statements
        std::cout << "Min/Max values are: " << MIN_YEAR << "/" << MAX_YEAR
                  << std::endl << "Enter a value: ";
        std::cin >> year;
        */
    }

    isLeapYear = getLeapYear(year);
    maxDays = getMonthLength(month, isLeapYear);

    std::cout << "Enter the day: ";
    std::cin >> day;

    if(maxDays == 28)
        while(inputValidation(MIN_MONTH_LENGTH, MAX_NON_LEAP_MONTH, day))
        {
            printDefaultDates();
            return 0;

            /*
            //Use this to prompt for a correct value until a valid argument is passed
            //Remove the former statements
            std::cout << "Min/Max values are: " << MIN_MONTH_LENGTH << "/" << MAX_NON_LEAP_MONTH
                      << std::endl << "Enter a value: ";
            std::cin >> day;
            */
        }

    else if(maxDays == 29)
        while(inputValidation(MIN_MONTH_LENGTH, MAX_LEAP_MONTH, day))
        {
            printDefaultDates();
            return 0;

            /*
            //Use this to prompt for a correct value until a valid argument is passed
            //Remove the former statements
            std::cout << "Min/Max values are: " << MIN_MONTH_LENGTH << "/" << MAX_LEAP_MONTH
                      << std::endl << "Enter a value: ";
            std::cin >> day;
            */
        }

    else if(maxDays == 30)
        while(inputValidation(MIN_MONTH_LENGTH, MAX_SHORT_MONTH, day))
        {
            printDefaultDates();
            return 0;

            /*
            //Use this to prompt for a correct value until a valid argument is passed
            //Remove the former statements
            std::cout << "Min/Max values are: " << MIN_MONTH_LENGTH << "/" << MAX_SHORT_MONTH
                      << std::endl << "Enter a value: ";
            std::cin >> day;
            */
        }

    else if(maxDays == 31)
        while(inputValidation(MIN_MONTH_LENGTH, MAX_LONG_MONTH, day))
        {
            printDefaultDates();
            return 0;

            /*
            //Use this to prompt for a correct value until a valid argument is passed
            //Remove the former statements
            std::cout << "Min/Max values are: " << MIN_MONTH_LENGTH << "/" << MAX_LONG_MONTH
                      << std::endl << "Enter a value: ";
            std::cin >> day;
            */
        }

    Date myDate(day, month, year); //creates myDate object

    myDate.showShortDate(); //print short date
    myDate.showLongDate(); //print long date
    myDate.showEuroDate(); //print euro date

    return 0;
}

/***************************************************
Will return the max amount of days for a month


****************************************************/
int getMonthLength(int month, bool isLeapYear)
{
    enum monthNameList { January = 1, February, March, April, May, June, July, August, September, October, November, December };

    if(month == April || month == June || month == September || month == November)
        return 30;

    else if(month == February)
    {
        if(!isLeapYear)
            return 28;
        else
            return 29;
    }

    else if(month == January || month == March || month == May || month == July || month == August || month == September || month == October || month == December)
        return 31;
}

/***************************************************
Validates the user's input based on the min/max
arguments sent by the function call

****************************************************/
bool inputValidation(int minInputRange, int maxInputRange, int userInput)
{
    if(userInput > maxInputRange || userInput < minInputRange)
        return true;
    else
        return false;
}

/***************************************************
Will return true if it is a leap year and false
if it is not a leap year

****************************************************/
bool getLeapYear(int year)
{
    bool isLeapYear = false;

    if((year % 4) == 0)
    {
        if((year % 100) != 0)
            return isLeapYear = true;
        else if(((year % 100) == 0) && ((year % 400) == 0))
            return isLeapYear = true;
        else if (((year % 100) == 0) && ((year % 400) != 0))
            return isLeapYear;
    }

    else
        return isLeapYear;
}

/***************************************************
Will print the default values for the dates in case
of invalid values passed by the user

****************************************************/
void printDefaultDates()
{
    std::cout << "User input was invalid, will now use default values." << std::endl;

    Date myDate;

    myDate.showShortDate();
    myDate.showLongDate();
    myDate.showEuroDate();
}
