#include "Form.hpp"

std::ostream & operator<<(std::ostream &o , Form const &rhs)
{
	o << PURPLE << "Form : " << rhs.getName() << ", Sign grade is " << rhs.getSignal() << ", Execute garde is " << rhs.getExecuter() <<
		", Sign is " << rhs.getSign() << FIN << std::endl;
	return o;
}

//Form::Form() 
//{
//	std::cout<< YELLOW << "Form : Default Constructor called" << FIN << std::endl;
//}

const char * Form::GradeTooHighException::what(void) const throw()
{
	std::cout << RED;
	return ("Grade is too High");
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	std::cout << RED;
	return ("Grade is too Low");
}

Form::Form(const std::string &str, const int &Signal, const int &Executer) : _F_Name(str), _F_Signal(Signal), _F_Executer(Executer), _F_Sign(false)
{
	if (_F_Signal < 1 || _F_Executer < 1)
		throw Form::GradeTooHighException();
	if (_F_Signal > 150 || _F_Executer > 150)
		throw Form::GradeTooLowException();
	std::cout << YELLOW << "Form : Constructor called" << FIN << std::endl;
}

Form::~Form()
{
	std::cout << YELLOW << "Form : Destructor called" << FIN << std::endl;
}

Form::Form(Form const &rhs)
	: _F_Name(rhs.getName()), _F_Signal(rhs.getSignal()), _F_Executer(rhs.getExecuter()), _F_Sign(rhs.getSign())
{
	*this = rhs;
	std::cout << YELLOW << "Form : Copy constructor called" << FIN << std::endl;
}

Form & Form::operator=(Form const &rhs) 
{
		_F_Sign = rhs._F_Sign;
	std::cout << YELLOW << "Form : assignement operator called" << FIN << std::endl;
	return *this;
}

void Form::beSigned(Bureaucrat const  &rhs)
{
	if (rhs.getGrade() > this->_F_Signal)
		throw Form::GradeTooLowException();
	_F_Sign = true;
}

const std::string Form::getName() const
{
	return (this->_F_Name);
}

int Form::getSignal() const
{
	return (this->_F_Signal);
}

int Form::getExecuter() const
{
	return(this->_F_Executer);
}

bool Form::getSign() const
{
	return(this->_F_Sign);
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (getExecuter() < executor.getGrade())
		throw Form::GradeTooLowException();
}

