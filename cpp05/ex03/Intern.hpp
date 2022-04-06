#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <string>

#define F_TYPE 3

#define P_Form "presidential pardon"
#define R_Form "robotomy request"
#define S_Form "shrubbery creation"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &rhs);
		Intern & operator=(Intern const &rhs);
		
		Form * makeForm(const std::string &objet, const std::string &name);
	
	private:

};

#endif
