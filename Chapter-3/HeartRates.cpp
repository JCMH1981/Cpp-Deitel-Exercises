/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

(Target-Heart-Rate Calculator) While exercising, you can use a heart-rate 
monitor to see that your heart rate stays within a safe range suggested by 
your trainers and doctors. According to the American Heart Association (AHA) 
(www.americanheart.org/presenter.jhtml?identifier=4736), the formula for 
calculating your maximum heart rate in beats per minute is 220 minus your age 
in years. Your target heart rate is a range that is 50–85% of your maximum 
heart rate. [Note: These formulas are estimates provided by the AHA. Maximum 
and target heart rates may vary based on the health, fitness and gender of the 
individual. Always consult a physician or qualified health care professional 
before beginning or modifying an exercise program.] Create a class called 
HeartRates. The class attributes should include the person's first name, last 
name and date of birth (consisting of separate attributes for the month, day 
and year of birth). Your class should have a constructor that receives this 
data as parameters. For each attribute provide set and get functions. The 
class also should include a function getAge that calculates and returns the 
person's age (in years), a function getMaxiumumHeartRate that calculates and 
returns the person’s maximum heart rate and a function getTargetHeartRate that 
calculates and returns the person’s target heart rate. Since you do not yet 
know how to obtain the current date from the computer, function getAge should 
prompt the user to enter the current month, day and year before calculating 
the person’s age. Write an application that prompts for the person's 
information, instantiates an object of class HeartRates and prints the 
information from that object—including the person's first name, last name and 
date of birth—then calculates and prints the person’s age in (years), maximum 
heart rate and target-heart-rate range. 

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-10-19 */

#include <iostream>
#include <string>
#include "HeartRates.h"

HeartRates::HeartRates(std::string name1, std::string name2, int month, 
                       int day, int year)
    : first_name(name1),
      last_name(name2),
      birth_month(month),
      birth_day(day),
      birth_year(year)
{
}

void HeartRates::setFirstName(std::string name1)
{
    first_name = name1;
}

void HeartRates::setLastName(std::string name2)
{
    last_name = name2;
}

void HeartRates::setBirthMonth(int month)
{
    birth_month = month;
}

void HeartRates::setBirthDay(int day)
{
    birth_day = day;
}

void HeartRates::setBirthYear(int year)
{
    birth_year = year;
}

std::string HeartRates::getFirstName() const
{
    return first_name;
}

std::string HeartRates::getLastName() const
{
    return last_name;
}

int HeartRates::getBirthMonth() const
{
    return birth_month;
}

int HeartRates::getBirthDay() const
{
    return birth_day;
}

int HeartRates::getBirthYear() const
{
    return birth_year;
}

double HeartRates::getAge() const
{ 
    //FIXME!
    return (2022 + 10.0/12 + 19.0/365) - 
		(double(birth_year) + double(birth_month)/12 + double(birth_day)/365);
}

double HeartRates::getMaximumHeartRate() const
{
    return 220 - getAge();
}

double HeartRates::getTargetHeartRate() const
{
    return 0.85*getMaximumHeartRate();
}
