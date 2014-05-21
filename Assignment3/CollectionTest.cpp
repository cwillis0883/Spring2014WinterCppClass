#include "CppUnitLite\TestHarness.h"
#include "Collection.h"
#include <string>
#include <sstream>
using namespace std;

TEST(CollectionTest, MyCollection)
{
	cout << "Entering CollectionTest test case..." << endl;
	cout << endl;
	MyCollection<int> m1;

	for (int i = 0; i < 10; i++)
	{
		m1.add(i + 1);
	}

	m1.printAll(cout);
	cout << endl;
	m1.printAllReverseOrder(cout);
	cout << endl;
}

TEST(IsEmpty, MyCollection)
{
	cout << "Entering IsEmpty test case..." << endl;
	cout << endl;

	MyCollection<string> collection;
	CHECK_EQUAL(true, collection.isEmpty());
}