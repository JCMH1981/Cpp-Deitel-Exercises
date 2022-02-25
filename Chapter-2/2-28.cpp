/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.28:
(Digits of an Integer) Write a program that inputs a five-digit integer, 
separates the integer into its digits and prints them separated by three 
spaces each. [Hint: Use the integer division and modulus operators.] For 
example, if the user types in 42339, the program should print:

	4   2   3   3   9

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/07 */

#include <iostream>

using namespace std;

int main()
{
	//The five-digit integer
	int number;

	//The five digits of the number
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;
	int fifth_digit;

	//The remainders
	int first_remainder;
	int second_remainder;
	int third_remainder;
	int fourth_remainder;

	cout << "Enter the number of five digits: ";
	cin >> number;

	first_digit = number/10000;
	first_remainder = number%10000;

	second_digit = first_remainder/1000;
	second_remainder = first_remainder%1000;

	third_digit = second_remainder/100;
	third_remainder = second_remainder%100;

	fourth_digit = third_remainder/10;
	fourth_remainder = third_remainder%10;

	//The fourth remainder is the fifth digit
	fifth_digit = fourth_remainder;

	//Print the digits separated by three spaces each
	cout << first_digit << "   " << second_digit << "   " 
		 << third_digit << "   " << fourth_digit << "   "
		 << fifth_digit << endl;

	return 0;
}