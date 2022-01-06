/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.25:
(Multiples) Write a program that reads in two integers and determines and prints 
if the first is a multiple of the second. [Hint: Use the modulus operator.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/05 */

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Enter the integers: ";
	cin >> a >> b;

	if (a > b)
	{
		if ((a % b) == 0)
		{
			cout << a << " is a multiple of " << b << endl;
		}

		if ((a % b) != 0)
		{
			cout << a << " is not a multiple of " << b << endl;
		}
	}
	if (a < b)
	{
		cout << a << " is not a multiple of " << b << endl;
	}
	
	return 0;
}
