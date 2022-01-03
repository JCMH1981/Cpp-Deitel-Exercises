/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.
Solution of exercise 2.19:
(Arithmetic, Smallest and Largest) Write a program that inputs three integers 
from the keyboard and prints the sum, average, product, smallest and largest of 
these numbers. The screen dialog should appear as follows:

	Input three different integers: 13 27 14
	Sum is 54
	Average is 18
	Product is 4914
	Smallest is 13
	Largest is 27

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/02 */
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Input three different integers: ";
	cin >> a >> b >> c;
	
	cout << "Sum is " << a + b + c << endl; 
	cout << "Average is " << (a + b + c)/3 << endl;
	cout << "Product is " << a*b*c << endl;
	
	/*Print the smallest integer*/
	if (a < b)
	{
		if (a < c)
		{
			cout << "Smallest is " << a << endl;
		}
	}
	if (b < a)
	{
		if (b < c)
		{
			cout << "Smallest is " << b << endl;
		}
	}
	if (c < a)
	{
		if (c < b)
		{
			cout << "Smallest is " << c << endl;
		}
	}
	
	/*Print the largest integer*/
	if (a > b)
	{
		if (a > c)
		{
			cout << "Largest is " << a << endl;
		}
	}
	if (b > a)
	{
		if (b > c)
		{
			cout << "Largest is " << b << endl;
		}
	}
	if (c > a)
	{
		if (c > b)
		{
			cout << "Largest is " << c << endl;
		}
	}
}
