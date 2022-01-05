/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.24:
(Odd or Even) Write a program that reads an integer and determines and prints 
whether it’s odd or even. [Hint: Use the modulus operator. An even number is a 
multiple of two. Any multiple of two leaves a remainder of zero when divided 
by 2.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/04 */

#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	if ((number % 2) == 0)
	{
		cout << number << " is even.\n";
	}
	if ((number % 2) != 0)
	{
		cout << number << " is odd.\n";
	}

	return 0;
}
