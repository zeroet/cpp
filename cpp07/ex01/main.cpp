#include "iter.hpp"

int main()
{
	std::string arry[] = {"abc", "cdf", "efw"};
	int	arry1[] = {1, 2, 3};
	float arry2[] = {1.1f, 2.2f, 3.3f};
	double arry3[] = {2.123, 3.34312, 42.42, 42222.3222};

	::iter(arry, 3, printArry<std::string>);
	::iter(arry1, 3, printArry<int>);
	::iter(arry2, 3, printArry<float>);
	::iter(arry3, 4, printArry<double>);
	return (0);
}
