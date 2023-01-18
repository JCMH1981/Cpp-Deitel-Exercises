/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.15:
(Sales Commission Calculator) A large chemical company pays its salespeople on 
a commission basis. The salespeople each receive $200 per week plus 9% of 
their gross sales for that week. For example, a salesperson who sells $5000 
worth of chemicals in a week receives $200 plus 9% of $5000, or a total of 
$650. Develop a C++ program that uses a while statement to input each 
salesperson's gross sales for last week and calculates and displays that 
salesperson's earnings. Process one salesperson's figures at a time.

    Enter sales in dollars (-1 to end): 5000.00
    Salary is: $650.00
    
    Enter sales in dollars (-1 to end): 6000.00
    Salary is: $740.00
    
    Enter sales in dollars (-1 to end): 7000.00
    Salary is: $830.00
    
    Enter sales in dollars (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-18.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double sales; //Salesperson's gross sales for last week
    double earnings; //Salesperson's earnings for last week

    while (sales != -1)
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
        earnings = 200 + sales*0.09;

        if (sales != -1)
        {
            cout << setprecision(2) << fixed;
            cout << "Salary is: $" << earnings << endl << endl;
        }
    }

    return 0;
}
