#include "Intern.hpp"

Intern::Intern()
{
	std::cout << YELLOW << "Intern : Default Constructor called" << FIN << std::endl;
}

Intern::~Intern()
{
	std::cout << YELLOW << "Intern : Destructor called" << FIN <<  std::endl;
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "Intern : Copy Constructor called" << FIN << std::endl;
}

Intern & Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::makeForm(const std::string &objet, const std::string &name)
{
	std::string Array[] = { P_Form, R_Form, S_Form };
	
	for(int i = 0; i < F_TYPE; i++)
	{
		if(Array[i] == objet)
		{
			std::cout << PINK << "Intern create " << objet << FIN << std::endl;
			switch (i)
			{
				case 0:
					return new PresidentialPardonForm(name);
				case 1:
					return new RobotomyRequestForm(name);
				case 2:
					return new ShrubberyCreationForm(name);
			}
		}
	}
	std::cout << RED << "Intren can't create : "<< objet << " : " << name << FIN <<std::endl;
	return NULL;
}
