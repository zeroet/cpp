#include "Fixed.hpp"

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_B "\033[0;38;5;21m"
# define COLOUR_FIN "\033[0m"

int main(void)
{
	std::cout << COLOUR_G;
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << COLOUR_Y;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_B;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << COLOUR_FIN;
	std::cout << COLOUR_G;
	return (0);
}


