#include "Form.hpp"

std::ostream & operator<<(std::ostream &o , Form const &rhs)
{
	o << PURPLE << rhs.getName << ", grade is " << rhs.getSignal << ", garde is " << rhs.getExecuter <<
		", Sign is " << rhs.getSign << FIN << std::endl;
};

Form::Form() 
{
	std::cout<< YELLOW << "Form : Default Constructor called" << FIN << std::endl;
};

const char * Form::GradeTooHightException::what(void) const throw()
{
	std::cout << RED;
	return ("Grade is too High");
};

const char * Form::GradeTooLowExcpetion::what(void) const throw()
{
	std::cout << RED;
	return ("Grade is too Low");
};

Form::Form(const std::string &str, const int &Signal, const int &Executer) : _F_Name(str), _F_Signal(Signal), _F_Executer(Executer), _F_Sign(false)
{
	if (_F_Signal < 1 || _F_Executer < 1)
		throw Form::GradeTooHightException();
	if (_F_Signal > 150 || _F_Executer > 150)
		throw Form::GradeTooLowExcpetion();
	std::cout << YELLOW << "Form : Constructor called" << FIN << std::endl;
};

Form::~Form()
{
	std::cout << YELLOW << "Form : Destructor called" << FIN << std::endl;
};

Form::Form(Form const &rhs)
	: _F_Name(rhs.getName()), _F_Signal(rhs.getSignal()), _F_Executer(rhs.getExecuter()), _F_Sign(rhs.getSign())
{
	*this = rhs;
	std::cout << YELLOW << "Form : Copy constructor called" << FIN << std::endl;
};

Form & Form::operator=(Form const &rhs) 
{
	std::cout << YELLOW << "Form : assignement operator called" << FIN << std::endl;
	return *this;
};

bool Form::beSigned(Bureaucrat const  &rhs)
{
	if (rhs.getGrade() < this->_F_Signal)
		this->_F_Sign = true;
	std::cout << "Form : sign is " << getSign() << std::end;
};

const std::string Form::getName() const
{
	return (this->_F_Name);
};

const int Form::getSignal() const
{
	return (this->_F_Signal);
};

const int Form::getExecuter() const
{
	return(this->_F_Executer);
};

const bool Form::getSign() const
{
	return(this->_F_Sign);
};
