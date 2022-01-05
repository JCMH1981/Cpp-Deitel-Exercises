/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.23:
(Largest and Smallest Integers) Write a program that reads in five integers and 
determines and prints the largest and the smallest integers in the group. Use 
only the programming techniques you learned in this chapter.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/04 */

#include <iostream>

using namespace std;

int main(void)
{	
	//The five integers
	int a, b, c, d, e;

	cout << "Enter the five integers: ";
	cin >> a >> b >> c >> d >> e;

	/*a*/
	//Determine if a is the largest integer
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					cout << "The largest integer is " << a << endl;
				}	
			}
		}
	}
	//Determine if a is the smallest integer
	if (a < b)
	{
		if (a < c)
		{
			if (a < d)
			{
				if (a < e)
				{
					cout << "The smallest integer is " << a << endl;
				}	
			}
		}
	}

	/*b*/
	//Determine if b is the largest integer
	if (b > a)
	{
		if (b > c)
		{
			if (b > d)
			{
				if (b > e)
				{
					cout << "The largest integer is " << b << endl;
				}	
			}
		}
	}
	//Determine if b is the smallest integer
	if (b < a)
	{
		if (b < c)
		{
			if (b < d)
			{
				if (b < e)
				{
					cout << "The smallest integer is " << b << endl;
				}	
			}
		}
	}

	/*c*/
	//Determine if c is the largest integer
	if (c > a)
	{
		if (c > b)
		{
			if (c > d)
			{
				if (c > e)
				{
					cout << "The largest integer is " << c << endl;
				}	
			}
		}
	}
	/*Determine if c is the smallest integer*/
	if (c < a)
	{
		if (c < b)
		{
			if (c < d)
			{
				if (c < e)
				{
					cout << "The smallest integer is " << c << endl;
				}	
			}
		}
	}

	/*d*/
	//Determine if d is the largest integer
	if (d > a)
	{
		if (d > b)
		{
			if (d > c)
			{
				if (d > e)
				{
					cout << "The largest integer is " << d << endl;
				}	
			}
		}
	}
	//Determine if d is the smallest integer
	if (d < a)
	{
		if (d < b)
		{
			if (d < c)
			{
				if (d < e)
				{
					cout << "The smallest integer is " << d << endl;
				}	
			}
		}
	}

	/*e*/
	//Determine if e is the largest integer
	if (e > a)
	{
		if (e > b)
		{
			if (e > c)
			{
				if (e > d)
				{
					cout << "The largest integer is " << e << endl;
				}	
			}
		}
	}
	//Determine if e is the smallest integer
	if (e < a)
	{
		if (e < b)
		{
			if (e < c)
			{
				if (e < d)
				{
					cout << "The smallest integer is " << e << endl;
				}	
			}
		}
	}

	return 0;
}
