#include <iostream>
#include "Date.h"

/***************************************************
Constructor initalizes private member variables to
their "twins" inside main which have been validated

****************************************************/
Date::Date(int day, int month, int year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}

/***************************************************
Will return private member variable m_day


****************************************************/
const int Date::getDay()
{
    return m_day;
}

/***************************************************
Will return private member variable m_month


****************************************************/
const int Date::getMonth()
{
    return m_month;
}

/***************************************************
Will return private member variable m_year


****************************************************/
const int Date::getYear()
{
    return m_year;
}

/***************************************************
Prints the short version of a date: 1/1/01
Will work only for dates greater than 1899 and less
than 2100
****************************************************/
void Date::showShortDate()
{
    std::cout << getMonth() << "/" << getDay() << "/";

    if(makeShortYear() == 0 || makeShortYear() < 10) //in case of year 2000, will add another 0 to display "00"
        std::cout << "0" << makeShortYear() << std::endl;
    else
        std::cout << makeShortYear() << std::endl;
}

/***************************************************
Prints the long version of a date: January 1, 2001


****************************************************/
void Date::showLongDate()
{
    makeMonthName(m_month);
    std::cout << " " << getDay() << ", " << getYear() << std::endl;
}

/***************************************************
Prints the euro version of a date: 1 January 2001


****************************************************/
void Date::showEuroDate()
{
    std::cout << getDay() << " ";
    makeMonthName(m_month);
    std::cout << " " << getYear() << std::endl;
}

/***************************************************
Prints the name of the month based on the value
entered by the user that was validated in main

****************************************************/
void Date::makeMonthName(int monthValue)
{
    switch(monthValue)
    {
    case 1:
        std::cout << "January";
        break;

    case 2:
        std::cout << "February";
        break;

    case 3:
        std::cout << "March";
        break;

    case 4:
        std::cout << "April";
        break;

    case 5:
        std::cout << "May";
        break;

    case 6:
        std::cout << "June";
        break;

    case 7:
        std::cout << "July";
        break;
    case 8:
        std::cout << "August";
        break;

    case 9:
        std::cout << "September";
        break;

    case 10:
        std::cout << "October";
        break;

    case 11:
        std::cout << "November";
        break;

    case 12:
        std::cout << "December";
        break;
    }
}

/***************************************************
Create the two digit version of the year for
the short version of date. Will only work for values
1900-2099
****************************************************/
int Date::makeShortYear()
{
    int shortYearTemp = getYear();

    if(shortYearTemp > 1999)
        return shortYearTemp - 2000;

    else if (shortYearTemp < 2000)
        return shortYearTemp - 1900;
}
