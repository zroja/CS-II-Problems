// Zahin Roja
#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student(string nombre, string addresss): Person(nombre, addresss)
{

}
void Student::addCourseGrade(string course, int grade)
{
    courses[numCourses] = course;
    grades[numCourses] = grade;
    numCourses++;
}
void Student::printGrades()
{
    cout << "Student: " << name << " " << address << endl;
    for(int i =0; i < numCourses; i++)
    {
    cout << courses[i] << ":" << grades[i] << endl;
    }
}
double Student::getAverageGrade()
{
    double average;
    int sum =0;
    for(int i =0 ; i < numCourses; i ++)
    {
        sum = sum+ grades[i];
    }
    return average= sum/numCourses;
}
void Student::printInfo()
{
    cout << "hi" << endl;
}
