/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 2.20:
(Diameter, Circumference and Area of a Circle) Write a program that reads in 
the radius of a circle as an integer and prints the circle's diameter, 
circumference and area. Use the constant value 3.14159 for π. Do all 
calculations in output statements. [Note: In this chapter, we’ve discussed 
only integer constants and variables. In Chapter 4 we discuss floating-point 
numbers, i.e., values that can have decimal points.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/02 */

#include <iostream>

using namespace std;

int main()
{
	int radius;

	cout << "Enter radius of the circle: ";
	cin >> radius;

	cout << "Diameter of the circle is " << 2*radius << endl; //D = 2r
	cout << "Circumference of the circle is " << 2*3.14159*radius //C = 2πr
	     << endl; 
	cout << "Area of the circle is " << 3.14159*radius*radius //A = πr^2
	     << endl; 

	return 0;
}
