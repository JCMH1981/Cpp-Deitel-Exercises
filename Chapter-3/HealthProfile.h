/* C++ How to Program, 9/E, by Paul Deitel & Harvey Deitel.

(Computerization of Health Records) A health care issue that has been in the 
news lately is the computerization of health records. This possibility is 
being approached cautiously because of sensitive privacy and security 
concerns, among others. [We address such concerns in later exercises.] 
Computerizing health records could make it easier for patients to share their 
health profiles and histories among their various health care professionals. 
This could improve the quality of health care, help avoid drug conflicts and 
erroneous drug prescriptions, reduce costs and in emergencies, could save 
lives. In this exercise, you’ll design a "starter" HealthProfile class for a 
person. The class attributes should include the person’s first name, last 
name, gender, date of birth (consisting of separate attributes for the month, 
day and year of birth), height (in inches) and weight (in pounds). Your class
should have a constructor that receives this data. For each attribute, provide 
set and get functions. The class also should include functions that calculate 
and return the user's age in years, maximum heart rate and target-heart-rate 
range (see Exercise 3.16), and body mass index (BMI; see Exercise 2.30). Write 
an application that prompts for the person’s information, instantiates an 
object of class HealthProfile for that person and prints the information from 
that object—including the person’s first name, last name, gender, date of 
birth, height and weight—then calculates and prints the person’s age in years, 
BMI, maximum heart rate and target-heart-rate range. It should also display 
the “BMI values” chart from Exercise 2.30. Use the same technique as Exercise 
3.16 to calculate the person's age.
 
Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 202x-xx-xx */

class HealthProfile
{
private:
    std::string first_name;
    std::string last_name;
    std::string person_gender;
    int birth_month;
    int birth_day;
    int birth_year;
    double person_height;
    double person_weight;
public:
    explicit HealthProfile(std::string, std::string, std::string, 
                           int, int, int, double, double);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setPersonGender(std::string);
    void setBirthMonth(int);
    void setBirthDay(int);
    void setBirthYear(int);
    void setPersonHeight(double);
    void setPersonWeight(double);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getPersonGender() const;
    int getBirthMonth() const;
    int getBirthDay() const;
    int getBirthYear() const;
    int getPersonHeight() const;
    int getPersonWeight() const;
    double getAge() const;
    double getMaximumHeartRate() const;
    double getTargetHeartRate() const;
    double getBodyMassIndex() const;
};
