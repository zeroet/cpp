
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	
	std::cout << "====================ShrubberyCreationForm================" << std::endl;

	{
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

	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================RobotomyRequestForm================" << std::endl;

	{
		Form *q = new RobotomyRequestForm("Robo");
		Bureaucrat b("Odin", 45);
		Bureaucrat c("Thor", 73);
		Bureaucrat a("Loki", 30);
	
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << *q;
	
		std::cout << std::endl;
		std::cout << "--------------------execute test---------------" << std::endl;
		std::cout << std::endl;
		b.executeForm(*q);
		std::cout << std::endl;
		c.executeForm(*q);
		std::cout << std::endl;
		a.executeForm(*q);
		std::cout << std::endl;
		
		std::cout << std::endl;
		std::cout << "--------------------sign test---------------" << std::endl;
		std::cout << std::endl;
		a.signForm(*q);
		std::cout << *q;
		b.signForm(*q);
		std::cout << *q;
		c.signForm(*q);
		std::cout << *q;
	
		delete q;	
	}	
		

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "====================PresidentialPardonForm================" << std::endl;

	{
		Form *w = new PresidentialPardonForm("Sorry");
		Bureaucrat b("Odin", 4);
		Bureaucrat c("Thor", 25);
		Bureaucrat a("Loki", 50);
	
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << *w;
	
		std::cout << std::endl;
		std::cout << "--------------------execute test---------------" << std::endl;
		std::cout << std::endl;
		b.executeForm(*w);
		std::cout << std::endl;
		c.executeForm(*w);
		std::cout << std::endl;
		a.executeForm(*w);
		std::cout << std::endl;
		
		std::cout << std::endl;
		std::cout << "--------------------sign test---------------" << std::endl;
		std::cout << std::endl;
		a.signForm(*w);
		std::cout << *w;
		b.signForm(*w);
		std::cout << *w;
		c.signForm(*w);
		std::cout << *w;
	
		delete w;	
	}	
		





	return (0);
}


