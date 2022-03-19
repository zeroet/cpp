#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_B "\033[0;38;5;21m"
# define COLOUR_FIN "\033[0m"

class Fixed {

private:
	static const int _bits_fractionnaire;
	int _value;

public:
	Fixed(void);
	Fixed(int i);
	Fixed(float f);
	~Fixed(void);
	Fixed( const Fixed &rhs );
	Fixed&	operator=(const Fixed &rhs);

	int		getRawBits(void) const;
	void	setRawBits(const int &raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const &rhs);

#endif
