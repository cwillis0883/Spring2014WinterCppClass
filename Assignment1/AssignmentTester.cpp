#include "Circle.h"
#include <iostream>
using namespace std;

const int kMaxNameSize = 128;

void CreateTwoCircles()
{
	cout << "Entering CreateTwoCircles()..." << endl;
	char * name = new char[kMaxNameSize];
	const char * kName1 = "Cir1";
	const char * kName2 = "CircleNumber2";
//	strncpy(name, kName1, kMaxNameSize);
	strncpy_s(name, kMaxNameSize, kName1, _TRUNCATE);
	Circle c1(2, 1, 1, name);
//	strncpy(name, kName2, kMaxNameSize);
	strncpy_s(name, kMaxNameSize, kName2, _TRUNCATE);
	Circle c2(5, 1, 1, name);
	delete[] name;
	// delete first before printing the circle below
	// Print the two below one after another
	cout << "c1 is " << c1 << endl;
	// Name printed: Cir1
	cout << "c2 is " << c2 << endl;
	// Name printed: CircleNumber2
}

void DoCircleAssignment()
{
	cout << "Entering DoCircleAssignment()..." << endl;
	char * name = new char[kMaxNameSize];
	const char * kName1 = "Cir1";
	const char * kName2 = "CircleNumber2";
//	strncpy(name, kName1, kMaxNameSize);
	strncpy_s(name, kMaxNameSize, kName1, _TRUNCATE);
	cout << name << endl;
	Circle c1(1, 0, 0, name);
	cout << "c1 is " << c1 << endl;
//	strncpy(name, kName2, kMaxNameSize);
    strncpy_s(name, kMaxNameSize, kName2, _TRUNCATE);
	Circle c2(2, 1, 1, name);
	delete[] name;
	// delete first before printing the circle below
	cout << "Before assignment, c2 is " << c2 << endl;
	c2 = c1;
	cout << "After assignment, c2 is " << c2 << endl;
}

void CircleTest()
{
	CreateTwoCircles();
	DoCircleAssignment();
}

	int main()
	{
		CircleTest();
		return 0;
	}

