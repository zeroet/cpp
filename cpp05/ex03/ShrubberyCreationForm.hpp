#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>

#include "Form.hpp"

#define SIGN_GRADE 145
#define EXEC_GRADE 137
#define TYPE "ShrubberyCreationForm"


class ShrubberyCreationForm : public Form 
{
	private:
		std::string _Target;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);

		std::string getTarget() const;
		virtual void execute(Bureaucrat const & execute) const;
};

#endif
