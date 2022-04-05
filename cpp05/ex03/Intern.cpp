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

}
