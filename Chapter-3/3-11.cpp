/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.11:
(Modifying Class GradeBook) Modify class GradeBook (Figs. 3.11–3.12) as follows:
a) Include a second string data member that represents the course instructor's 
   name.
b) Provide a set function to change the instructor's name and a get function to 
   retrieve it.
c) Modify the constructor to specify course name and instructor name parameters.
d) Modify function displayMessage to output the welcome message and course name,
   then the string "This course is presented by: " followed by the instructor's 
   name.

Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/26 */

// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// function main begins program execution
int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", 
                          "Juan Carlos Moreno");
    GradeBook gradeBook2("CS102 Data Structures in C++", "Juan Carlos Moreno");

    // display initial value of courseName and instructorName for each GradeBook
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
} // end main
