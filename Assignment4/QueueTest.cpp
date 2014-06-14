#include "CppUnitLite\TestHarness.h"
#include "Queue.h"

TEST(EmptyQueueTest, Queue)
{
  std::cout << "Entering EmptyQueueTest..." << std::endl;
  Queue<int> testQueue(3);
  CHECK_EQUAL(true, testQueue.isEmpty());
}

TEST(PushAndPopTest, Queue)
{
	std::cout << "Entering PushAndPopTest..." << std::endl;
	Queue<int> testQueue(3);
	testQueue.push(1);
	testQueue.push(2);
	testQueue.push(3);

	CHECK_EQUAL(1, testQueue.pop());
}

TEST(GetSizeTest, Queue)
{
	std::cout << "Entering GetSizeTest..." << std::endl;
	Queue<int> testQueue(3);
	testQueue.push(1);
	testQueue.push(2);
	testQueue.push(3);

	CHECK_EQUAL(3, testQueue.size());
}

TEST(AssignmentOperatorTest, Queue)
{
	std::cout << "Entering AssignmentOperatorTest..." << std::endl;
	Queue<int> testQueue1(10);
	Queue<int> testQueue2(10);

	testQueue1.push(1);
	testQueue1.push(2);
	testQueue1.push(3);

	testQueue2 = testQueue1;

	CHECK_EQUAL(1, testQueue2.pop());
}

TEST(EmptyExceptionTest, Queue)
{
	std::cout << "Entering EmptyExceptionTest..." << std::endl;
	Queue<int> testQueue(10);
	try
	{
		testQueue.pop();
	}
	catch (QueueEmpty* ex)
	{
		std::cerr << ex->what();
	}
}

TEST(FullQueueExceptionTest, Queue)
{
	std::cout << "Entering FullQueueExceptionTest..." << std::endl;
	Queue<int> testQueue(1);
	try
	{
		testQueue.push(1);
		testQueue.push(2);
	}
	catch (QueueFull* ex)
	{
		std::cerr << ex->what();
	}
}

TEST(MissingElementExceptionTest, Queue)
{
	std::cout << "Entering MissingElementException..." << std::endl;
	Queue<int> testQueue(2);
	try
	{
		testQueue.push(1);
		testQueue.push(2);
		testQueue.at(3);
	}
	catch (MissingElement* ex)
	{
		std::cerr << ex->what();
	}
}