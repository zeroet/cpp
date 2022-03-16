#include "Zombie.hpp"

int main()
{
	std::cout << COLOUR_DEFAULT;
	Zombie one;
	Zombie two("DATA");
	std::cout << COLOUR_FIN;
	
	std::cout << COLOUR_HEAP;
	Zombie *z = newZombie("HEAP");
	z->announce();
	delete z;
	std::cout << COLOUR_FIN;

	std::cout << COLOUR_STACK;
	randomChump("STACK");
	std::cout << COLOUR_FIN;
	
	std::cout << COLOUR_DEFAULT;
	return (0);
}
