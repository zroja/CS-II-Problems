// Zahin Roja
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include <string>
#include <iostream>
using namespace std;

Teacher::Teacher(string nombre, string addresss): Person(nombre, addresss)
{
    numCourses = 0;
}
bool Teacher::addCourse(string course)
{

	for (int i = 0; i < numCourses; i++) {
			if (course == *(courses+i))
				return false;
		}
    if(numCourses < 10)
    {
        numCourses++;
        *(courses + (numCourses - 1)) = course;
        return true;
    }
    else
        return false;
}
bool Teacher::removeCourse(string course)
{
    for (int i = 0; i < numCourses; i++)
    {
        if (*(courses+i) == course)
        {

            // Remove the last element as it has been moved to previous index.
            for(int j = i; j < numCourses; j++)
            {
                swap(courses[j], courses[j+1]);

            }
            numCourses--;
            return true;
    }
    return false;

}
}
void Teacher::print()
{
    cout << "Teacher: " << name << " " << address << endl;
    for(int i =0; i < numCourses; i++)
    {

    }
}
