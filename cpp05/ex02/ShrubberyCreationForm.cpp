#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(TYPE, SIGN_GRADE, EXEC_GRADE)
{
	std::cout << YELLOW << "ShrubberyCreationForm : Default Constructor called" << FIN << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << YELLOW << "ShrubberyCreationForm : Destructor called" << FIN << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: Form(TYPE, SIGN_GRADE, EXEC_GRADE), _Target(target)
{
	std::cout << YELLOW << "ShrubberyCreationForm : Constructor called" << FIN << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(TYPE, SIGN_GRADE, EXEC_GRADE)
{
	*this = rhs;
	std::cout << YELLOW <<  "ShrubberyCreationForm : Copy constructor called" << FIN << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		_Target = rhs.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_Target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & execute) const
{
	if (getExecuter() < execute.getGrade())
		throw Form::GradeTooLowException();
	std::string fileName = getTarget() + "_shrubbery";
	std::ofstream shrubberyFile (fileName);
	shrubberyFile  
		<< "               ,@@@@@@@,\n"
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"		
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";	
	shrubberyFile.close();
}

