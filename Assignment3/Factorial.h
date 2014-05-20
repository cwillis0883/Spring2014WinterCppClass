#include <iostream>

template<class T>
class Factorial
{
public:
	T fact(T n)
	{
		return (n < 2 ? 1 : n * fact(n - 1));
	}
};