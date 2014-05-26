#include "CppUnitLite\TestHarness.h"
#include "Student.h"


TEST(getID,Student)
{
	cout << "Entering Student getID() test case..." << endl;
	Student testStudent("John","Smith","S1234");
	CHECK_EQUAL("S1234",testStudent.getID());
}

TEST(getName,Student)
{
	cout << "Entering Student getName() test case..." << endl;
	Student testStudent("John","Smith","S1234");
	CHECK_EQUAL("John Smith",testStudent.getName());
}

TEST(output,Student)
{
	cout << "Entering output test case..." << endl;
	Student testStudent("John","Smith","S1234");
	cout << testStudent;
}

TEST(addCourse,Student)
{
	cout << "Entering Student addCourse() test case..." << endl;
	
	Student testStudent("John","Smith","S1234");
	Course testClass("C++ Programming: Intermediate","CS","712","4286");
	testStudent.addClass(testClass);
	CHECK_EQUAL(false,testStudent.noCourses());
}

TEST(printClasses,Student)
{
	cout << "Entering Student printClasses() test case..." << endl;
	Student testStudent("John","Smith","S1234");
	Course testClass1("C++ Programming: Intermediate","CS","712","4286");
	Course testClass2("C++ Programming: Introduction","CS","711","4285");
    testStudent.addClass(testClass1);
	testStudent.addClass(testClass2);
	testStudent.printClasses();
}