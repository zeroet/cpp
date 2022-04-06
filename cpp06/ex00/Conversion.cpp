#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << YELLOW <<  "Default Constructor called" << FIN << std::endl;
}

Conversion::Conversion(std::string str) : _Value(str)
{
	//std::cout << YELLOW << "Constructor called" << FIN << std::endl;
}

Conversion::Conversion(Conversion const &rhs)
{
	*this = rhs;
	std::cout << YELLOW << "Copy constructor called" << FIN << std::endl;
}

Conversion::~Conversion()
{
	std::cout << YELLOW << "Destructor called" << FIN << std::endl;
}

Conversion & Conversion::operator=(Conversion const & rhs)
{
	this->_Value = rhs._Value;
	std::cout << YELLOW << "Assignment effcetue" << FIN << std::endl;
	return *this;
}

const char * Conversion::Exception::what(void) const throw()
{
	std::cout << RED;
	return ("Argument number check");
}

void Conversion::Arg()
{
	throw Conversion::Exception();
}

std::string Conversion::getValue() const
{
	return (this->_Value);
}

int	Conversion::getInt() const
{
	return (std::stoi(this->_Value));
}

float Conversion::getFloat() const
{
	return (std::stof(this->_Value));
}

double Conversion::getDouble() const
{
	return (std::stod(this->_Value));
}
