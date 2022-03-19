#include "Fixed.hpp"

# define COLOUR_Y "\033[0;38;5;220m"
# define COLOUR_G "\033[0;38;5;42m"
# define COLOUR_R "\033[0;38;5;203m"
# define COLOUR_B "\033[0;38;5;21m"
# define COLOUR_FIN "\033[0m"

int main(void)
{
	std::cout << COLOUR_Y;
	Fixed a;
	std::cout << COLOUR_G;
	Fixed b( a );
	std::cout << COLOUR_R;
	Fixed c;

	std::cout << COLOUR_B;
	c = b;

	std::cout << COLOUR_FIN;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

/*   operator function, si je ecris que a, quand je veux valeur _fixe de class a
	std::cout << COLOUR_Y;
	std::cout << a << std::endl;
	std::cout << COLOUR_FIN;
*/
	return 0;
}
