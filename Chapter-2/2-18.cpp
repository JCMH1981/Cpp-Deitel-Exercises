/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.18:
(Comparing Integers) Write a program that asks the user to enter two integers, 
obtains the numbers from the user, then prints the larger number followed by 
the words "is larger." If the numbers are equal, print the message "These 
numbers are equal."

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/02 */

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	
	if (a > b)
	{
		cout << a << " is larger.\n";
	}
	if (a < b)
	{
		cout << b << " is larger.\n";
	}
	if (a == b)
	{
		cout << "These numbers are equal.\n";
	}
	
	return 0;
}
