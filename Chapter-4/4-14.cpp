/*C++ How to Program, 9/E, Deitel & Deitel.
   
Solution of exercise 4.14:
(Credit Limits) Develop a C++ program that will determine whether a 
department-store customer has exceeded the credit limit on a charge account. 
For each customer, the following facts are available:
    a) Account number (an integer)
    b) Balance at the beginning of the month
    c) Total of all items charged by this customer this month
    d) Total of all credits applied to this customer's account this month
    e) Allowed credit limit
The program should use a while statement to input each of these facts, 
calculate the new balance (= beginning balance + charges – credits) and 
determine whether the new balance exceeds the customer's credit limit. For 
those customers whose credit limit is exceeded, the program should display the 
customer's account number, credit limit, new balance and the message "Credit 
Limit Exceeded." 

    Enter account number (or -1 to quit): 100
    Enter beginning balance: 5394.78
    Enter total charges: 1000.00
    Enter total credits: 500.00
    Enter credit limit: 5500.00
    New balance is 5894.78
    Account:      100
    Credit limit: 5500.00
    Balance:      5894.78
    Credit Limit Exceeded.

    Enter account number (or -1 to quit): 200
    Enter beginning balance: 1000.00
    Enter total charges: 123.45
    Enter total credits: 321.00
    Enter credit limit: 1500.00
    New balance is 802.45

    Enter account number (or -1 to quit): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-17.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int account_number; //Account number
    float beginning_balance; //Balance at the beginning of the month
    float charges; //Total of items charged by this customer this month
    float credits; //Total of credits applied to this customer this month
    float credit_limit; //Allowed credit limit
    float new_balance; //New balance

    while (account_number != -1)
    {
        cout << "Enter account number (or -1 to quit): ";
        cin >> account_number;

        if (account_number != -1)
        {
            cout << "Enter beginning balance: ";
            cin >> beginning_balance;
            cout << "Enter total charges: ";
            cin >> charges;
            cout << "Enter total credits: ";
            cin >> credits;
            cout << "Enter credit limit: ";
            cin >> credit_limit;
            
            new_balance = beginning_balance + charges - credits;
            
            cout << setprecision(2) << fixed;
            cout << "New balance is " << new_balance << endl;

            if (new_balance > credit_limit)
            {
                cout << "Account:\t" << account_number << endl;
                cout << "Credit limit:\t" << credit_limit << endl;
                cout << "Balance:\t" << new_balance << endl;
                cout << "Credit Limit Exceeded." << endl;
            }

            cout << endl;
        }
    }

    return 0;
}
