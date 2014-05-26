#include <string>
#include <iostream>
#include "Collection.h"
#include "Course.h"
using namespace std;

class Student
{
public:
	Student(string, string, string);
	~Student();
	string getID();
	string getName();
	void addClass(Course);
	void printClasses();
	bool noCourses();
	friend ostream& operator<<(ostream&, Student& student);

private:
	string first_name;
	string last_name;
	string id;
	Collection<Course> classes;
};