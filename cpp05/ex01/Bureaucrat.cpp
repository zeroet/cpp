#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o<< PURPLE << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << FIN;
	return o;
}

//Bureaucrat::Bureaucrat() : _Name("Unkwown")
//{
//	std::cout << YELLOW << "Bureaucrat default Constructor called" << FIN << std::endl;
//};

const char* Bureaucrat::GradeTooHightException:: what(void) const throw()
{
	std::cout << RED;
	return ("Grade is Too High");
};

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	std::cout << RED;
	return ("Grade is Too Low");
};

Bureaucrat::Bureaucrat(const std::string str, int num) : _Name(str)
{
	if (num < 1)
		throw GradeTooHightException();
	else if (num > 150)
		throw GradeTooLowException();
	else
		_Grade = num;
	std::cout << YELLOW << "Bureaucrat " << this->_Name << " grade is " << this->_Grade << " Constructor called" << FIN << std::endl;
};

Bureaucrat::~Bureaucrat()
{
	std::cout << YELLOW << "Bureaucrat Destructor called" << FIN << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "Bureaucrat Copy Constructor called" << FIN << std::endl;
};

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
//	this->_Name = rhs._Name; 
	this->_Grade = rhs._Grade;
	std::cout << YELLOW << "Bureaucrat assignement fnc called" << FIN << std::endl;
	return (*this);
};

void	Bureaucrat::incrementGrade(void)
{
	if (this->_Grade == 1)
	{
		throw (GradeTooHightException());
	}
	--_Grade;
	std::cout << BLUE << this->_Name << " grade is " << this->_Grade << std::endl;
};

void	Bureaucrat::decrementGrade(void)
{
	if (this->_Grade == 150)
	{
		throw (GradeTooLowException());
	}
	++_Grade;
	std::cout << BLUE << this->_Name << " grade is " << this->_Grade << std::endl;
};

const std::string Bureaucrat::getName() const 
{
	return (this->_Name);
};

int	Bureaucrat::getGrade() const
{
	return (this->_Grade);
};

void	Bureaucrat::signForm(Form &rhs)
{
	if (getGrade() > rhs.getSignal())
		

