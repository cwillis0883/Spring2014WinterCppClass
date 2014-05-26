#include "Student.h"
using namespace std;

Student::Student(string fname, string lname, string studentID)
	:first_name(fname),
	last_name(lname),
	id(studentID)
{
}

Student::~Student()
{
}

string Student::getID()
{
	return id;
}

string Student::getName()
{
	return first_name + " " + last_name;
}

void Student::addClass(Course newClass)
{
	classes.add(newClass);
}

void Student::printClasses()
{
	classes.printAll(cout);
}

bool Student::noCourses()
{
	return classes.isEmpty();
}

ostream& operator<< (ostream& os, Student& student)
{
	os << student.first_name + " " + student.last_name << "," << student.id << endl;
	return os;
}