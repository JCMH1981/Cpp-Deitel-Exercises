/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.25:
(Square of Asterisks) Write a program that reads in the size of the side of
a square then prints a hollow square of that size out of asterisks and blanks.
Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 5, it should print

    *****
    *   *
    *   *
    *   *
    *****

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-06. */

#include <iostream>

using namespace std;

int main()
{
    int number_of_asterisks;
    int i; //Counter of the rows
    int j; //Counter of the columns

    cout << "Enter the number of asterisks: ";
    cin >> number_of_asterisks;

    //The number of asterisks must be greater than 0
    if (number_of_asterisks > 0)
    {
        //The number of asterisks must be smaller than 21
        if (number_of_asterisks < 21)
        {
            cout << "The square is:\n";

            //Print the first row
            j = 1;
            while (j <= number_of_asterisks)
            {
                //Print the asterisk character
                cout << '*';
                j++;
            }
            cout << endl;

            //Print from the second row to next-to-last row
            i = 2;
            while (i <= number_of_asterisks - 1)
            {
                //Print the asterisk of the first column
                cout << '*';
                //Print the row with the whitespace characters
                j = 2;
                while (j <= number_of_asterisks - 1)
                {
                    cout << " ";
                    j++;
                }
                //Print the asterisk of the last column
                cout << '*';
                //A new row begins
                cout << endl;
                i++;
            }

            //Print the last row
            j = 1;
            while (j <= number_of_asterisks)
            {
                //Print the asterisk character
                cout << '*';
                j++;
            }
            printf("\n");
        }
        else
        {
            cout << "The number of asterisks must be greater than 0"
                 << " and smaller than 21.\n";
        }
    }
    else
    {
        cout << "The number of asterisks must be greater than 0"
             << " and smaller than 21.\n";
    }

    return 0;
}
