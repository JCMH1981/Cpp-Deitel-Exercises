/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.17: 
(Find the Largest) The process of finding the largest number (i.e., the 
maximum of a group of numbers) is used frequently in computer applications. 
For example, a program that determines the winner of a sales contest inputs 
the number of units sold by each salesperson. The salesperson who sells the 
most units wins the contest. Write a C++ program that uses a while statement 
to determine and print the largest number of 10 numbers input by the user. 
Your program should use three variables, as follows:

    counter:    A counter to count to 10 (i.e., to keep track of how many 
                numbers have been input and to determine when all 10 numbers 
                have been processed)
    number:     The current number input to the program
    largest:    The largest number found so far

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-19.*/

#include <iostream>

using namespace std;

int main()
{
    int counter; //A counter to count to 10
    int number; //The current number input to the program
    int largest = 0; //The largest number found so far

    cout << "Input the series of 10 numbers: ";
    counter = 1;
    
    while (counter <= 10)
    {
        cin >> number;
        
        if (number > largest)
        {
            largest = number;
        }
        
        counter = counter + 1;        
    }

    cout << "The largest number is " << largest << "." << endl;

    return 0;
}
