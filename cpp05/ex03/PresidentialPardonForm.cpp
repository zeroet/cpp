#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(TYPE_P, SIGN_GRADE_P, EXEC_GRADE_P), _Taget("Unkwown")
{
	std::cout << YELLOW << "PresidentialPardonForm : Default Constructor called" << FIN << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(TYPE_P, SIGN_GRADE_P, EXEC_GRADE_P), _Taget(target)
{
	std::cout << YELLOW << "PresidentialPardonForm : Constructor called" << FIN <<  std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : Form(rhs)
{
	*this = rhs;
	std::cout << YELLOW << "PresidentialPardonForm : Copy Constructor called" << FIN << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_Taget = rhs._Taget;
	std::cout << YELLOW << "PresidentialPardonForm : Assignement fnc called" << FIN <<  std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "PresidentialPardonForm : Destructor called" << FIN << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_Taget);
}

void	PresidentialPardonForm::execute(Bureaucrat const & execute) const
{
	Form::execute(execute);
	std::cout << PINK << getTarget() << " a été pardonnée par Zaphod Beeblebrox" << FIN << std::endl;
}
