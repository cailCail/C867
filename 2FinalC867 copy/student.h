//
//  student.h
//  FinalC867
//
//  Created by Sonya Cail on 12/27/21.
//

#ifndef student_h
#define student_h
# include "degree.h"


class Student
{
public:
    const static int daysInCourse = 3;
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int days[daysInCourse];
    degreetype DegreeType;
public:
    Student (); /*parameterless constructor- sets default values*/
    Student (string studentID, string firstname, string lastname, string email, int age, int days[], DegreeType degreetype);
    ~Student();/*destructor*/
    
    /*getters or accessors*/
    string getID();
    string getFirstname();
    string getLastname ();
    string getEmail();
    int getAge();
    int * getDays();
    degreeType getDegreeType();
    
    /*setters or mutators*/
    void setID(string ID);
    void setFirstname(string firstName);
    void setLastname(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDays(int days[]);
    void setDegreeType(degreeType dt);
    
    static void printHeader(); /* display header*/
    void print (); /* display student data*/
    
};
#endif /* student_h */
