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

int main()
{
    Employee employee1("John", "Smith", 2000000);
    Employee employee2("Peter", "Williams", 1500000);

    int yearly_salary1 = 12*employee1.getMonthlySalary();
    int yearly_salary2 = 12*employee2.getMonthlySalary();
    
    int new_yearly_salary1 = 12*1.1*employee1.getMonthlySalary();
    int new_yearly_salary2 = 12*1.1*employee2.getMonthlySalary();

    std::cout << "Yearly salary of " << employee1.getFirstName()
              << " " << employee1.getLastName() << ": " 
              << yearly_salary1 << "." << std::endl;

    std::cout << "Yearly salary of " << employee2.getFirstName()
              << " " << employee2.getLastName() << ": " 
              << yearly_salary2 << "." << std::endl;

    std::cout << "----------------------------------------------------------"
              << std::endl;

    std::cout << "Yearly salary after each employee gets a 10 percent raise:"
              << std::endl;

    std::cout << "----------------------------------------------------------"
              << std::endl;

    std::cout << "New yearly salary of " << employee1.getFirstName()
              << " " << employee1.getLastName() << ": " 
              << new_yearly_salary1 << "." << std::endl;

    std::cout << "New yearly salary of " << employee2.getFirstName()
              << " " << employee2.getLastName() << ": " 
              << new_yearly_salary2 << "." << std::endl;

    return 0;
}