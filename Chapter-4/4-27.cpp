/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 4.27:
(Printing the Decimal Equivalent of a Binary Number) Input an integer
containing only 0s and 1s (i.e., a "binary" integer) and print its decimal
equivalent. Use the modulus and division operators to pick off the "binary"
number's digits one at a time from right to left. Much as in the decimal
number system, where the rightmost digit has a positional value of 1, the next
digit left has a positional value of 10, then 100, then 1000, and so on, in
the binary number system the rightmost digit has a positional value of 1, the
next digit left has a positional value of 2, then 4, then 8, and so on. Thus
the decimal number 234 can be interpreted as 2 * 100 + 3 * 10 + 4 * 1. The
decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 +
4 + 8, or 13. [Note: To learn more about binary numbers, refer to Appendix D.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-08.
*/

#include <iostream>

using namespace std;

int main()
{
    int binary_number, digit, number, decimal_equivalent = 0;
    int power_of_ten = 1000000000, power_of_two = 1024;

    cout << "Input the binary integer (only 0s and 1s): ";
    cin >> binary_number;
    number = binary_number;

    while ((power_of_ten >= 1) && (power_of_two >= 1))
    {
        digit = number / power_of_ten;
        number = number % power_of_ten;
        power_of_ten = power_of_ten / 10;
        power_of_two = power_of_two / 2;
        decimal_equivalent = decimal_equivalent + digit*power_of_two;
    }

    cout << "The decimal equivalent of binary " << binary_number << " is "
         << decimal_equivalent << "." << endl;

    return 0;
}
