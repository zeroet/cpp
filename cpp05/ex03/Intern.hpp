#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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
