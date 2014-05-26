#include "Course.h"
using namespace std;

Course::Course(string courseName, string coursePrefix, string courseNumber, string courseID)
	:name(courseName),
	prefix(coursePrefix),
	number(courseNumber),
	id(courseID)
{
}

Course::~Course()
{
}

string Course::getFullName()
{
	return prefix + " " + number + " " + name;
}

ostream& operator<< (ostream& os, Course& course)
{
	os << course.getFullName() << endl;
	return os;
}