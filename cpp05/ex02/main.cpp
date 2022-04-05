
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	
	std::cout << "====================ShrubberyCreationForm================" << std::endl;

	Form *d = new ShrubberyCreationForm("str");
	Bureaucrat b("Odin", 100);
	Bureaucrat c("Thor", 137);
	Bureaucrat a("Loki", 146);

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << *d;

	std::cout << std::endl;
	std::cout << "--------------------execute test---------------" << std::endl;
	std::cout << std::endl;
	b.executeForm(*d);
	std::cout << std::endl;
	c.executeForm(*d);
	std::cout << std::endl;
	a.executeForm(*d);
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "--------------------sign test---------------" << std::endl;
	std::cout << std::endl;
	a.signForm(*d);
	std::cout << *d;
	b.signForm(*d);
	std::cout << *d;
	c.signForm(*d);
	std::cout << *d;

	delete d;	
	
	return (0);
}


