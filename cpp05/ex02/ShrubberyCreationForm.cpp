#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << YELLOW << "ShrubberyCreationForm : Default Constructor called" << FIN << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << "ShrubberyCreationForm : Destructor called" << FIN << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) 
: Form(TYPE, SIGN_GRADE, EXEC_GRADE), _Target(target)
{
	std::cout << YELLOW << "ShrubberyCreationForm : Constructor called" << FIN << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(TYPE, SIGN_GRADE, EXEC_GRADE)
{
	*this = rhs;
	std::cout << YELLOW <<  "ShrubberyCreationForm : Copy constructor called" << FIN << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_Target);
}

void	ShrubberyCreationForm::executeAction() const
{
	std::string fileName = getTarget() + "_shrubbery";
	std::ofstream shrubberyFile (fileName);
	shrubberyFile
		<< " " << std::endl;

	shrubberyFile.close();
}

