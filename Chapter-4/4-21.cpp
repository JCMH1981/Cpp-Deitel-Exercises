/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.21:
// Exercise 4.21: ex04_21.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
   unsigned int count = 1; // initialize count

   while ( count <= 10 ) // loop 10 times
   {
      // output line of text
      cout << ( count % 2 ? "****" : "++++++++" ) << endl;
      ++count; // increment count
   } // end while
} // end main

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-02-21.*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int count = 1; //Initialize count

    while ( count <= 10 ) //Loop 10 times
    {
        //Output line of text
        cout << (count % 2 ? "****" : "++++++++") << endl;
        ++count; //Increment count
    }
}
