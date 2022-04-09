#include <iostream>
#include <string>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <random>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"


Base *generate(void)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 2);
	
	int num = dis(gen);

	switch(num)
	{
		case 0:
		{
			std::cout << YELLOW << "Return Class A()" << FIN << std::endl;
			return (new A());
		}
		case 1:
		{
			std::cout << BLUE << "Return Class B()" << FIN << std::endl;
			return (new B());
		}
		case 2:
		{
			std::cout << GREEN << "Return Class C()" << FIN << std::endl;
			return (new C());
		}
	}
	std::cout << RED << "ERROR ? " << FIN << std::endl;
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << YELLOW << "Class A ptr" << FIN << std::endl;
	if (dynamic_cast<B *>(p) != nullptr)
		std::cout << BLUE << "Class B ptr" << FIN << std::endl;
	if (dynamic_cast<C *>(p) != nullptr)
		std::cout << GREEN << "Class C ptr" << FIN << std::endl;
}

void	identify(Base &p)
{
	try
	{	
		(void)dynamic_cast<A &>(p);
			std::cout << YELLOW << "Class A Reference" << FIN << std::endl;
	}
	catch (std::exception &e)
	{	
		std::cerr << YELLOW << "Dynamic cast Error : " << e.what() << std::endl;
	}

	
	try
	{	
		(void)dynamic_cast<B &>(p);
			std::cout << BLUE << "Class B Reference" << FIN << std::endl;
	}
	catch (std::exception &e)
	{	
		std::cerr << BLUE << "Dynamic cast Error : " << e.what() << std::endl;
	}
	
	
	try
	{	
		(void)dynamic_cast<C &>(p);
			std::cout << GREEN << "Class C Reference" << FIN << std::endl;
	}
	catch (std::exception &e)
	{	
		std::cerr << GREEN << "Dynamic cast Error : " << e.what() << std::endl;
	}



}

int main()
{
	Base *res = generate();
	Base &ref = *res;

	identify(res);
	identify(ref);

	delete res;

	return (0);
}
