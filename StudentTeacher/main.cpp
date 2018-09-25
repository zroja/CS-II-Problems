#include <iostream>
#include <exception>
#include <string.h>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
using namespace std;

int main() {

 /* Test Student class */
 Student s1 ("Tan Ah Teck", "1 Happy Ave");
 s1.addCourseGrade("IM101", 97);
 s1.addCourseGrade("IM102", 68);
 s1.printGrades();
 cout <<"Average is " << s1.getAverageGrade()<<endl<<endl;


/* Test Teacher class */
 Teacher t1 ("Paul Tan", "8 sunset way");
 t1.print();
 string course_list[] = {"IM101", "IM102", "IM101"};
 for (int i=0; i<3; i++) {
 if (t1.addCourse(course_list[i])) {
 cout<<course_list[i] << " added."<<endl;
 } else {
 cout<<course_list[i] << " cannot be added."<<endl;
 }
 }

 for (int i=0; i<3; i++) {
 if (t1.removeCourse(course_list[i])) {
 cout<<course_list[i] << " removed."<<endl;
 } else {
 cout<<course_list[i]<< " cannot be removed."<<endl;
 }
 }
}
