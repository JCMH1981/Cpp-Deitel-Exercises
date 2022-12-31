/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

(Computerization of Health Records) A health care issue that has been in the 
news lately is the computerization of health records. This possibility is 
being approached cautiously because of sensitive privacy and security 
concerns, among others. [We address such concerns in later exercises.] 
Computerizing health records could make it easier for patients to share their 
health profiles and histories among their various health care professionals. 
This could improve the quality of health care, help avoid drug conflicts and 
erroneous drug prescriptions, reduce costs and in emergencies, could save 
lives. In this exercise, you’ll design a "starter" HealthProfile class for a 
person. The class attributes should include the person’s first name, last 
name, gender, date of birth (consisting of separate attributes for the month, 
day and year of birth), height (in inches) and weight (in pounds). Your class
should have a constructor that receives this data. For each attribute, provide 
set and get functions. The class also should include functions that calculate 
and return the user's age in years, maximum heart rate and target-heart-rate 
range (see Exercise 3.16), and body mass index (BMI; see Exercise 2.30). Write 
an application that prompts for the person’s information, instantiates an 
object of class HealthProfile for that person and prints the information from 
that object—including the person’s first name, last name, gender, date of 
birth, height and weight—then calculates and prints the person’s age in years, 
BMI, maximum heart rate and target-heart-rate range. It should also display 
the “BMI values” chart from Exercise 2.30. Use the same technique as Exercise 
3.16 to calculate the person's age.
 
Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-30 */

#include <iostream>
#include <string>
#include "HealthProfile.h"

HealthProfile::HealthProfile(std::string name1, std::string name2, 
                             std::string gender, int month, int day, int year, 
                             double height, double weight)
    : first_name(name1),
      last_name(name2),
      person_gender(gender),
      birth_month(month),
      birth_day(day),
      birth_year(year),
      person_height(height),
      person_weight(weight)
{
}

void HealthProfile::setFirstName(std::string name1)
{
    first_name = name1;
}

void HealthProfile::setLastName(std::string name2)
{
    last_name = name2;
}

void HealthProfile::setPersonGender(std::string gender)
{
    person_gender = gender;
}

void HealthProfile::setBirthMonth(int month)
{
    birth_month = month;
}

void HealthProfile::setBirthDay(int day)
{
    birth_day = day;
}

void HealthProfile::setBirthYear(int year)
{
    birth_year = year;
}

void HealthProfile::setPersonHeight(double height)
{
    person_height = height;
}

void HealthProfile::setPersonWeight(double weight)
{
    person_weight = weight;
}

std::string HealthProfile::getFirstName() const
{
    return first_name;
}

std::string HealthProfile::getLastName() const
{
    return last_name;
}

std::string HealthProfile::getPersonGender() const
{
    return person_gender;
}

int HealthProfile::getBirthMonth() const
{
    return birth_month;
}

int HealthProfile::getBirthDay() const
{
    return birth_day;
}

int HealthProfile::getBirthYear() const
{
    return birth_year;
}

int HealthProfile::getPersonHeight() const
{
    return person_height;
}

int HealthProfile::getPersonWeight() const
{
    return person_weight;
}

double HealthProfile::getAge() const
{ 
    //FIXME!
    return (2022 + 10.0/12 + 19.0/365) - 
        (double(birth_year) + double(birth_month)/12 + double(birth_day)/365);
}

double HealthProfile::getMaximumHeartRate() const
{
    return 220 - getAge();
}

double HealthProfile::getTargetHeartRate() const
{
    return 0.85*getMaximumHeartRate();
}

double HealthProfile::getBodyMassIndex() const
{
    return (person_weight*703)/(person_height*person_height);
}
