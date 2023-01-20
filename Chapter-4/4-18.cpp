/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 4.18:
(Tabular Output) Write a C++ program that uses a while statement and the tab 
escape sequence \t to print the following table of values:

	N		10*N	    100*N	1000*N

	1		10		100		1000
	2		20		200		2000
	3		30		300		3000
	4		40		400		4000
	5		50		500		5000

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-19. */

#include <iostream>

using namespace std;

int main()
{
	int N = 1;

	cout << "N\t10*N\t100*N\t1000*N" << endl << endl;

	while (N <= 5)
	{
		cout << N << "\t" << N*10 << "\t" << N*100 << "\t" << N*1000 << endl;
		N = N + 1;
	}

	return 0;
}
