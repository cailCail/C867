//
//  student.cpp
//  FinalC867
//
//  Created by Sonya Cail on 12/27/21.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

Student::Student()//* Set default value-- empty constructor *//
{
this->studentID = " ";
this->firstName = " ";
this->lastName = " ";
this->email = " ";
this->age = 0;
for (int i = 0; i < daysInCourse; i++) this->days[i] = 0;
this->DegreeType = degreeType::SECURITY;
}

Student::Student (string stuID, string fName, string lName, string email, int age, int days [], degreeType degreeType)
{
this->studentID = stuID;
this->firstName = fName;
this->lastName = lName;
this->email = email;
this->age = age;
for (int i = 0; i < daysInCourse; i++) this->days[i] = days[i];
this->DegreeType = degreeType;
}

Student::~Student() {}/*Destructor*/

string Student::getID() { return this->studentID;}
string Student::getFirstname() { return this->firstName;}
string Student::getLastname() { return this->lastName;}
string Student::getEmail() { return this->email;}
int Student::getAge() { return this->age;}
int* Student::getDays() { return this->days;}
degreeType Student::getDegreeType() { return this->DegreeType;}

void Student::setID (string studentID){this->studentID = studentID;}
void Student::setFirstname(string firstName){this-> firstName = firstName;};
void Student::setLastname(string lastName) {this->lastName = lastName;};
void Student::setEmail(string email) {this->email = email;};
void Student::setAge (int age) {this->age = age;};
void Student::setDays(int* days){
    for (int i = 0; i < daysInCourse; i++) this->days[i] = days[i];
}
void Student::setDegreeType(degreeType dt){this->DegreeType = dt;}

void Student::printHeader()
{
    cout<< "ID" << '\t' << "First Name" << '\t' << "Last Name" << '\t' << "E-mail" << '\t' << "Age"<< '\t' << "Day's In Course" << '\t' << "Degree Type" << endl;
}

void Student::print ()
{
    cout << this->getID() << '\t';
    cout << this->getFirstname() << '\t';
    cout << this-> getLastname () << '\t';
    cout << this->getEmail() << '\t';
    cout << this->getAge() << '\t';
    cout << this->getDays()[0] << " ,";
    cout << this->getDays()[1] << " , ";
    cout << this->getDays()[2] << " , ";
    cout << degreeTypeString [this->getDegreeType()] << '\n';
    
}
