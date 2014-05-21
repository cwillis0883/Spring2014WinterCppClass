#include <vector>
#include <iostream>
using namespace std;

template<class T>
class Collection
{
public:
	void add(const T& element)
	{
		myCollection.push_back(element);
		return;
	}

	int count()
	{
		return myCollection.size();
	}

	bool isEmpty()
	{
		if (myCollection.size() == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	const T& get(int index)
	{
		return myCollection.at(index);
	}

	void printAll(ostream& os)
	{
		for (int i = 0; i < myCollection.size(); i++)
		{
			os << myCollection.at(i) << endl;
		}
	}

	void printAllReverseOrder(ostream& os)
	{
		for (int i = myCollection.size() - 1; i >= 0; i--)
		{
			os << myCollection.at(i) << endl;
		}
	}
private:
	vector<T> myCollection;
};