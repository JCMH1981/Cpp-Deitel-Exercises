/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.15:
(Date Class) Create a class called Date that includes three pieces of 
information as data members —a month (type int), a day (type int) and a year 
(type int). Your class should have a constructor with three parameters that 
uses the parameters to initialize the three data members. For the purpose of 
this exercise, assume that the values provided for the year and day are 
correct, but ensure that the month value is in the range 1–12; if it isn't, 
set the month to 1. Provide a set and a get function for each data member. 
Provide a member function displayDate that displays the month, day and year 
separated by forward slashes (/). Write a test program that demonstrates class 
Date's capabilities.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/02/05 */

#include <iostream>
#include "Date.h"

int main()
{
    /* First date */
    Date date1(0, 0, 0);

    int month1 = 2;
    int day1 = 5;
    int year1 = 2022;

    std::cout << "--------------" << std::endl;
    std::cout << "Month: " << month1 << std::endl;
    std::cout << "Day: " << day1 << std::endl;
    std::cout << "Year: " << year1 << std::endl;

    date1.setMonth(month1);
    date1.setDay(day1);
    date1.setYear(year1);

    std::cout << "Date: ";
    date1.displayDate();

    /* Second date */
    Date date2(0, 0, 0);

    int month2 = 13;
    int day2 = 7;
    int year2 = 2023;

    std::cout << "--------------" << std::endl;
    std::cout << "Month: " << month2 << std::endl;
    std::cout << "Day: " << day2 << std::endl;
    std::cout << "Year: " << year2 << std::endl;

    date2.setMonth(month2);
    date2.setDay(day2);
    date2.setYear(year2);

    std::cout << "Date: ";
    date2.displayDate();

    std::cout << "--------------" << std::endl;

    return 0;
}
