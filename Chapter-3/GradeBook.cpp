/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

Solution of exercise 3.11:
(Modifying Class GradeBook) Modify class GradeBook (Figs. 3.11–3.12) as 
follows:
a) Include a second string data member that represents the course instructor's 
   name.
b) Provide a set function to change the instructor's name and a get function 
   to retrieve it.
c) Modify the constructor to specify course name and instructor name 
   parameters.
d) Modify function displayMessage to output the welcome message and course 
   name, then the string "This course is presented by: " followed by the 
   instructor's name.

Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022/01/26 */

// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// constructor initializes courseName with string supplied as argument 
// [Modified]
GradeBook::GradeBook(string name1, string name2)
    : courseName(name1), // member initializer to initialize courseName
      courseInstructor(name2) // member initializer to initialize 
                              // courseInstructor [New]
{
    // empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
    courseName = name; // store the course name in the object
} // end function setCourseName

// function to set the instructor's name [New]
void GradeBook::setInstructorName(string name)
{
    courseInstructor = name; // store the instructor's name in the object
} // end function setInstructorName

// function to get the course name
string GradeBook::getCourseName() const
{
    return courseName; // return object's courseName
} // end function getCourseName

// function to get the instructor's name [New]
string GradeBook::getInstructorName() const
{
    return courseInstructor; // return object's courseInstructor
} // end function getInsructorName

// display a welcome message to the GradeBook user [Modified]
void GradeBook::displayMessage() const
{
    // call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    // call getInstructorName to get the instructorName [New]
    cout << "This course is presented by: " << getInstructorName() << endl;
} // end function displayMessage