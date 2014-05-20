#include "student.h"
#include <sstream>

Student::Student(string name, string id)
:studentName(name),
studentID(id)
{
	if (id.empty())
	{
		stringstream ss;
		cout << "Student " << studentName << " does not have an ID." << endl;
		int tempID = 1 + (rand() % 213412341234);
		ss << tempID;
		studentID = ss.str();
	}
	else
	{
		id = id;
	}
}

Student::~Student()
{
}

char Student::firstLetter()
{
	return studentName[0];
}

string Student::getID()
{
	return studentID;
}

ostream& operator<< (ostream& os, Student& student)
{
	os << "Name: " << student.studentName << " ID: " << student.studentID << endl;
	return os;
}