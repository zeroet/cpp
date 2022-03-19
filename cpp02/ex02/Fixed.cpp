#include "Fixed.hpp"

const int Fixed::_bits_fractionnaire(8);

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int i) :_value(i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << _bits_fractionnaire;
}

Fixed::Fixed(float f) : _value(f) // interdit!  operation bits pour Double et Float  
// on utilise roundf(), "valeur approchee par defaut" ensuite, num x 2^8 pour avoir 8 bits de fractionnaire a la fin.
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << _bits_fractionnaire));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const &raw ) 
{
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->_value >> _bits_fractionnaire);
}

float	Fixed::toFloat(void) const
{
	return (float(this->_value) / (1 << _bits_fractionnaire));
}


std::ostream& operator<<( std::ostream &o , Fixed const &rhs)
{
	o<<rhs.toFloat();
	return o;
}

