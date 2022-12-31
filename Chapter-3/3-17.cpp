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

int main()
{
    HealthProfile health_profile("", "", "", 0, 0, 0, 0, 0);
    std::string name1, name2, gender;
    int month, day, year, height, weight;
    
    std::cout << "Enter the first name: ";
    std::cin >> name1;    
    health_profile.setFirstName(name1);

    std::cout << "Enter the last name: ";
    std::cin >> name2;
    health_profile.setLastName(name2);

    std::cout << "Enter the person's gender: ";
    std::cin >> gender;
    health_profile.setPersonGender(gender);

    std::cout << "Enter the birth month: ";
    std::cin >> month;
    health_profile.setBirthMonth(month);

    std::cout << "Enter the birth day: ";
    std::cin >> day;
    health_profile.setBirthDay(day);

    std::cout << "Enter the birth year: ";
    std::cin >> year;
    health_profile.setBirthYear(year);

    std::cout << "Enter the height in inches: ";
    std::cin >> height;
    health_profile.setPersonHeight(height);

    std::cout << "Enter the weight in pounds: ";
    std::cin >> weight;
    health_profile.setPersonWeight(weight);
    
    std::cout << "--------------------------" << std::endl;
    
    std::cout << "Person's names: " << health_profile.getFirstName() 
              << " " << health_profile.getLastName() << std::endl;
    std::cout << "Person's gender: " << health_profile.getPersonGender() 
              << std::endl;
    std::cout << "Date of birth: " << health_profile.getBirthMonth() << "/"
                                   << health_profile.getBirthDay() << "/"
                                   << health_profile.getBirthYear() 
                                   << std::endl;
    std::cout << "The person's age is " << health_profile.getAge() 
              << " years" << std::endl;
    std::cout << "The person's Body Mass Index (BMI) is " 
              << health_profile.getBodyMassIndex() << std::endl;
    std::cout << "The maximum heart rate is " 
              << health_profile.getMaximumHeartRate() 
              << " beats per minute" << std::endl;
    std::cout << "The target heart rate is " 
              << health_profile.getTargetHeartRate() 
              << " beats per minute" << std::endl;

    std::cout << "BMI VALUES" << std::endl
              << "Underweight:\tless than 18.5" << std::endl
              << "Normal:\t\tbetween 18.5 and 24.9" << std::endl
              << "Overweight:\tbetween 25 and 29.9" << std::endl
              << "Obese:\t\t30 or greater" << std::endl;

    return 0;
}