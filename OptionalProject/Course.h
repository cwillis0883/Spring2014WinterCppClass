#include <string>
#include <iostream>
using namespace std;

class Course
{
public:
	Course(string, string, string, string);
	~Course();
	string getFullName();
	friend ostream& operator<<(ostream&, Course& course);

private:
	string name;
	string prefix;
	string number;
	string id;
};