#include <iostream>


class Test{

public:
	int nData;

	Test() : nData(0)
	{
		int nData = 10;
		std::cout<< " Test "<< "nData : " << nData  << std::endl;
	}

	~Test() {
		std::cout << "end Test" << std::endl;
	}
	void print()
	{
		std::cout << this << std::endl;
		std::cout << nData << std::endl;
	}
};

int main()
{
	Test a;
	std::cout << "print this a : " << std::endl;
	a.print();
	std::cout << &a << std::endl;

	Test b;
	std::cout << "print this b : " << std::endl;
	b.print();
	std::cout << &b << std::endl;
	return (0);
}

