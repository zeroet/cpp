#include "Conversion.hpp"
#include <cctype>

Conversion::Conversion() : _Input(""), _Value(0.0), _e(false)
{
	//std::cout << YELLOW <<  "Default Constructor called" << FIN << std::endl;
}

Conversion::Conversion(const std::string &str) : _Input(str), _Value(0.0), _e(false)
{
	//std::cout << YELLOW << "Constructor called" << FIN << std::endl;
	try
	{
		char *ptr = NULL;
		*(const_cast<double*>(&_Value)) = std::strtod(_Input.c_str(), &ptr);
		if (_Value == 0.0 && (_Input[0] != '-' && _Input[0] != '+' && !std::isdigit(_Input[0])))
			throw std::bad_alloc();
		if (*ptr && std::strcmp(ptr, "f"))
			throw std::bad_alloc();
	}
	catch (std::exception &)
	{
		_e = true;
	}
}


Conversion::Conversion(Conversion const &rhs) : _Input(rhs.getInput()), _Value(rhs.getValue()), _e(false) 
{
	//std::cout << YELLOW << "Copy constructor called" << FIN << std::endl;
}

Conversion::~Conversion()
{
//	std::cout << YELLOW << "Destructor called" << FIN << std::endl;
}

Conversion & Conversion::operator=(Conversion const & rhs)
{
	if (this != &rhs)
	{
		_e = rhs.getError();
		*(const_cast<std::string*>(&_Input)) = rhs.getInput();
		*(const_cast<double*>(&_Value)) = rhs.getValue();
	//	std::cout << YELLOW << "Assignment effcetue" << FIN << std::endl;
	}	
	return *this;
}

char Conversion::toChar() const
{
	return static_cast<char>(_Value);
}

int	Conversion::toInt() const
{
	return static_cast<int>(_Value);
}

float Conversion::toFloat() const
{
	return static_cast<float>(_Value);
}

double Conversion::toDouble() const
{
	return static_cast<double>(_Value);
}

bool Conversion::getError() const
{
	return _e;
}

const double& Conversion::getValue() const
{
	return _Value;
}

const std::string & Conversion::getInput() const
{
	return _Input;
}

static void	printToChar(std::ostream &o, const Conversion & rhs)
{
	o << "char: ";
	if (std::isnan(rhs.getValue()) || std::isinf(rhs.getValue()))
		o << "impossible" << std::endl;
	else if (std::isprint(rhs.toChar()))
		o << "'" << rhs.toChar() << "'" << std::endl;
	else
		o << "Non dispalyable" << std::endl;
}

static void	printToInt(std::ostream &o, const Conversion &rhs)
{
	o << "int: ";
	if (std::isnan(rhs.getValue()) || std::isinf(rhs.getValue()))
		o << "impossible" << std::endl;
	else
		o << rhs.toInt() << std::endl;
}

static void	printToReal(std::ostream &o, const Conversion &rhs)
{
	if (std::isnan(rhs.getValue()) || std::isinf(rhs.getValue()))
	{	
		o << "float: " << std::showpos << rhs.toFloat() << "f" << std::endl;
		o << "double: " <<std::showpos << rhs.toDouble() << std::endl;
		return ;
	}
	if (rhs.toFloat() == static_cast<int64_t>(rhs.toFloat()))
		o << "float: " << rhs.toFloat() << ".0f" << std::endl;
	else
		o <<"flaot: " << std::setprecision(std::numeric_limits<float>::digits10) << rhs.toFloat() << "f" << std::endl;
	if (rhs.toDouble() == static_cast<int64_t>(rhs.toDouble()))
		o << "double: " << rhs.toDouble() << ".0" << std::endl;
	else
		o << "double: " << std::setprecision(std::numeric_limits<double>::digits10) << rhs.toDouble() << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Conversion &rhs)
{
	if (rhs.getError())
	{		
		o << "Converting Failed" << std::endl;
		return o;
	}
	printToChar(o, rhs);
	printToInt(o, rhs);
	printToReal(o, rhs);
	return o;
}

