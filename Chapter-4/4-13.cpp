/*C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.
   
Solution of exercise 4.13:
(Gas Mileage) Drivers are concerned with the mileage obtained by their 
automobiles. One driver has kept track of several trips by recording miles 
driven and gallons used for each trip. Develop a C++ program that uses a while 
statement to input the miles driven and gallons used for each trip. The 
program should calculate and display the miles per gallon obtained for each 
trip and print the combined miles per gallon obtained for all tankfuls up to 
this point.

    Enter miles driven (-1 to quit): 287
    Enter gallons used: 13
    MPG this trip: 22.076923
    Total MPG: 22.076923
    
    Enter miles driven (-1 to quit): 200
    Enter gallons used: 10
    MPG this trip: 20.000000
    Total MPG: 21.173913
    
    Enter the miles driven (-1 to quit): 120
    Enter gallons used: 5
    MPG this trip: 24.000000
    Total MPG: 21.678571
    
    Enter the miles used (-1 to quit): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-16.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double miles; //Miles driven for each trip
    double gallons; //Gallons used for each trip
    double total_miles = 0; //Miles driven for all trips
    double total_gallons = 0; //Gallons used for all trips

    while (miles != -1)
    {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;

        if (miles != -1)
        {
            cout << "Enter gallons used: ";
            cin >> gallons;
            total_gallons += gallons;
            total_miles += miles;
            cout << setprecision(6) << fixed;
            cout << "MPG this trip: " << miles/gallons << endl;
            cout << "Total MPG: " << total_miles/total_gallons 
                 << endl << endl;
        }
    }
    
    return 0;
}
