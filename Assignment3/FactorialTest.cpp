#include "CppUnitLite\TestHarness.h"
#include "Factorial.h"
using namespace std;

TEST(FactorialTemplate, Factorial)
{
	cout << "Entering FactorialTemplate test case..." << endl;
	cout << endl;
	Factorial<int> factorial;
	CHECK_EQUAL(5040, factorial.fact(7))
}