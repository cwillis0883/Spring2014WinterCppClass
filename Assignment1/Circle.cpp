#include "circle.h"

Circle::Circle(int radius, int xCoord, int yCoord, char * name)
:mRadius(radius),
mXCoord(xCoord),
mYCoord(yCoord),
mName(name)
{

}
Circle::~Circle()
{

}

int Circle::getRadius()
{
	return mRadius;
}

const Circle Circle::operator + (Circle& circle)
{
	return Circle(mRadius + circle.mRadius, mXCoord, mYCoord, mName);
}

ostream& operator<<(ostream& os, const Circle& circle)
{
	os << circle.mName << " located at: " << circle.mXCoord << "," << circle.mYCoord << " with a radius of " << circle.mRadius << endl;
	return os;
}

Circle& Circle::operator++()
{
	++mRadius;
	return *this;
}

Circle& Circle::operator++(int)
{
	Circle tempCircle(mRadius, mXCoord, mYCoord, mName);
	tempCircle.mRadius++;
	return tempCircle;
}