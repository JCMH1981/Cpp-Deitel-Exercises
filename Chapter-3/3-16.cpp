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

int main()
{
    HeartRates heart_rates(" ", " ", 0, 0, 0);
    std::string name1;
    std::string name2;
    int month;
    int day;
    int year;
	
    std::cout << "Enter the first name: ";
    std::cin >> name1;    
    heart_rates.setFirstName(name1);

    std::cout << "Enter the last name: ";
    std::cin >> name2;
    heart_rates.setLastName(name2);

    std::cout << "Enter the birth month: ";
    std::cin >> month;
    heart_rates.setBirthMonth(month);

    std::cout << "Enter the birth day: ";
    std::cin >> day;
    heart_rates.setBirthDay(day);

    std::cout << "Enter the birth year: ";
    std::cin >> year;
    heart_rates.setBirthYear(year);
    
    std::cout << "--------------------------" << std::endl;
    
    std::cout << "First name: " << heart_rates.getFirstName() << std::endl;
    std::cout << "Last name: " << heart_rates.getLastName() << std::endl;
    std::cout << "Date of birth: " << heart_rates.getBirthMonth() << "/"
                                   << heart_rates.getBirthDay() << "/"
                                   << heart_rates.getBirthYear() << std::endl;

    std::cout << "The person's age is " << heart_rates.getAge() << " years\n";

    std::cout << "The maximum heart rate is " 
              << heart_rates.getMaximumHeartRate() << " beats per minute\n";
              
    std::cout << "The target heart rate is " 
              << heart_rates.getTargetHeartRate() << " beats per minute\n";

    return 0;
}
