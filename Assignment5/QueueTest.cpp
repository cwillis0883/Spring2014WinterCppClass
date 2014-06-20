#include "CppUnitLite\TestHarness.h"
#include "Queue.cpp"
#include <list>

TEST(deque_int_test_case,Queue)
{
	std::cout << "Entering specialized deque int test case..." << std::endl;
	Queue< std::deque<int> > testQueue;
	CHECK_EQUAL(true, testQueue.isQueueEmpty());
}

TEST(deque_double_test_case, Queue)
{
	std::cout << "Entering deque double test case..." << std::endl;
	Queue< std::deque<double> > testQueue;
	testQueue.push(1.0);
	testQueue.push(2.0);
	testQueue.push(3.0);
	CHECK_EQUAL(1.0, testQueue.pop());
}

TEST(deque_string_test_case, Queue)
{
	std::cout << "Entering deque string test case..." << std::endl;
	Queue< std::deque<std::string> > testQueue;
	testQueue.push("This");
	testQueue.push("is");
	testQueue.push("a");
	testQueue.push("test");
	CHECK_EQUAL("a", testQueue.at(2));
}

TEST(linked_list_test_case, Queue)
{
	std::cout << "Entering linked list test case..." << std::endl;
	Queue< std::list<int> > testQueue;
	testQueue.push(1);
	CHECK_EQUAL(1, testQueue.size());
}