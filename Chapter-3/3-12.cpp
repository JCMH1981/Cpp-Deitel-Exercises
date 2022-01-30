/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.12:
(Account Class) Create an Account class that a bank might use to represent 
customers' bank accounts. Include a data member of type int to represent the 
account balance. [Note: In subsequent chapters, we'll use numbers that contain 
decimal points (e.g., 2.75) —called floating-point values— to represent dollar 
amounts.] Provide a constructor that receives an initial balance and uses it 
to initialize the data member. The constructor should validate the initial 
balance to ensure that it's greater than or equal to 0. If not, set the 
balance to 0 and display an error message indicating that the initial balance 
was invalid. Provide three member functions. Member function credit should add 
an amount to the current balance. Member function debit should withdraw money 
from the Account and ensure that the debit amount does not exceed the 
Account's balance. If it does, the balance should be left unchanged and the 
function should print a message indicating "Debit amount exceeded account 
balance." Member function getBalance should return the current balance. Create 
a program that creates two Account objects and tests the member functions of 
class Account.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/29 */

#include <iostream>
#include "Account.h"

int main()
{
    int initial_balance1;
    int initial_balance2;
    int credit_amount1;
    int debit_amount1;
    int credit_amount2;
    int debit_amount2;

    /* Test for the first Account object */
    initial_balance1 = 100000;
    Account bank_account1(initial_balance1);
    std::cout << "The initial balance of the account 1 is " 
              << bank_account1.getBalance() << std::endl;

    credit_amount1 = 50000;
    std::cout << "Credited amount to the account 1: " << credit_amount1
              << std::endl;
    bank_account1.credit(credit_amount1);
    std::cout << "The balance of the account 1 is " 
              << bank_account1.getBalance() << std::endl;

    debit_amount1 = 80000;
    std::cout << "Debited amount from the account 1: " << debit_amount1
              << std::endl;
    bank_account1.debit(debit_amount1);
    std::cout << "The balance of the account 1 is " 
              << bank_account1.getBalance() << std::endl;

    std::cout << "---------------------------------------------" << std::endl;

    /* Test for the second Account object */
    initial_balance2 = -100000;
    Account bank_account2(initial_balance2);
    std::cout << "The initial balance of the account 2 is " 
              << bank_account2.getBalance() << std::endl;

    credit_amount2 = 40000;
    std::cout << "Credited amount to the account 2: " << credit_amount2
              << std::endl;
    bank_account2.credit(credit_amount2);
    std::cout << "The balance of the account 2 is " 
              << bank_account2.getBalance() << std::endl;

    debit_amount2 = 60000;
    std::cout << "Debited amount from the account 2: " << debit_amount2
              << std::endl;
    bank_account2.debit(debit_amount2);
    std::cout << "The balance of the account 2 is " 
              << bank_account2.getBalance() << std::endl;

    return 0;
}