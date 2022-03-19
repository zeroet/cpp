#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:
	int _fixe;
	const static int _bit;

public:
	Fixed();			//canonical
	~Fixed();			//canonical
	Fixed(Fixed const &rhs);

	
	int	getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed &  operator=( Fixed const &rhs); //canonical    fonc name is "operator="   Fixed& is type! 
	
	operator int(void);

};

//std::ostream & operator<<( std::ostream & o , Fixed const & i);

#endif
