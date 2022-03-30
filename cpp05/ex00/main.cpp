#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "Test Normal" << std::endl;
	std::cout << std::endl;

	Bureaucrat test("test", 42);
	std::cout << test << std::endl;


	std::cout << std::endl;
	std::cout << FIN << "Input Grade 0 test" << std::endl;
	std::cout << std::endl;
	try
	{	
		Bureaucrat a("a", 0);

	}
	catch(const std::exception &e)
	{	
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << FIN << "Input Grade 151 test" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat b("b", 151);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Input Grade 42 test" << std::endl;
	std::cout << std::endl;
	

	try
	{
		Bureaucrat c("c", 42);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Increment test" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat d("d", 10);
		std::cout << d << std::endl;
		for (int i = 0; i < 11; i++)
			d.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Decrement test" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat e("e", 140);
		std::cout << e << std::endl;
		for (int i = 0; i < 11; i++)
			e.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << FIN << "Program normal" << std::endl;

	return (0);
}
