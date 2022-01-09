/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.29:

(Table) Using the techniques of this chapter, write a program that calculates 
the squares and cubes of the integers from 0 to 10. Use tabs to print the 
following neatly formatted table of values:

    number  square  cube
    0       0       0
    1       1       1
    2       4       8
    3       9       27
    4       16      64
    5       25      125
    6       36      216
    7       49      343
    8       64      512
    9       81      729
    10      100     1000

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/08 */

#include <iostream>

using namespace std;

int main()
{
    // Integers from 0 to 10
    int zero = 0;
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;
    int five = 5;
    int six = 6;
    int seven = 7;
    int eight = 8;
    int nine = 9;
    int ten = 10;

    cout << "number\tsquare\tcube" << endl;
    cout << zero << "\t" << zero*zero << "\t" << zero*zero*zero << endl;
    cout << one << "\t" << one*one << "\t" << one*one*one << endl;
    cout << two << "\t" << two*two << "\t" << two*two*two << endl;
    cout << three << "\t" << three*three << "\t" << three*three*three << endl;
    cout << four << "\t" << four*four << "\t" << four*four*four << endl;
    cout << five << "\t" << five*five << "\t" << five*five*five << endl;
    cout << six << "\t" << six*six << "\t" << six*six*six << endl;
    cout << seven << "\t" << seven*seven << "\t" << seven*seven*seven << endl;
    cout << eight << "\t" << eight*eight << "\t" << eight*eight*eight << endl;
    cout << nine << "\t" << nine*nine << "\t" << nine*nine*nine << endl;
    cout << ten << "\t" << ten*ten << "\t" << ten*ten*ten << endl;

    return 0;
}