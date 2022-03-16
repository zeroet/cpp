#include "Zombie.hpp"

Zombie* newZombie(std::string str)
{
	Zombie *ptr = new Zombie(str);
	return (ptr);
}
