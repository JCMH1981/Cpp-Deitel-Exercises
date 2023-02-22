/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.22:
// Exercise 4.22: ex04_22.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
   unsigned int row = 10; // initialize row
   
   while ( row >= 1 ) // loop until row < 1
   {
      unsigned int column = 1; // set column to 1 as iteration begins
      
      while ( column <= 10 ) // loop 10 times
      {
         cout << ( row % 2 ? "<" : ">" ); // output
         ++column; // increment column
      } // end inner while
      
      --row; // decrement row
      cout << endl; // begin new output line
   } // end outer while
} // end main

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-02-21.*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int row = 10; //Initialize row
    
    while (row >= 1) //Loop until row < 1
    {
        unsigned int column = 1; //Set column to 1 as iteration begins
        
        while (column <= 10) //Loop 10 times
        {
            cout << ( row % 2 ? "<" : ">" ); //Output
            ++column; //Increment column
        }
        
        --row; //Decrement row
        cout << endl; //Begin new output line
    }
}
