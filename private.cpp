#include <iostream>

class Sample {


public:
	
	int publicFoo;

	Sample(void)
	{
		std::cout << "construction Sample" << std::endl;

		this->publicFoo = 0;
		std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
		this->_privateFoo = 0;
		std::cout << "this->_privateFoo " << this->_privateFoo << std::endl;

		this->publicBar();
		this->_privateBar();
		
		return ;
	}

	~Sample(void)
	{
		std::cout << "destruction Sample" << std::endl;
	}

	void publicBar(void) const
	{
		std::cout << "Member function publicBar called" << std::endl;
		return;
	}

private:

	int _privateFoo;

	void _privateBar(void) const
	{
		std::cout << "Member function _privateBar called" << std::endl;
		return;
	}
};


int main(void)
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo : " << instance.publicFoo << std::endl;

//	instance._privateFoo = 42;
//	std::cout << "instamce._privateFoo : " << instance._privateFoo << std::endl;
	
	instance.publicBar();
//	instance._privateBar();
	
	return 0;
}
