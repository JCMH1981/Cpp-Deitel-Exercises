/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.28:
(Checkerboard Pattern of Asterisks) Write a program that displays the
following checkerboard pattern. Your program must use only three output
statements, one of each of the following forms:

    cout << "* ";
    cout << ' ';
    cout << endl;

    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-02-12.*/

#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 8; i++)
    {
        if ((i % 2) == 0)
        {
            cout << ' ';
        }
        for (j = 1; j <= 8; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
