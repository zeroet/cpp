#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed(void): _fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	//rhs.setRawBits(10); // si j'ai pas mis le const dans le parametre, ici je peux changer _fixe value
	(*this) = rhs;
	//this->_fixe = rhs.getRawBits();
}

// b = a    ==     b.operator=(a) 
Fixed& Fixed::operator=(const Fixed  &rhs)   // avec default operaton=, il y aura une probleme d'un cas deepcopy 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixe = rhs.getRawBits();
	return (*this);
}


int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_fixe);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixe = raw;
}

/*
Fixed::operator int(void)
{
	std::cout << "operator int called" << std::endl;
	return (this->_fixe);
}
*/
