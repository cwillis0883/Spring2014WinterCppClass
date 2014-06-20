#include <iostream>
#include <deque>
#include <vector>

template<typename Container>
class Queue
{
	typedef typename Container::value_type Element;
public:
	Queue()
	{
	}

	~Queue()
	{
	}

	void push(const Element& input)
	{
		mCollection.push_back(input);
	}

	Element pop()
	{
		Element tempValue;
		tempValue = mCollection.front();
		mCollection.pop_front();
		return tempValue;
	}

	bool isEmpty()
	{
		return mCollection.empty();
	}

	Element at(int location)
	{
		return mCollection.at(location);
	}

	int size()
	{
		return mCollection.size();
	}

private:
	Container mCollection;
};

// explicit specialization
template<>
class Queue<std::deque<int>>
{
public:
	Queue()
	{
	}

	~Queue()
	{
	}

	void push(const std::deque<int> input)
	{
		numbers.push_back(input);
	}

	std::deque<int> pop()
	{
		std::deque<int> tempValue;
		tempValue = numbers.front();
		numbers.pop_back();
		return tempValue;
	}

	bool isQueueEmpty()
	{
		return numbers.empty();
	}

	std::deque<int> at(int location)
	{
		return numbers.at(location);
	}

private:
	std::vector<std::deque<int>> numbers;
};