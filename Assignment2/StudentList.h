#include "student.h"
#include <fstream>
#include <vector>
using namespace std;

class StudentList
{
public:
	StudentList();
	~StudentList();
	void parse();
	int numOfStudents();
	friend ostream& operator<<(ostream&, StudentList& students);


private:
	vector<Student> studentList;
};