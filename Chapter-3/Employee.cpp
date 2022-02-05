/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.14:
(Employee Class) Create a class called Employee that includes three pieces of 
information as data members —a first name (type string), a last name (type 
string) and a monthly salary (type int). [Note: In subsequent chapters, we'll 
use numbers that contain decimal points (e.g., 2.75) —called floating-point 
values—to represent dollar amounts.] Your class should have a constructor that
initializes the three data members. Provide a set and a get function for each 
data member. If the monthly salary is not positive, set it to 0. Write a test 
program that demonstrates class Employee's capabilities. Create two Employee 
objects and display each object's yearly salary. Then give each Employee a 10 
percent raise and display each Employee’s yearly salary again.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/02/04 */

#include <iostream>
#include "Employee.h"

Employee::Employee(std::string name1, std::string name2, int salary)
    : first_name(name1), last_name(name2), monthly_salary(salary) 
{
    if (salary < 0)
    {
        monthly_salary = 0;
    }
}

void Employee::setFirstName(std::string name)
{
    first_name = name;
}

void Employee::setLastName(std::string name)
{
    last_name = name;
}

void Employee::setMonthlySalary(int salary)
{
    monthly_salary = salary;
}

std::string Employee::getFirstName() const
{
    return first_name;
}

std::string Employee::getLastName() const
{
    return last_name;
}

int Employee::getMonthlySalary() const
{
    return monthly_salary;
}
