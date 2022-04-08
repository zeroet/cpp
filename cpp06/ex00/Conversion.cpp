#include "Conversion.hpp"

Conversion::Conversion()
{
	std::cout << YELLOW <<  "Default Constructor called" << FIN << std::endl;
}

Conversion::Conversion(std::string str) : _Value(str)
{
	std::cout << YELLOW << "Constructor called" << FIN << std::endl;
	try
	{
		if (std::isdigit(_Value[0]) == 0)
			throw Conversion::Exception();
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << FIN << std::endl;
		return ;
	}
	char c[100];
	std::strcpy(c, _Value.c_str());
	std::cout << c << std::endl;
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


