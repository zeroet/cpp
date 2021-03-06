#include "Fixed.hpp"

const int Fixed::_bits_fractionnaire(8);

Fixed::Fixed(void) : _value(0)
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

// pq on ne retourne pas & quand on fait les operatons +-*/  
// pendant les operatons, on appelle instance tmp (no name) pour garder le data.
// si le data va copy dans la resultat par ex ici c'et le 'b', l'instance tmp n/aura plus besoin.
// mais si on a mis & cela, il doit vivre plus du temps, alors si on copy grand data comme ~~MB etc, c'est pas bon pour le memoire

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_value++;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_value--;
	return (tmp);
}

// plus safe
Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
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
	std::cout << COLOUR_Y;
	o<<rhs.toFloat();
	std::cout << COLOUR_FIN;
	return o;
}

