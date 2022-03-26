#include <iostream>
#include <string>

class Ctest {

private:


public:
	Ctest() { std::cout << "ctest create " << std::endl;}
	~Ctest() { std::cout << "end" << std::endl; }

	Ctest& operator =(const Ctest &rhs)
	{
		

		return *this;
	}
};


