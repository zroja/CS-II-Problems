// Zahin Roja
#ifndef _STUDENT_H
#define _STUDENT_H
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

//static int Grade = 0;


class Student: public Person{

    public:
    Student(string, string);
    void addCourseGrade(string, int);
    void printGrades();
    double getAverageGrade();
    void printInfo();

    private:
    int numCourses;
    string courses[10];
    int grades[10];
};
#endif


