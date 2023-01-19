/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.16:
(Salary Calculator) Develop a C++ program that uses a while statement to 
determine the gross pay for each of several employees. The company pays 
"straight time" for the first 40 hours worked by each employee and pays 
"time-and-a-half" for all hours worked in excess of 40 hours. You are given a 
list of the employees of the company, the number of hours each employee worked
last week and the hourly rate of each employee. Your program should input this 
information for each employee and should determine and display the employee's 
gross pay.

    Enter hours worked (-1 to end): 39
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $390.00

    Enter hours worked (-1 to end): 40
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $400.00

    Enter hours worked (-1 to end): 41
    Enter hourly rate of the employee ($00.00): 10.00
    Salary is $415.00

    Enter hours worked (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-22.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hours; //Number of hours worked
    double rate; //Hourly rate of the worker
    double salary; //Employee's gross pay

    while (hours != -1)
    {
        cout << "Enter # of hours worked (-1 to end): ";
        cin >> hours;

        if (hours != -1)
        {
            cout << "Enter hourly rate of the employee ($00.00): ";
            cin >> rate;
            
            //The company pays "straight time"
            if (hours <= 40)
            {
                salary = hours*rate;
            }
            //The company pays "time-and-a-half"
            else if (hours > 40)
            {
                salary = 40*rate + 1.5*(hours - 40)*rate;
            }
            cout << setprecision(2) << fixed;
            cout << "Salary is $" << salary << endl << endl;           
        }        
    }

    return 0;
}
