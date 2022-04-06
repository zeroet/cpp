
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	Intern i;

	Bureaucrat a("Thor", 1);
	Bureaucrat b("Odin", 15);
	Bureaucrat c("Loki", 70);
	Bureaucrat d("Valkyrie", 140);

	std::cout << std::endl;
	std::cout << "-----------------------make Form test-------------------------" << std::endl;
	std::cout << std::endl;


	Form *f1 = i.makeForm(P_Form, "InternA");
	std::cout << std::endl;
	Form *f2 = i.makeForm(R_Form, "InternB");
	std::cout << std::endl;
	Form *f3 = i.makeForm(S_Form, "InternC");
	std::cout << std::endl;
	i.makeForm("X_Form", "InternD");
	
	std::cout << std::endl;
	std::cout << "-----------------------Form cout test-------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << *f3 << std::endl;

	
	std::cout << std::endl;
	std::cout << "-----------------------Form Sign test-------------------------" << std::endl;
	std::cout << std::endl;

	a.signForm(*f1);	
	std::cout << *f1 << std::endl;
	b.signForm(*f2);	
	std::cout << *f2 << std::endl;
	c.signForm(*f3);
	std::cout << *f3 << std::endl;
	d.signForm(*f1);

	std::cout << std::endl;
	std::cout << "-----------------------Form execute test-------------------------" << std::endl;
	std::cout << std::endl;

	a.executeForm(*f1);
	std::cout << std::endl;
	b.executeForm(*f2);
	std::cout << std::endl;
	c.executeForm(*f3);
	std::cout << std::endl;
	d.executeForm(*f1);
	std::cout << std::endl;




	delete f1;
	delete f2;
	delete f3;




	return (0);
}


