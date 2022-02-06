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

class Date
{
private:
    int month;
    int day;
    int year;
public:
    explicit Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void displayDate() const;
};
