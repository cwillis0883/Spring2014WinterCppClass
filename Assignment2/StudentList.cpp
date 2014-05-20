#include "StudentList.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

StudentList::StudentList()
{
}

StudentList::~StudentList()
{
}

void StudentList::parse()
{
	string student;
	string token;
	ifstream studentFile;
	studentFile.open("students.txt");
	if (!studentFile.good()){
		cout << "File not found." << endl;
	}
	else
	{
		while (!studentFile.eof())
		{
			getline(studentFile, student, ',');

			istringstream iss(student);
			int flag = 0;
			string tempStudentName;
			string tempStudentID;
			do{
				getline(iss, token, ';');
				if (flag == 0){
					token.erase(remove_if(token.begin(), token.end(), isspace), token.end());
					tempStudentName = token;
					flag++;
				}
				else
				{
					tempStudentID = token;
				}
			} while (getline(iss, token, ';'));

			Student newStudent(tempStudentName, tempStudentID);
			studentList.push_back(newStudent);
		}
	}

	studentFile.close();
}

int StudentList::numOfStudents()
{
	return studentList.size();
}

ostream& operator<<(std::ostream& os, StudentList& students)
{
	os << endl;
	os << "Students:" << endl;
	os << endl;
	for (int x = 0; x < students.studentList.size(); x++)
	{
		os << students.studentList.at(x) << endl;
	}

	return os;
}