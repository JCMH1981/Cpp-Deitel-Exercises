/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.
Solution of exercise 2.16:
(Arithmetic) Write a program that asks the user to enter two numbers, obtains 
the two numbers from the user and prints the sum, product, difference, and 
quotient of the two numbers.
Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/01 */
#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;

	cout << "Sum is " << a + b << endl;
	cout << "Product is " << a * b << endl;
	cout << "Difference is " << a - b << endl;
	cout << "Quotient is " << a / b << endl;
	
	return 0;
}
