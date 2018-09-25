// Zahin Roja
#ifndef _TEACHER_H
#define _TEACHER_H
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Teacher: public Person{

    public:
    Teacher(string, string);
    bool addCourse(string);
    bool removeCourse(string);
    void print();

    private:
    int numCourses;
    string courses[10];
    //int grades[10];
};
#endif


