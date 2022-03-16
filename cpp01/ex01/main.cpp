#include "Zombie.hpp"

int main()
{
	std::cout << COLOUR_Y;
	Zombie one;
	Zombie two("DATA");
	std::cout << COLOUR_FIN;
	
	int i(6);
	std::cout << COLOUR_G;	
	Zombie* tmp = zombieHorde(i, "HEAP");
	for( int num = 0; num < i; num++)
		tmp[num].announce();
	std::cout << COLOUR_FIN;
	
	std::cout << COLOUR_R;
	delete[] tmp;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_Y;
	return (0);
}
