#include <cstddef>
#include <iostream>
using namespace std;

class Circle
{
public:

	Circle(int radius, int xCoord = 0, int yCoord = 0,
		char * name = NULL);
	~Circle();

	int getRadius();

	const Circle operator+(Circle&);
	friend ostream& operator<<(ostream&, const Circle&);
	Circle& operator++();
	Circle& operator++(int);

private:
	int mXCoord;
	int mYCoord;
	int mRadius;
	char * mName; // this stores the name of the circle 
};