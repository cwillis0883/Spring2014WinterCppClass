#include "TestHarness.h"
#include "StudentList.h"

TEST(StudentFirstLetter, Student)
{
	cout << "Entering StudentFirstLetter test case..." << endl;
	Student student1("John Doe", "1234");
	CHECK_EQUAL('J', student1.firstLetter());
}

TEST(StudentNoID, Student)
{
	cout << "Entering StudentNoID test case..." << endl;
	Student student2("Tracy Brown", "");
	CHECK(!student2.getID().empty());
}

TEST(StudentListTest, StudentList)
{
	cout << "Entering StudentList test case..." << endl;
	StudentList students;
	students.parse();
	std::cout << students;
	CHECK_EQUAL(6, students.numOfStudents());
}