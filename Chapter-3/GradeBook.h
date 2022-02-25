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

// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
    explicit GradeBook(std::string, std::string); // constructor initialize 
                                                  // courseName and
                                                  // courseInstructor [Mod.]
    void setCourseName(std::string); // sets the course name
    void setInstructorName(std::string); // sets the instructor's name [New]
    std::string getCourseName() const; // gets the course name
    std::string getInstructorName() const; // gets the instructor's name [New]
    void displayMessage() const; // displays a welcome message [Modified]
private:
    std::string courseName; // course name for this GradeBook
    std::string courseInstructor; // instructor's name for this 
                                  // GradeBook [New]
};
