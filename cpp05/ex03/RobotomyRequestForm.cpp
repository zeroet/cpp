#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form(TYPE_R, SIGN_GRADE_R, EXEC_GRADE_R), _Target("Unkwown")
{
	std::cout << YELLOW << "RobotomyRequestForm : Default Constructor called" << FIN << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(TYPE_R, SIGN_GRADE_R, EXEC_GRADE_R), _Target(target)
{
	std::cout << YELLOW << "RobotomyRequestForm : Constructor called" << FIN << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : Form(rhs)
{
	*this = rhs;
	std::cout << YELLOW << "RobotomyRequestForm : Copy Constructor called" << FIN << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_Target = rhs._Target;
	std::cout << YELLOW << "RobotomyRequestForm : Assignement fnc called" << FIN << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << YELLOW << "RobotomyRequestForm : Destructor called" << FIN << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_Target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & execute) const
{
	Form::execute(execute);
	std::random_device rd; //create random device
	std::mt19937 gen(rd()); // random number create engine init par random_device
	// c'est une create random number engine.
	std::uniform_int_distribution<int> dis(0, 1);
	std::cout << "BOOOOOORRRRRRRRRRIIIIIIIIINnnnnggGGGGGG" << std::endl;
	if (dis(gen) == 0)
		std::cout << PINK << getTarget() << " has been robotomized successfully" << FIN << std::endl;
	else
		std::cout << RED << getTarget() << " failed opreation" << FIN << std::endl;
}
