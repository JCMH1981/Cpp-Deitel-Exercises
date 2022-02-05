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

class Employee
{
private:
    std::string first_name;
    std::string last_name;
    int monthly_salary;
public:
    explicit Employee(std::string, std::string, int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMonthlySalary(int);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonthlySalary() const;
};