#include "Span.hpp"
#include <random>

# define YELLOW "\033[0;38;5;220m"
# define GREEN "\033[0;38;5;42m"
# define RED "\033[0;38;5;196m"
# define BLUE "\033[0;38;5;21m"
# define PINK "\033[0;38;5;205m"
# define PURPLE "\033[0;38;5;93m"
# define ORANGE "\033[38;5;202m"
# define FIN "\033[0m"


int main(void)
{
	std::cout << std::endl;
	std::cout << GREEN <<"GREEN is Shortest" << std::endl;
	std::cout << YELLOW << "YELLOW is Longest" << std::endl;

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test projet ==========" << std::endl;
	std::cout << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << GREEN << sp.shortestSpan() << std::endl;
	std::cout << YELLOW <<  sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test 0  - 9 ==========" << std::endl;
	std::cout << std::endl;
	
	Span test(10);
	for (unsigned int i = 0; i < 10; i++)
		test.addNumber(i);
	std::cout << GREEN << test.shortestSpan() <<FIN<< std::endl;
	std::cout << YELLOW << test.longestSpan() <<FIN<< std::endl;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 30000);

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test 10000 random ==========" << std::endl;
	std::cout << std::endl;
	
	Span test1(10000);
	for (int i=0; i < 10000; i++)
	{	
		test1.addNumber(dis(gen));
	}
	std::cout << GREEN << test1.shortestSpan() <<FIN<<std::endl;
	std::cout << YELLOW << test1.longestSpan() <<FIN<< std::endl;

	std::cout << std::endl;
	std::cout << ORANGE << "========== Test ERROR ==========" << std::endl;
	std::cout << std::endl;
	

	try
	{	
		Span err1(2);
		
		err1.addNumber(10);
		err1.addNumber(120);
		err1.addNumber(100);
	}
	catch(std::exception &e)
	{
		std::cerr << RED <<  e.what() << FIN <<std::endl;
	}

	try
	{
		Span err2(4);

		err2.addNumber(42);
		std::cout << RED <<  err2.shortestSpan() << FIN << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Span err3(42);

		err3.addNumber(42);
		std::cout << err3.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << RED <<  e.what() <<FIN << std::endl;
	}

	std::cout << std::endl;
	std::cout << ORANGE <<"========== Test [ 10, 11, 12, 13, 100 ] ==========" << std::endl;
	std::cout << std::endl;
	

	Span a(10);

	a.addNumber(10);
	a.addNumber(11);
	a.addNumber(12);
	a.addNumber(13);
	a.addNumber(100);

	std::cout << GREEN << a.shortestSpan() << std::endl;
	std::cout << YELLOW << a.longestSpan() << std::endl;

	std::cout << std::endl;
	
	return (0);
}
