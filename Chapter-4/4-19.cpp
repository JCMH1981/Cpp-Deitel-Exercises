/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.19: 
(Find the Two Largest Numbers) Using an approach similar to Exercise 4-17, 
find the two largest values among the 10 numbers. [Note: You must input each 
number only once.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-20.*/

#include <iostream>

using namespace std;

int main()
{
    int counter; //A counter to count to 10
    int number; //The current number input to the program
    int first_largest = 0; //The first largest number found so far
    int second_largest = 0; //The second largest number found so far

    cout << "Input the series of 10 numbers: ";
    counter = 1;
    
    while (counter <= 10)
    {
        cin >> number;
        
        if (number > first_largest)
        {
            second_largest = first_largest;
            first_largest = number;
        }
        else if (number > second_largest)
        {
            second_largest = number;
        }

        counter = counter + 1;        
    }

    cout << "The two largest numbers are " 
         << second_largest << " and " << first_largest << "." << endl; 
    
    return 0;
}
