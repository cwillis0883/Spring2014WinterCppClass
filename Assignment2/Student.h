#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
	Student(string, string);
	~Student();
	char firstLetter();
	string getID();
	friend ostream& operator<<(ostream&, Student& student);

private:
	string studentName;
    string studentID;
};