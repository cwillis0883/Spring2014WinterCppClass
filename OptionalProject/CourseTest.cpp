#include "CppUnitLite\TestHarness.h"
#include "Course.h"

TEST(getFullName,Course)
{
	cout << "Entering Course getFullName() test..." << endl;
	Course testClass("C++ Programming: Intermediate","CS","712","4286");
	CHECK_EQUAL("CS 712 C++ Programming: Intermediate",testClass.getFullName());
}